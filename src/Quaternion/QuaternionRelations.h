#ifndef _QUATERNIONRELATIONS_H_
#define _QUATERNIONRELATIONS_H_

namespace Math {

template<typename T> Vector4D<bool> operator==(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> operator!=(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> operator>(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> operator<(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> operator>=(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> operator<=(const Quaternion<T>& quat1, const Quaternion<T>& quat2);

template<typename T> Vector4D<bool> equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> not_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> less_than(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> less_than_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> greater_than(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Vector4D<bool> greater_than_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);

bool all(const Quaternion<bool>& quat);
bool any(const Quaternion<bool>& quat);

template<typename T> Quaternion<bool> epsilon_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);
template<typename T> Quaternion<bool> epsilon_not_equal(const Quaternion<T>& quat1, const Quaternion<T>& quat2);

} //end namespace

#include "QuaternionRelations.inl"

#endif
