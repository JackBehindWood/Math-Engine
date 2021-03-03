#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include <limits>

namespace Math {

constexpr double pi = 3.14159265358979323846;
constexpr double e = 2.71828182845904523536;
constexpr double epsilon = std::numeric_limits<double>::epsilon();
constexpr double infinity = std::numeric_limits<double>::infinity();

template<typename T> bool epsilon_equal(const T& x, const T& y);
template<typename T> bool epsilon_not_equal(const T& x, const T& y);

} // end namespace

#include "Constants.inl"

#endif
