
namespace Math {

template<typename T>
Matrix<T> orthographic(T left, T right, T bottom, T top, T near, T far)
{
  Matrix<T> mat = Matrix<T>::identity(4);
	mat[0][0] = static_cast<T>(2) / (right - left);
	mat[1][1] = static_cast<T>(2) / (top - bottom);
	mat[2][2] = static_cast<T>(2) / (far - near);
	mat[0][3] = - (right + left) / (right - left);
	mat[1][3] = - (top + bottom) / (top - bottom);
	mat[2][3] = - (far + near) / (far - near);
	return mat;
}

template<typename T>
Matrix<T> frustum(T left, T right, T bottom, T top, T near, T far)
{
  Matrix<T> mat = Matrix<T>::zeros(4, 4);
	mat[0][0] = (static_cast<T>(2) * near) / (right - left);
	mat[1][1] = (static_cast<T>(2) * near) / (top - bottom);
	mat[0][2] = (right + left) / (right - left);
	mat[1][2] = (top + bottom) / (top - bottom);
	mat[2][2] = (far + near) / (far - near);
	mat[3][2] = static_cast<T>(1);
	mat[2][3] = - (static_cast<T>(2) * far * near) / (far - near);
	return mat;
}

template<typename T>
Matrix<T> perspective(T fov, T aspect, T near, T far)
{
  assert("Cannot create projection" && abs(aspect - static_cast<T>(epsilon)) > static_cast<T>(0));

	const T tan_Half_fov = tan(fov / static_cast<T>(2));

	Matrix<T> mat = Matrix<T>::zeros(4, 4);
	mat[0][0] = static_cast<T>(1) / (aspect * tan_Half_fov);
	mat[1][1] = static_cast<T>(1) / (tan_Half_fov);
	mat[2][2] = (far + near) / (far - near);
	mat[3][2] = static_cast<T>(1);
	mat[2][3] = - (static_cast<T>(2) * far * near) / (far - near);
	return mat;
}

template<typename T>
Matrix<T> lookat(const Vector3D<T>& pos, const Vector3D<T>& target, const Vector3D<T>& up)
{
  const Vector3D<T> f(normalize(target - pos));
  const Vector3D<T> s(normalize(cross(up, f)));
  const Vector3D<T> u(cross(f, s));
  Matrix<T> mat = Matrix<T>::identity(4);

  mat[0][0] = s.x;
	mat[0][1] = s.y;
	mat[0][2] = s.z;
	mat[1][0] = u.x;
	mat[1][1] = u.y;
	mat[1][2] = u.z;
	mat[2][0] = f.x;
	mat[2][1] = f.y;
	mat[2][2] = f.z;
	mat[0][3] =-dot(s, pos);
	mat[1][3] =-dot(u, pos);
	mat[2][3] = dot(f, pos);
  return mat;
}

// template<typename T>
// Quaternion<T> lookat(const Vector3D<T>& dir, const Vector3D<T>& up)
// {
//   assert("not implemented yet" && false);
//   return Quaternion<T>();
// }


} // end namespace
