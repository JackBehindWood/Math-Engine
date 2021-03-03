namespace Math {

template<typename T>
const T* value_ptr(const Vector4D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
T* value_ptr(Vector4D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
const T* value_ptr(const Vector3D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
T* value_ptr(Vector3D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
const T* value_ptr(const Vector2D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
T* value_ptr(Vector2D<T>& vec)
{
  return &(vec.x);
}

template<typename T>
const T* value_ptr(const Matrix<T>& mat)
{
 return &(mat[0][0]);
}

template<typename T>
T* value_ptr(Matrix<T>& mat)
{
  return &(mat[0][0]);
}

template<typename T>
const T* value_ptr(const Quaternion<T>& quat)
{
  return &(quat.w);
}

template<typename T>
T* value_ptr(Quaternion<T>& quat)
{
  return &(quat.w);
}

} // end namespace
