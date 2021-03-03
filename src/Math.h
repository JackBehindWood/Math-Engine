#ifndef _MATH_H_
#define _MATH_H_

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

namespace Math {

//forward declaring
template<typename T> class Matrix;
template<typename T> class Quaternion;
template<typename T> class Vector4D;
template<typename T> class Vector3D;
template<typename T> class Vector2D;

// math functions
template<typename T> T radians(const T& angle);
template<typename T> T degrees(const T& angle);
template<typename T, typename Q> T pow(const T& x, const Q& p);
template<typename T> T exp(const T& x);
template<typename T> T sqrt(const T& x);
template<typename T> T invsqrt(const T& x);
template<typename T, typename Q = int> T log(const T& x, const Q& b = 10);
template<typename T> T ln(const T& x);
template<typename T> T min(const T& x, const T& y);
template<typename T> T max(const T& x, const T& y);
template<typename T> T abs(const T& x);
template<typename T> T clamp(const T& x, const T& min, const T& max);

template<typename T> T sign(const T& x);
template<typename T> T floor(const T& x);
template<typename T> T trunc(const T& x);
template<typename T> T round(const T& x);
template<typename T> T round_even(const T& x);
template<typename T> T ceil(const T& x);
template<typename T> T fract(const T& x);
template<typename T> T mod(const T& x, const T& b);






} // end namespace

#include "Math.inl"

#endif
