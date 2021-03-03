#include "../Quaternion/Quaternion.h"

template<typename T>
Matrix<T> translate(const Matrix<T>& mat, const Vector3D<T>& vec)
{
  Matrix<T> new_mat(mat);
  new_mat[0][3] = vec.x;
  new_mat[1][3] = vec.y;
  new_mat[2][3] = vec.z;
  return new_mat;
}

template<typename T>
Matrix<T> rotate(const Matrix<T>& mat, T angle, const Vector3D<T>& vec)
{
  const T a = angle;
	const T c = cos(a);
	const T s = sin(a);

	Vector3D<T> axis(normalize(vec));
	Vector3D<T> temp((T(1) - c) * axis);

	Matrix<T> rotate(4, 4);
	rotate[0][0] = c + temp.x * axis.x;
	rotate[0][1] = temp.x * axis.y + s * axis.z;
	rotate[0][2] = temp.x * axis.z - s * axis.y;

	rotate[1][0] = temp.y * axis.x - s * axis.z;
	rotate[1][1] = c + temp.y * axis.y;
	rotate[1][2] = temp.y * axis.z + s * axis.x;

	rotate[2][0] = temp.z * axis.x + s * axis.y;
	rotate[2][1] = temp.z * axis.y - s * axis.x;
	rotate[2][2] = c + temp.z * axis.z;

	Matrix<T> new_mat(4, 4);
  for (int i = 0; i < 4; i++)
  {
    new_mat[i][0] = mat[i][0] * rotate[0][0] + mat[i][1] * rotate[0][1] + mat[i][2] * rotate[0][2];
    new_mat[i][1] = mat[i][0] * rotate[1][0] + mat[i][1] * rotate[1][1] + mat[i][2] * rotate[1][2];
    new_mat[i][2] = mat[i][0] * rotate[2][0] + mat[i][1] * rotate[2][1] + mat[i][2] * rotate[2][2];
    new_mat[i][3] = mat[i][3];
  }
	return new_mat;
}

template<typename T> Matrix<T> rotate(const Matrix<T>& mat, const Vector3D<T>& vec)
{
  Matrix<T> new_mat = quat_to_matrix(4, Quaternion<T>(vec));
  new_mat[0][3] = mat[0][3];
  new_mat[1][3] = mat[1][3];
  new_mat[2][3] = mat[2][3];
  new_mat[3][3] = mat[3][3];
  return new_mat;
}

template<typename T>
Matrix<T> scale(const Matrix<T>& mat, const Vector3D<T>& vec)
{
  Matrix<T> new_mat(mat);
  for (int j = 0; j < 3; j++)
  {
    new_mat[0][j] = mat[0][j] * vec.x;
    new_mat[1][j] = mat[1][j] * vec.y;
    new_mat[2][j] = mat[2][j] * vec.z;
  }
  return new_mat;
}
