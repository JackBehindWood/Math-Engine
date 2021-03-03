namespace Math {

template<typename T>
Vector2D<bool> operator==(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x == vec2.x;
  vec.y = vec1.y == vec2.y;
  return vec;
}

template<typename T>
Vector2D<bool> operator!=(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x != vec2.x;
  vec.y = vec1.y != vec2.y;
  return vec;
}

template<typename T>
Vector2D<bool> operator>(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x > vec2.x;
  vec.y = vec1.y > vec2.y;
  return vec;
}

template<typename T>
Vector2D<bool> operator<(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x < vec2.x;
  vec.y = vec1.y < vec2.y;
  return vec;
}

template<typename T>
Vector2D<bool> operator>=(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x >= vec2.x;
  vec.y = vec1.y >= vec2.y;
  return vec;
}

template<typename T>
Vector2D<bool> operator<=(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  Vector2D<bool> vec;
  vec.x = vec1.x <= vec2.x;
  vec.y = vec1.y <= vec2.y;
  return vec;
}

template<typename T>
Vector3D<bool> operator==(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x == vec2.x;
  vec.y = vec1.y == vec2.y;
  vec.z = vec1.z == vec2.z;
  return vec;
}

template<typename T>
Vector3D<bool> operator!=(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x != vec2.x;
  vec.y = vec1.y != vec2.y;
  vec.z = vec1.z != vec2.z;
  return vec;
}

template<typename T>
Vector3D<bool> operator>(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x > vec2.x;
  vec.y = vec1.y > vec2.y;
  vec.z = vec1.z > vec2.z;
  return vec;
}

template<typename T>
Vector3D<bool> operator<(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x < vec2.x;
  vec.y = vec1.y < vec2.y;
  vec.z = vec1.z < vec2.z;
  return vec;
}

template<typename T>
Vector3D<bool> operator>=(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x >= vec2.x;
  vec.y = vec1.y >= vec2.y;
  vec.z = vec1.z >= vec2.z;
  return vec;
}

template<typename T>
Vector3D<bool> operator<=(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  Vector3D<bool> vec;
  vec.x = vec1.x <= vec2.x;
  vec.y = vec1.y <= vec2.y;
  vec.z = vec1.z <= vec2.z;
  return vec;
}

template<typename T>
Vector4D<bool> operator==(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x == vec2.x;
  vec.y = vec1.y == vec2.y;
  vec.z = vec1.z == vec2.z;
  vec.w = vec1.w == vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator!=(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x != vec2.x;
  vec.y = vec1.y != vec2.y;
  vec.z = vec1.z != vec2.z;
  vec.w = vec1.w != vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator>(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x > vec2.x;
  vec.y = vec1.y > vec2.y;
  vec.z = vec1.z > vec2.z;
  vec.w = vec1.w > vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator<(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x < vec2.x;
  vec.y = vec1.y < vec2.y;
  vec.z = vec1.z < vec2.z;
  vec.w = vec1.w < vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator>=(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x >= vec2.x;
  vec.y = vec1.y >= vec2.y;
  vec.z = vec1.z >= vec2.z;
  vec.w = vec1.w >= vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator<=(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  Vector4D<bool> vec;
  vec.x = vec1.x <= vec2.x;
  vec.y = vec1.y <= vec2.y;
  vec.z = vec1.z <= vec2.z;
  vec.w = vec1.w <= vec2.w;
  return vec;
}

template<typename T>
Vector4D<bool> equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<T> epsil(eps,eps,eps,eps);
  return abs(vec1 - vec2) < epsil;
}

template<typename T>
Vector3D<bool> equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector3D<T> epsil(eps,eps,eps);
  return abs(vec1 - vec2) < epsil;
}

template<typename T>
Vector2D<bool> equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector2D<T> epsil(eps,eps);
  return abs(vec1 - vec2) < epsil;
}


template<typename T>
Vector4D<bool> not_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<T> epsil(eps,eps,eps,eps);
  return abs(vec1 - vec2) > epsil;
}

template<typename T>
Vector3D<bool> not_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector3D<T> epsil(eps,eps,eps);
  return abs(vec1 - vec2) > epsil;
}

template<typename T>
Vector2D<bool> not_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector2D<T> epsil(eps,eps);
  return abs(vec1 - vec2) > epsil;
}

template<typename T>
Vector4D<bool> less_than(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  return (vec1 - vec2) < val;
}

template<typename T>
Vector3D<bool> less_than(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector3D<T> val(v,v,v);
  return (vec1 - vec2) < val;
}

template<typename T>
Vector2D<bool> less_than(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector2D<T> val(v,v);
  return (vec1 - vec2) < val;
}


template<typename T>
Vector4D<bool> less_than_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  return (vec1 - vec2) <= val;
}

template<typename T>
Vector3D<bool> less_than_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector3D<T> val(v,v,v);
  return (vec1 - vec2) <= val;
}

template<typename T>
Vector2D<bool> less_than_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector2D<T> val(v,v,v);
  return (vec1 - vec2) <= val;
}

template<typename T>
Vector4D<bool> greater_than(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  return (vec1 - vec2) > val;
}

template<typename T>
Vector3D<bool> greater_than(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector3D<T> val(v,v,v);
  return (vec1 - vec2) > val;
}

template<typename T>
Vector2D<bool> greater_than(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector2D<T> val(v,v);
  return (vec1 - vec2) > val;
}

template<typename T>
Vector4D<bool> greater_than_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  return (vec1 - vec2) >= val;
}

template<typename T>
Vector3D<bool> greater_than_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector3D<T> val(v,v,v);
  return (vec1 - vec2) >= val;
}

template<typename T>
Vector2D<bool> greater_than_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T v = static_cast<T>(0);
  Vector2D<T> val(v,v);
  return (vec1 - vec2) >= val;
}

bool all(const Vector4D<bool>& vec)
{
  return (vec.x && vec.y && vec.z && vec.w);
}

bool all(const Vector3D<bool>& vec)
{
  return (vec.x && vec.y && vec.z);
}

bool all(const Vector2D<bool>& vec)
{
  return (vec.x && vec.y);
}

bool any(const Vector4D<bool>& vec)
{
  return (vec.x || vec.y || vec.z || vec.w);
}

bool any(const Vector3D<bool>& vec)
{
  return (vec.x || vec.y || vec.z);
}

bool any(const Vector2D<bool>& vec)
{
  return (vec.x || vec.y);
}

template<typename T>
Vector4D<bool> epsilon_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) < eps;
  vec.y = abs(vec1.y - vec2.y) < eps;
  vec.z = abs(vec1.z - vec2.z) < eps;
  vec.w = abs(vec1.w - vec2.w) < eps;
  return vec;
}

template<typename T>
Vector3D<bool> epsilon_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector3D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) < eps;
  vec.y = abs(vec1.y - vec2.y) < eps;
  vec.z = abs(vec1.z - vec2.z) < eps;
  return vec;
}

template<typename T>
Vector2D<bool> epsilon_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector2D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) < eps;
  vec.y = abs(vec1.y - vec2.y) < eps;
  return vec;
}

template<typename T>
Vector4D<bool> epsilon_not_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) >= eps;
  vec.y = abs(vec1.y - vec2.y) >= eps;
  vec.z = abs(vec1.z - vec2.z) >= eps;
  vec.w = abs(vec1.w - vec2.w) >= eps;
  return vec;
}

template<typename T>
Vector3D<bool> epsilon_not_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector3D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) >= eps;
  vec.y = abs(vec1.y - vec2.y) >= eps;
  vec.z = abs(vec1.z - vec2.z) >= eps;
  return vec;
}

template<typename T>
Vector2D<bool> epsilon_not_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  T eps = static_cast<T>(epsilon);
  Vector2D<bool> vec;
  vec.x = abs(vec1.x - vec2.x) >= eps;
  vec.y = abs(vec1.y - vec2.y) >= eps;
  return vec;
}



} //end namespace
