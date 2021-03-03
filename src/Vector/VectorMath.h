#ifndef _VECTORMATH_H_
#define _VECTORMATH_H_

namespace Math {

// vector dot product
template<typename T, typename Q> float dot(const Vector4D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector3D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector2D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector4D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector4D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector3D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector3D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector2D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> float dot(const Vector2D<T>& vec1, const Vector3D<Q>& vec2);

// vector return cross product
template<typename T, typename Q> Vector4D<T> cross(const Vector4D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> cross(const Vector3D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> Vector2D<T> cross(const Vector2D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> cross(const Vector4D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> cross(const Vector4D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> cross(const Vector3D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> cross(const Vector3D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> cross(const Vector2D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> cross(const Vector2D<T>& vec1, const Vector3D<Q>& vec2);

// vector return multiply
template<typename T, typename Q> Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> multiply(const Vector3D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> Vector2D<T> multiply(const Vector2D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> multiply(const Vector3D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> multiply(const Vector3D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> Vector4D<T> multiply(const Vector2D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> Vector3D<T> multiply(const Vector2D<T>& vec1, const Vector3D<Q>& vec2);

// vector lerp/slerp function
template<typename T, typename Q> Vector4D<T> lerp(const Vector4D<T>& vec1, const Vector4D<T>& vec2, const Q& t);
template<typename T, typename Q> Vector3D<T> lerp(const Vector3D<T>& vec1, const Vector3D<T>& vec2, const Q& t);
template<typename T, typename Q> Vector2D<T> lerp(const Vector2D<T>& vec1, const Vector2D<T>& vec2, const Q& t);
template<typename T, typename Q> Vector4D<T> slerp(const Vector4D<T>& vec1, const Vector4D<T>& vec2, const Q& t);
template<typename T, typename Q> Vector3D<T> slerp(const Vector3D<T>& vec1, const Vector3D<T>& vec2, const Q& t);
template<typename T, typename Q> Vector2D<T> slerp(const Vector2D<T>& vec1, const Vector2D<T>& vec2, const Q& t);

// extra vector functions
template<typename T, typename Q> Vector4D<T> pow(const Vector4D<T>& vec, const Q& x);
template<typename T, typename Q> Vector3D<T> pow(const Vector3D<T>& vec, const Q& x);
template<typename T, typename Q> Vector2D<T> pow(const Vector2D<T>& vec, const Q& x);
template<typename T> Vector4D<T> exp(const Vector4D<T>& vec);
template<typename T> Vector3D<T> exp(const Vector3D<T>& vec);
template<typename T> Vector2D<T> exp(const Vector2D<T>& vec);
template<typename T, typename Q = int> Vector4D<T> log(const Vector4D<T>& vec, const Q& b = 10);
template<typename T, typename Q = int> Vector3D<T> log(const Vector3D<T>& vec, const Q& b = 10);
template<typename T, typename Q = int> Vector2D<T> log(const Vector2D<T>& vec, const Q& b = 10);
template<typename T> Vector4D<T> ln(const Vector4D<T>& vec);
template<typename T> Vector3D<T> ln(const Vector3D<T>& vec);
template<typename T> Vector2D<T> ln(const Vector2D<T>& vec);
template<typename T> T sum(const Vector4D<T>& vec);
template<typename T> T sum(const Vector3D<T>& vec);
template<typename T> T sum(const Vector2D<T>& vec);

template<typename T> Vector4D<T> normalize(const Vector4D<T>& vec);
template<typename T> Vector3D<T> normalize(const Vector3D<T>& vec);
template<typename T> Vector2D<T> normalize(const Vector2D<T>& vec);
template<typename T, typename Q> float angle(const Vector4D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> float angle(const Vector3D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> float angle(const Vector2D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> float distance(const Vector4D<T>& vec1, const Vector4D<Q>& vec2);
template<typename T, typename Q> float distance(const Vector3D<T>& vec1, const Vector3D<Q>& vec2);
template<typename T, typename Q> float distance(const Vector2D<T>& vec1, const Vector2D<Q>& vec2);
template<typename T, typename Q> T length(const Vector4D<T>& vec);
template<typename T, typename Q> T length(const Vector3D<T>& vec);
template<typename T, typename Q> T length(const Vector2D<T>& vec);
template<typename T> Vector4D<T> min(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<T> min(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<T> min(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector4D<T> max(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<T> max(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<T> max(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector4D<T> abs(const Vector4D<T>& vec);
template<typename T> Vector3D<T> abs(const Vector3D<T>& vec);
template<typename T> Vector2D<T> abs(const Vector2D<T>& vec);

template<typename T> Vector4D<T> sign(const Vector4D<T>& vec);
template<typename T> Vector3D<T> sign(const Vector3D<T>& vec);
template<typename T> Vector2D<T> sign(const Vector2D<T>& vec);
template<typename T> Vector4D<T> floor(const Vector4D<T>& vec);
template<typename T> Vector3D<T> floor(const Vector3D<T>& vec);
template<typename T> Vector2D<T> floor(const Vector2D<T>& vec);
template<typename T> Vector4D<T> trunc(const Vector4D<T>& vec);
template<typename T> Vector3D<T> trunc(const Vector3D<T>& vec);
template<typename T> Vector2D<T> trunc(const Vector2D<T>& vec);
template<typename T> Vector4D<T> round(const Vector4D<T>& vec);
template<typename T> Vector3D<T> round(const Vector3D<T>& vec);
template<typename T> Vector2D<T> round(const Vector2D<T>& vec);
template<typename T> Vector4D<T> round_even(const Vector4D<T>& vec);
template<typename T> Vector3D<T> round_even(const Vector3D<T>& vec);
template<typename T> Vector2D<T> round_even(const Vector2D<T>& vec);
template<typename T> Vector4D<T> ceil(const Vector4D<T>& vec);
template<typename T> Vector3D<T> ceil(const Vector3D<T>& vec);
template<typename T> Vector2D<T> ceil(const Vector2D<T>& vec);
template<typename T> Vector4D<T> fract(const Vector4D<T>& vec);
template<typename T> Vector3D<T> fract(const Vector3D<T>& vec);
template<typename T> Vector2D<T> fract(const Vector2D<T>& vec);
template<typename T> Vector4D<T> mod(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<T> mod(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<T> mod(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector4D<T> mod(const Vector4D<T>& vec, const T& x);
template<typename T> Vector3D<T> mod(const Vector3D<T>& vec, const T& x);
template<typename T> Vector2D<T> mod(const Vector2D<T>& vec, const T& x);


} // end namespace

#include "VectorMath.inl"

#endif
