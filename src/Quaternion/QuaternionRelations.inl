namespace Math {

template<typename T>
Vector4D<bool> operator==(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x == quat2.vec.x;
  vec.z = quat1.vec.y == quat2.vec.y;
  vec.w = quat1.vec.z == quat2.vec.z;
  vec.x = quat1.w == quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator!=(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x != quat2.vec.x;
  vec.z = quat1.vec.y != quat2.vec.y;
  vec.w = quat1.vec.z != quat2.vec.z;
  vec.x = quat1.w != quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator>(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x > quat2.vec.x;
  vec.z = quat1.vec.y > quat2.vec.y;
  vec.w = quat1.vec.z > quat2.vec.z;
  vec.x = quat1.w > quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator<(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x < quat2.vec.x;
  vec.z = quat1.vec.y < quat2.vec.y;
  vec.w = quat1.vec.z < quat2.vec.z;
  vec.x = quat1.w < quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator>=(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x >= quat2.vec.x;
  vec.z = quat1.vec.y >= quat2.vec.y;
  vec.w = quat1.vec.z >= quat2.vec.z;
  vec.x = quat1.w >= quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> operator<=(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  Vector4D<bool> vec;
  vec.y = quat1.vec.x <= quat2.vec.x;
  vec.z = quat1.vec.y <= quat2.vec.y;
  vec.w = quat1.vec.z <= quat2.vec.z;
  vec.x = quat1.w <= quat2.w;
  return vec;
}

template<typename T>
Vector4D<bool> equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<T> epsil(eps,eps,eps,eps);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return abs(vec2 - vec1) < epsil;
}
template<typename T>
Vector4D<bool> not_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T eps = static_cast<T>(epsilon);
  Vector4D<T> epsil(eps,eps,eps,eps);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return abs(vec2 - vec1) > epsil;
}
template<typename T>
Vector4D<bool> less_than(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return (vec1 - vec2) < val;
}
template<typename T>
Vector4D<bool> less_than_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return (vec1 - vec2) <= val;
}
template<typename T>
Vector4D<bool> greater_than(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return (vec1 - vec2) > val;
}
template<typename T>
Vector4D<bool> greater_than_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T v = static_cast<T>(0);
  Vector4D<T> val(v,v,v,v);
  Vector4D<T> vec1(quat1.w, quat1.vec.x, quat1.vec.y, quat1.vec.z);
  Vector4D<T> vec2(quat2.w, quat2.vec.x, quat2.vec.y, quat2.vec.z);
  return (vec1 - vec2) >= val;
}

bool all(const Quaternion<bool>& quat)
{
  return (quat.w && quat.vec.x && quat.vec.y && quat.vec.z);
}
bool any(const Quaternion<bool>& quat)
{
  return (quat.w || quat.vec.x || quat.vec.y || quat.vec.z);
}

template<typename T>
Quaternion<bool> epsilon_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T eps = static_cast<T>(epsilon);
  Quaternion<bool> quat;
  quat.vec.x = abs(quat1.vec.x - quat2.vec.x) < eps;
  quat.vec.y = abs(quat1.vec.y - quat2.vec.y) < eps;
  quat.vec.z = abs(quat1.vec.z - quat2.vec.z) < eps;
  quat.w = abs(quat1.w - quat2.w) < eps;
  return quat;
}

template<typename T>
Quaternion<bool> epsilon_not_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  T eps = static_cast<T>(epsilon);
  Quaternion<bool> quat;
  quat.vec.x = abs(quat1.vec.x - quat2.vec.x) < eps;
  quat.vec.y = abs(quat1.vec.y - quat2.vec.y) < eps;
  quat.vec.z = abs(quat1.vec.z - quat2.vec.z) < eps;
  quat.w = abs(quat1.w - quat2.w) >= eps;
  return quat;
}



} //end namespace
