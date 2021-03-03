template<typename T>
template<typename Q>
Vector3D<T>::Vector3D(Q x, Q y, Q z) : x(static_cast<T>(x)), y(static_cast<T>(y)), z(static_cast<T>(z))
{

}

template<typename T>
template<typename Q>
Vector3D<T>::Vector3D(const Vector3D<Q>& vec): x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(vec.z))
{

}

template<typename T>
template<typename Q>
Vector3D<T>::Vector3D(const Vector2D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(0.0f))
{

}

template<typename T>
template<typename Q>
Vector3D<T>::Vector3D(const Vector4D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(vec.z))
{

}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator=(const Vector3D<Q>& vec)
{
  x = static_cast<T>(vec.x);
  y = static_cast<T>(vec.y);
  z = static_cast<T>(vec.z);
  return *this;
}

//operators

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator+(const Vector3D<Q>& vec) const
{
  return Vector3D<T>(x+static_cast<T>(vec.x),y+static_cast<T>(vec.y),z+static_cast<T>(vec.z));
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator+(Q X) const
{
  return Vector3D<T>(x+static_cast<T>(X), y+static_cast<T>(X), z+static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator-(const Vector3D<Q>& vec) const
{
  return Vector3D<T>(x-static_cast<T>(vec.x),y-static_cast<T>(vec.y),z-static_cast<T>(vec.z));
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator-(Q X) const
{
  return Vector3D<T>(x-static_cast<T>(X), y-static_cast<T>(X), z-static_cast<T>(X));
}

template<typename T>
template<typename Q>
T Vector3D<T>::operator*(Vector3D<Q> vec) const
{
  return x*static_cast<T>(vec.x) + y*static_cast<T>(vec.y) + z*static_cast<T>(vec.z);
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator*(Q X) const
{
  return Vector3D<T>(x*static_cast<T>(X), y*static_cast<T>(X), z*static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator/(Vector3D<Q> vec) const
{
 return Vector3D<T>(x/static_cast<T>(vec.x), y/static_cast<T>(vec.w), z/static_cast<T>(vec.z));
}

template<typename T>
template<typename Q>
Vector3D<T> Vector3D<T>::operator/(Q X) const
{
  return Vector3D<T>(x/static_cast<T>(X), y/static_cast<T>(X), z/static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator+=(const Vector3D<Q>& vec)
{
  x += static_cast<T>(vec.x);
  y += static_cast<T>(vec.y);
  z += static_cast<T>(vec.z);
  return *this;
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator+=(Q X)
{
  x += static_cast<T>(X);
  y += static_cast<T>(X);
  z += static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator-=(const Vector3D<Q>& vec)
{
  x -= static_cast<T>(vec.x);
  y -= static_cast<T>(vec.y);
  z -= static_cast<T>(vec.z);
  return *this;
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator-=(Q X)
{
  x -= static_cast<T>(X);
  y -= static_cast<T>(X);
  z -= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator*=(Q X)
{
  x *= static_cast<T>(X);
  y *= static_cast<T>(X);
  z *= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector3D<T>& Vector3D<T>::operator/=(Q X)
{
  x /= static_cast<T>(X);
  y /= static_cast<T>(X);
  z /= static_cast<T>(X);
  return *this;
}

// template<typename T>
// Vector3D<T> Vector3D<T>::operator+(const Vector2D<T>& vec) const
// {
//   x += vec.x;
//   y += vec.y;
// }
//
// template<typename T>
// Vector3D<T> Vector3D<T>::operator-(const Vector2D<T>& vec) const
// {
//   x -= vec.x;
//   y -= vec.y;
// }
//
// template<typename T>
// void Vector3D<T>::operator+=(const Vector2D<T>& vec)
// {
//   x += vec.x;
//   y += vec.y;
// }
//
// template<typename T>
// void Vector3D<T>::operator-=(const Vector2D<T>& vec)
// {
//   x -= vec.x;
//   y -= vec.y;
// }

//

template<typename T>
template<typename Q>
void Vector3D<T>::set(Q X, Q Y, Q Z)
{
  x = static_cast<T>(X);
  y = static_cast<T>(Y);
  z = static_cast<T>(Z);
}

template<typename T>
float Vector3D<T>::magnitude() const
{
  float value = static_cast<float>(std::sqrt(x*x+y*y+z*z));
  return value;
}

template<typename T>
float Vector3D<T>::magnitude()
{
  float value = static_cast<float>(std::sqrt(x*x+y*y+z*z));
  return value;
}

template<typename T>
void Vector3D<T>::normalize()
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  x *= over_mag;
  y *= over_mag;
  z *= over_mag;
}

template<typename T>
Vector3D<T> Vector3D<T>::normal() const
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  return Vector3D<T>( x * over_mag, y * over_mag, z * over_mag);
}

template<typename T>
Vector3D<T> Vector3D<T>::normal()
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  return Vector3D<T>( x * over_mag, y * over_mag, z * over_mag);
}

// extra functions

template<typename T, typename Q> Vector3D<T> operator+(Q x, const Vector3D<T>& vec)
{
  return vec+static_cast<T>(x);
}

template<typename T, typename Q> Vector3D<T> operator-(Q x, const Vector3D<T>& vec)
{
  Vector3D<T> new_vec;
  new_vec.x = static_cast<T>(x) - vec.x;
  new_vec.y = static_cast<T>(x) - vec.y;
  new_vec.z = static_cast<T>(x) - vec.z;
  return new_vec;
}

template<typename T, typename Q> Vector3D<T> operator*(Q x, const Vector3D<T>& vec)
{
  return vec * static_cast<T>(x);
}

template<typename T, typename Q> Vector3D<T> operator/(Q x, const Vector3D<T>& vec)
{
  Vector3D<T> new_vec;
  new_vec.x = static_cast<T>(x)/vec.x;
  new_vec.y = static_cast<T>(x)/vec.y;
  new_vec.z = static_cast<T>(x)/vec.z;
  return new_vec;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector3D<T>& vec)
{
  os << "Vec3(" << vec.x << ", " << vec.y << ", " << vec.z << ")" << std::endl;
  return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, const Vector3D<T>& vec)
{
  is >> vec.x;
  is >> vec.y;
  is >> vec.z;
  return is;
}
