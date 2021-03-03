#ifndef _QUATERNIONMATH_H_
#define _QUATERNIONMATH_H_

namespace Math{

template<typename T> Quaternion<T> angle_axis(T angle, Vector3D<T>& axis, const Vector3D<T>& v);
template<typename T> Quaternion<T> angle_axis(T angle, Vector3D<T>& axis);
template<typename T> Vector3D<T> vector_angle_axis(T angle, Vector3D<T>& axis, const Vector3D<T>& v);

template<typename T> Quaternion<T> lerp(const Quaternion<T>& quat1, const Quaternion<T>& quat2, const T& t);
template<typename T> Quaternion<T> slerp(const Quaternion<T>& quat1, const Quaternion<T>& quat2, const T& t);

template<typename T> Quaternion<T> exp(const Quaternion<T>& quat);
template<typename T> Quaternion<T> pow(const Quaternion<T>& quat, const T& x);
template<typename T> Quaternion<T> ln(Quaternion<T>& quat);
template<typename T, typename Q> Quaternion<T> log(Quaternion<T>& quat, const Q& x);

template<typename T> Quaternion<T> operator*(T v, const Quaternion<T>& quat);

template<typename T> Quaternion<T> sign(const Quaternion<T>& quat);
template<typename T> Quaternion<T> floor(const Quaternion<T>& quat);
template<typename T> Quaternion<T> trunc(const Quaternion<T>& quat);
template<typename T> Quaternion<T> round(const Quaternion<T>& quat);
template<typename T> Quaternion<T> round_even(const Quaternion<T>& quat);
template<typename T> Quaternion<T> ceil(const Quaternion<T>& quat);
template<typename T> Quaternion<T> fract(const T& quat);
template<typename T> Quaternion<T> mod(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Quaternion<T> mod(const Quaternion<T>& quat, const T& x);

}// end namespace

#include "QuaternionMath.inl"

#endif
