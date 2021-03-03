template<typename T>
template<typename Q>
Vector2D<T>::Vector2D(Q x, Q y) : x(static_cast<T>(x)), y(static_cast<T>(y))
{

}

template<typename T>
template<typename Q>
Vector2D<T>::Vector2D(const Vector2D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y))
{

}

template<typename T>
template<typename Q>
Vector2D<T>::Vector2D(const Vector3D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y))
{

}

template<typename T>
template<typename Q>
Vector2D<T>::Vector2D(const Vector4D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y))
{

}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator=(const Vector2D<Q>& vec)
{
  x = static_cast<T>(vec.x);
  y = static_cast<T>(vec.y);
  return *this;
}

//operators

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator+(const Vector2D<Q>& vec) const
{
  return Vector2D<T>(x+static_cast<T>(vec.x),y+static_cast<T>(vec.y));
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator+(Q X) const
{
  return Vector2D<T>(x+static_cast<T>(X), y+static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator-(const Vector2D<Q>& vec) const
{
  return Vector2D<T>(x-static_cast<T>(vec.x),y-static_cast<T>(vec.y));
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator-(Q X) const
{
  return Vector2D<T>(x-static_cast<T>(X), y-static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator*(Q X) const
{
  return Vector2D<T>(x*static_cast<T>(X), y*static_cast<T>(X));
}

template<typename T>
template<typename Q>
T Vector2D<T>::operator*(Vector2D<Q> vec) const
{
  return x*static_cast<T>(vec.x) + y*static_cast<T>(vec.y);
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator/(Q X) const
{
  return Vector2D<T>(x/static_cast<T>(X), y/static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector2D<T> Vector2D<T>::operator/(Vector2D<Q> vec) const
{
 return Vector2D<T>(x/static_cast<T>(vec.x), y/static_cast<T>(vec.w));
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator+=(const Vector2D<Q>& vec)
{
  x += static_cast<T>(vec.x);
  y += static_cast<T>(vec.y);
  return *this;
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator+=(Q X)
{
  x += static_cast<T>(X);
  y += static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator-=(const Vector2D<Q>& vec)
{
  x -= static_cast<T>(vec.x);
  y -= static_cast<T>(vec.y);
  return *this;
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator-=(Q X)
{
  x -= static_cast<T>(X);
  y -= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator*=(Q X)
{
  x *= static_cast<T>(X);
  y *= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector2D<T>& Vector2D<T>::operator/=(Q X)
{
  x /= static_cast<T>(X);
  y /= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
void Vector2D<T>::set(Q X, Q Y)
{
  x = static_cast<T>(X);
  y = static_cast<T>(Y);
}

template<typename T>
float Vector2D<T>::magnitude() const
{
  float value = static_cast<float>(std::sqrt(x*x+y*y));
  return value;
}

template<typename T>
float Vector2D<T>::magnitude()
{
  float value = static_cast<float>(std::sqrt(x*x+y*y));
  return value;
}

template<typename T>
void Vector2D<T>::normalize()
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  x *= over_mag;
  y *= over_mag;
}

template<typename T>
Vector2D<T> Vector2D<T>::normal() const
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  return Vector2D<T>( x * over_mag, y * over_mag);
}

template<typename T>
Vector2D<T> Vector2D<T>::normal()
{
  const float mag = magnitude();
  T over_mag = 1/static_cast<T>(mag);
  return Vector2D<T>( x * over_mag, y * over_mag);
}

// extra functions

template<typename T, typename Q> Vector2D<T> operator+(Q x, const Vector2D<T>& vec)
{
  return vec+static_cast<T>(x);
}

template<typename T, typename Q> Vector2D<T> operator-(Q x, const Vector2D<T>& vec)
{
  Vector2D<T> new_vec;
  new_vec.x = static_cast<T>(x) - vec.x;
  new_vec.y = static_cast<T>(x) - vec.y;
  return new_vec;
}

template<typename T, typename Q> Vector2D<T> operator*(Q x, const Vector2D<T>& vec)
{
  return vec * static_cast<T>(x);
}

template<typename T, typename Q> Vector2D<T> operator/(Q x, const Vector2D<T>& vec)
{
  Vector2D<T> new_vec;
  new_vec.x = static_cast<T>(x)/vec.x;
  new_vec.y = static_cast<T>(x)/vec.y;
  return new_vec;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector2D<T>& vec)
{
  os << "Vec2(" << vec.x << ", " << vec.y << ")" << std::endl;
  return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, const Vector2D<T>& vec)
{
  is >> vec.x;
  is >> vec.y;
  return is;
}
