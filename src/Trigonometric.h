#ifndef _TRIGONOMETRIC_H_
#define _TRIGONOMETRIC_H_

namespace Math {

template<typename T> T sin(const T& x);
template<typename T> T cos(const T& x);
template<typename T> T tan(const T& x);
template<typename T> T asin(const T& x);
template<typename T> T acos(const T& x);
template<typename T> T atan(const T& x);
template<typename T, typename Q> T atan(const T& x, const T& y);
template<typename T> T sinh(const T& x);
template<typename T> T cosh(const T& x);
template<typename T> T tanh(const T& x);
template<typename T> T asinh(const T& x);
template<typename T> T acosh(const T& x);
template<typename T> T atanh(const T& x);
template<typename T> Vector4D<T> radians(const Vector4D<T>& vec);
template<typename T> Vector3D<T> radians(const Vector3D<T>& vec);
template<typename T> Vector2D<T> radians(const Vector2D<T>& vec);
template<typename T> Vector4D<T> degrees(const Vector4D<T>& vec);
template<typename T> Vector3D<T> degrees(const Vector3D<T>& vec);
template<typename T> Vector2D<T> degrees(const Vector2D<T>& vec);
template<typename T> Vector4D<T> sin(const Vector4D<T>& vec);
template<typename T> Vector3D<T> sin(const Vector3D<T>& vec);
template<typename T> Vector2D<T> sin(const Vector2D<T>& vec);
template<typename T> Vector4D<T> cos(const Vector4D<T>& vec);
template<typename T> Vector3D<T> cos(const Vector3D<T>& vec);
template<typename T> Vector2D<T> cos(const Vector2D<T>& vec);
template<typename T> Vector4D<T> tan(const Vector4D<T>& vec);
template<typename T> Vector3D<T> tan(const Vector3D<T>& vec);
template<typename T> Vector2D<T> tan(const Vector2D<T>& vec);
template<typename T> Vector4D<T> asin(const Vector4D<T>& vec);
template<typename T> Vector3D<T> asin(const Vector3D<T>& vec);
template<typename T> Vector2D<T> asin(const Vector2D<T>& vec);
template<typename T> Vector4D<T> acos(const Vector4D<T>& vec);
template<typename T> Vector3D<T> acos(const Vector3D<T>& vec);
template<typename T> Vector2D<T> acos(const Vector2D<T>& vec);
template<typename T> Vector4D<T> atan(const Vector4D<T>& vec);
template<typename T> Vector3D<T> atan(const Vector3D<T>& vec);
template<typename T> Vector2D<T> atan(const Vector2D<T>& vec);
template<typename T> Vector4D<T> atan(const Vector4D<T>& vec1, const Vector4D<T>& vec2);
template<typename T> Vector3D<T> atan(const Vector3D<T>& vec1, const Vector3D<T>& vec2);
template<typename T> Vector2D<T> atan(const Vector2D<T>& vec1, const Vector2D<T>& vec2);
template<typename T> Vector4D<T> sinh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> sinh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> sinh(const Vector2D<T>& vec);
template<typename T> Vector4D<T> cosh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> cosh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> cosh(const Vector2D<T>& vec);
template<typename T> Vector4D<T> tanh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> tanh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> tanh(const Vector2D<T>& vec);
template<typename T> Vector4D<T> asinh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> asinh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> asinh(const Vector2D<T>& vec);
template<typename T> Vector4D<T> acosh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> acosh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> acosh(const Vector2D<T>& vec);
template<typename T> Vector4D<T> atanh(const Vector4D<T>& vec);
template<typename T> Vector3D<T> atanh(const Vector3D<T>& vec);
template<typename T> Vector2D<T> atanh(const Vector2D<T>& vec);

} // end namespace

#include "Trigonometric.inl"

#endif
