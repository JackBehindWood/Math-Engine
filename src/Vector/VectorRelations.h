#ifndef _VECTORRELATIONS_H_
#define _VECTORRELATIONS_H_

namespace Math {

template<typename T> Vector2D<bool> operator==(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector2D<bool> operator!=(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector2D<bool> operator>(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector2D<bool> operator<(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector2D<bool> operator>=(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector2D<bool> operator<=(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector3D<bool> operator==(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector3D<bool> operator!=(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector3D<bool> operator>(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector3D<bool> operator<(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector3D<bool> operator>=(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector3D<bool> operator<=(const Vector3D<T>& vec1, const Vector3D<T>& vec2);

template<typename T> Vector4D<bool> operator==(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector4D<bool> operator!=(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector4D<bool> operator>(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector4D<bool> operator<(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector4D<bool> operator>=(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector4D<bool> operator<=(const Vector4D<T>& vec1, const Vector4D<T>& vec2);

template<typename T> Vector4D<bool> equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector4D<bool> not_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> not_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> not_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector4D<bool> less_than(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> less_than(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> less_than(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector4D<bool> less_than_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> less_than_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> less_than_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector4D<bool> greater_than(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> greater_than(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> greater_than(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

template<typename T> Vector4D<bool> greater_than_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> greater_than_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> greater_than_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);

bool all(const Vector4D<bool>& vec);
bool all(const Vector3D<bool>& vec);
bool all(const Vector2D<bool>& vec);

bool any(const Vector4D<bool>& vec);
bool any(const Vector3D<bool>& vec);
bool any(const Vector2D<bool>& vec);

template<typename T> Vector4D<bool> epsilon_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> epsilon_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> epsilon_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector4D<bool> epsilon_not_equal(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<bool> epsilon_not_equal(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<bool> epsilon_not_equal(const Vector2D<T>& vec1, const Vector2D<T>& vec2);


} // end namespace

#include "VectorRelations.inl"

#endif
