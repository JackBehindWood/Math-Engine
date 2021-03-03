template<typename T>
template<typename Q>
Vector4D<T>::Vector4D(Q x, Q y, Q z, Q w) : x(static_cast<T>(x)), y(static_cast<T>(y)), z(static_cast<T>(z)), w(static_cast<T>(w))
{}

template<typename T>
template<typename Q>
Vector4D<T>::Vector4D(const Vector4D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(vec.z)), w(static_cast<T>(vec.w))
{

}

template<typename T>
template<typename Q>
Vector4D<T>::Vector4D(const Vector2D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(0.0f)), w(static_cast<T>(0.0f))
{

}

template<typename T>
template<typename Q>
Vector4D<T>::Vector4D(const Vector3D<Q>& vec) : x(static_cast<T>(vec.x)), y(static_cast<T>(vec.y)), z(static_cast<T>(vec.z)), w(static_cast<T>(0.0f))
{

}


template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator=(const Vector4D<Q>& vec)
{
  x = static_cast<T>(vec.x);
  y = static_cast<T>(vec.y);
  z = static_cast<T>(vec.z);
  w = static_cast<T>(vec.w);
  return *this;
}

//operators

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator+(const Vector4D<Q>& vec) const
{
  return Vector4D<T>(x+static_cast<T>(vec.x),y+static_cast<T>(vec.y),z+static_cast<T>(vec.z),w+static_cast<T>(vec.w));
}

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator+(Q X) const
{
  return Vector4D<T>(x+static_cast<T>(X), y+static_cast<T>(X), z+static_cast<T>(X), w+static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator-(const Vector4D<Q>& vec) const
{
  return Vector4D<T>(x-static_cast<T>(vec.x),y-static_cast<T>(vec.y),z-static_cast<T>(vec.z), w-static_cast<T>(vec.w));
}

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator-(Q X) const
{
  return Vector4D<T>(x-static_cast<T>(X), y-static_cast<T>(X), z-static_cast<T>(X), w-static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator*(Q X) const
{
  return Vector4D<T>(x*static_cast<T>(X), y*static_cast<T>(X), z*static_cast<T>(X), w*static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector4D<T> Vector4D<T>::operator/(Q X) const
{
  return Vector4D<T>(x/static_cast<T>(X), y/static_cast<T>(X), z/static_cast<T>(X), w/static_cast<T>(X));
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator+=(const Vector4D<Q>& vec)
{
  x += static_cast<T>(vec.x);
  y += static_cast<T>(vec.y);
  z += static_cast<T>(vec.z);
  w += static_cast<T>(vec.w);
  return *this;
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator+=(Q X)
{
  x += static_cast<T>(X);
  y += static_cast<T>(X);
  z += static_cast<T>(X);
  w += static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator-=(const Vector4D<Q>& vec)
{
  x -= static_cast<T>(vec.x);
  y -= static_cast<T>(vec.y);
  z -= static_cast<T>(vec.z);
  w -= static_cast<T>(vec.w);
  return *this;
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator-=(Q X)
{
  x -= static_cast<T>(X);
  y -= static_cast<T>(X);
  z -= static_cast<T>(X);
  w -= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator*=(Q X)
{
  x *= static_cast<T>(X);
  y *= static_cast<T>(X);
  z *= static_cast<T>(X);
  w *= static_cast<T>(X);
  return *this;
}

template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::operator/=(Q X)
{
  x /= static_cast<T>(X);
  y /= static_cast<T>(X);
  z /= static_cast<T>(X);
  w /= static_cast<T>(X);
  return *this;
}


template<typename T>
template<typename Q>
Vector4D<T>& Vector4D<T>::set(Q X, Q Y, Q Z, Q W)
{
  x = static_cast<T>(X);
  y = static_cast<T>(Y);
  z = static_cast<T>(Z);
  w = static_cast<T>(W);
  return *this;
}

//extra functions

template<typename T, typename Q> Vector4D<T> operator+(Q x, const Vector4D<T>& vec)
{
  return vec+static_cast<T>(x);
}

template<typename T, typename Q> Vector4D<T> operator-(Q x, const Vector4D<T>& vec)
{
  Vector3D<T> new_vec;
  new_vec.x = static_cast<T>(x) - vec.x;
  new_vec.y = static_cast<T>(x) - vec.y;
  new_vec.z = static_cast<T>(x) - vec.z;
  return new_vec;
}

template<typename T, typename Q> Vector4D<T> operator*(Q x, const Vector4D<T>& vec)
{
  return vec * static_cast<T>(x);
}

template<typename T, typename Q> Vector4D<T> operator/(Q x, const Vector4D<T>& vec)
{
  Vector4D<T> new_vec;
  new_vec.x = static_cast<T>(x)/vec.x;
  new_vec.y = static_cast<T>(x)/vec.y;
  new_vec.z = static_cast<T>(x)/vec.z;
  new_vec.w = static_cast<T>(x)/vec.w;
  return new_vec;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector4D<T>& vec)
{
  os << "Vec4(" << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w << ")" << std::endl;
  return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, const Vector4D<T>& vec)
{
  is >> vec.x;
  is >> vec.y;
  is >> vec.z;
  is >> vec.w;
  return is;
}
