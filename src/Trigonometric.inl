namespace Math {

  template<typename T>
  T sin(const T& x)
  {
    return std::sin(x);
  }

  template<typename T>
  T cos(const T& x)
  {
    return std::cos(x);
  }

  template<typename T>
  T tan(const T& x)
  {
    return std::tan(x);
  }

  template<typename T>
  T asin(const T& x)
  {
    return std::asin(x);
  }

  template<typename T>
  T acos(const T& x)
  {
    return std::acos(x);
  }

  template<typename T>
  T atan(const T& x)
  {
    return std::atan(x);
  }

  template<typename T, typename Q>
  T atan(const T& x, const T& y)
  {
    return std::atan2(x, y);
  }

  template<typename T>
  T sinh(const T& x)
  {
    return std::sinh(x);
  }

  template<typename T>
  T cosh(const T& x)
  {
    return std::cosh(x);
  }

  template<typename T>
  T tanh(const T& x)
  {
    return std::tanh(x);
  }

  template<typename T>
  T asinh(const T& x)
  {
    return std::asinh(x);
  }

  template<typename T>
  T acosh(const T& x)
  {
    return std::acosh(x);
  }

  template<typename T>
  T atanh(const T& x)
  {
    return std::atanh(x);
  }

  template<typename T>
  Vector4D<T> radians(const Vector4D<T>& vec)
  {
    return Vector4D<T>(radians(vec.x),radians(vec.y),radians(vec.z),radians(vec.w));
  }

  template<typename T>
  Vector3D<T> radians(const Vector3D<T>& vec)
  {
    return Vector3D<T>(radians(vec.x),radians(vec.y),radians(vec.z));
  }

  template<typename T>
  Vector2D<T> radians(const Vector2D<T>& vec)
  {
    return Vector2D<T>(radians(vec.x),radians(vec.y));
  }

  template<typename T>
  Vector4D<T> degrees(const Vector4D<T>& vec)
  {
    return Vector4D<T>(degrees(vec.x),degrees(vec.y),degrees(vec.z),degrees(vec.w));
  }

  template<typename T>
  Vector3D<T> degrees(const Vector3D<T>& vec)
  {
    return Vector3D<T>(degrees(vec.x),degrees(vec.y),degrees(vec.z));
  }

  template<typename T>
  Vector2D<T> degrees(const Vector2D<T>& vec)
  {
    return Vector2D<T>(degrees(vec.x),degrees(vec.y));
  }

  template<typename T>
  Vector4D<T> sin(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::sin(vec.x),std::sin(vec.y),std::sin(vec.z),std::sin(vec.w));
  }

  template<typename T>
  Vector3D<T> sin(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::sin(vec.x),std::sin(vec.y),std::sin(vec.z));
  }

  template<typename T>
  Vector2D<T> sin(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::sin(vec.x),std::sin(vec.y));
  }

  template<typename T>
  Vector4D<T> cos(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::cos(vec.x),std::cos(vec.y),std::cos(vec.z),std::cos(vec.w));
  }

  template<typename T>
  Vector3D<T> cos(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::cos(vec.x),std::cos(vec.y),std::cos(vec.z));
  }

  template<typename T>
  Vector2D<T> cos(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::cos(vec.x),std::cos(vec.y));
  }

  template<typename T>
  Vector4D<T> tan(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::tan(vec.x),std::tan(vec.y),std::tan(vec.z),std::tan(vec.w));
  }

  template<typename T>
  Vector3D<T> tan(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::tan(vec.x),std::tan(vec.y),std::tan(vec.z));
  }

  template<typename T>
  Vector2D<T> tan(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::tan(vec.x),std::tan(vec.y));
  }

  template<typename T>
  Vector4D<T> asin(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::asin(vec.x),std::asin(vec.y),std::asin(vec.z),std::asin(vec.w));
  }

  template<typename T>
  Vector3D<T> asin(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::asin(vec.x),std::asin(vec.y),std::asin(vec.z));
  }

  template<typename T>
  Vector2D<T> asin(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::asin(vec.x),std::asin(vec.y));
  }

  template<typename T>
  Vector4D<T> acos(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::acos(vec.x),std::acos(vec.y),std::acos(vec.z),std::acos(vec.w));
  }

  template<typename T>
  Vector3D<T> acos(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::acos(vec.x),std::acos(vec.y),std::acos(vec.z));
  }

  template<typename T>
  Vector2D<T> acos(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::acos(vec.x),std::acos(vec.y));
  }

  template<typename T>
  Vector4D<T> atan(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::atan(vec.x),std::atan(vec.y),std::atan(vec.z),std::atan(vec.w));
  }

  template<typename T>
  Vector3D<T> atan(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::atan(vec.x),std::atan(vec.y),std::atan(vec.z));
  }

  template<typename T>
  Vector2D<T> atan(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::atan(vec.x),std::atan(vec.y));
  }

  template<typename T>
  Vector4D<T> atan(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
  {
    return Vector4D<T>(std::atan2(vec1.x, vec2.x),std::atan2(vec1.y, vec2.y),std::atan2(vec1.z, vec2.z),std::atan2(vec1.w, vec2.w));
  }

  template<typename T>
  Vector3D<T> atan(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
  {
    return Vector3D<T>(std::atan2(vec1.x, vec2.x),std::atan2(vec1.y, vec2.y),std::atan2(vec1.z, vec2.z));
  }

  template<typename T>
  Vector2D<T> atan(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
  {
    return Vector2D<T>(std::atan2(vec1.x, vec2.x),std::atan2(vec1.y, vec2.y));
  }

  template<typename T>
  Vector4D<T> sinh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::sinh(vec.x),std::sinh(vec.y),std::sinh(vec.z),std::sinh(vec.w));
  }

  template<typename T>
  Vector3D<T> sinh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::sinh(vec.x),std::sinh(vec.y),std::sinh(vec.z));
  }

  template<typename T>
  Vector2D<T> sinh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::sinh(vec.x),std::sinh(vec.y));
  }

  template<typename T>
  Vector4D<T> cosh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::cosh(vec.x),std::cosh(vec.y),std::cosh(vec.z),std::cosh(vec.w));
  }

  template<typename T>
  Vector3D<T> cosh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::cosh(vec.x),std::cosh(vec.y),std::cosh(vec.z));
  }

  template<typename T>
  Vector2D<T> cosh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::cosh(vec.x),std::cosh(vec.y));
  }

  template<typename T>
  Vector4D<T> tanh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::tanh(vec.x),std::tanh(vec.y),std::tanh(vec.z),std::tanh(vec.w));
  }

  template<typename T>
  Vector3D<T> tanh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::tanh(vec.x),std::tanh(vec.y),std::tanh(vec.z));
  }

  template<typename T>
  Vector2D<T> tanh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::tanh(vec.x),std::tanh(vec.y));
  }

  template<typename T>
  Vector4D<T> asinh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::asinh(vec.x),std::asinh(vec.y),std::asinh(vec.z),std::asinh(vec.w));
  }

  template<typename T>
  Vector3D<T> asinh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::asinh(vec.x),std::asinh(vec.y),std::asinh(vec.z));
  }

  template<typename T>
  Vector2D<T> asinh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::asinh(vec.x),std::asinh(vec.y));
  }

  template<typename T>
  Vector4D<T> acosh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::acosh(vec.x),std::acosh(vec.y),std::acosh(vec.z),std::acosh(vec.w));
  }

  template<typename T>
  Vector3D<T> acosh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::acosh(vec.x),std::acosh(vec.y),std::acosh(vec.z));
  }

  template<typename T>
  Vector2D<T> acosh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::acosh(vec.x),std::acosh(vec.y));
  }

  template<typename T>
  Vector4D<T> atanh(const Vector4D<T>& vec)
  {
    return Vector4D<T>(std::atanh(vec.x),std::atanh(vec.y),std::atanh(vec.z),std::atanh(vec.w));
  }

  template<typename T>
  Vector3D<T> atanh(const Vector3D<T>& vec)
  {
    return Vector3D<T>(std::atanh(vec.x),std::atanh(vec.y),std::atanh(vec.z));
  }

  template<typename T>
  Vector2D<T> atanh(const Vector2D<T>& vec)
  {
    return Vector2D<T>(std::atanh(vec.x),std::atanh(vec.y));
  }

} // end namespace
