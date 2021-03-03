#include "Constants.h"

#include "Vector/Vector4D.h"
#include "Vector/Vector3D.h"
#include "Vector/Vector2D.h"
#include "Vector/VectorMath.h"
#include "Quaternion/Quaternion.h"
#include "Quaternion/QuaternionMath.h"
#include "Matrix/Matrix.h"
#include "Matrix/MatrixMath.h"
#include "Trigonometric.h"

namespace Math {

template<typename T>
T radians(const T& angle)
{
  return angle*static_cast<T>(pi/180.0f);
}

template<typename T>
T degrees(const T& angle)
{
  return angle*static_cast<T>(180.0f/pi);
}

template<typename T, typename Q>
T pow(const T& x, const Q& p)
{
  return std::pow(x, p);
}

template<typename T>
T exp(const T& x)
{
  return std::exp(x);
}

template<typename T>
T sqrt(const T& x)
{
  return std::sqrt(x);
}

template<typename T>
T invsqrt(const T& x)
{
  assert("Cannot take inverse square" && x != static_cast<T>(0.0f));
  return static_cast<T>(1/std::sqrt(x));
}

template<typename T, typename Q>
T log(const T& x, const Q& b)
{
  return std::log(x)/std::log(b);
}

template<typename T>
T ln(const T& x)
{
  return std::log(x);
}

template<typename T>
T min(const T& x, const T& y)
{
  return (y < x) ? y : x;
}

template<typename T>
T max(const T& x, const T& y)
{
  return (x < y) ? y : x;
}

template<typename T>
T abs(const T& x)
{
  return std::abs(x);
}

template<typename T>
T clamp(const T& x, const T& min, const T& max)
{
  if (x < min)
  {
    return min;
  } else if (x > max)
  {
    return max;
  }
  return x;
}

template<typename T>
T sign(const T& x)
{
  return (static_cast<T>(0) < x) - (x < static_cast<T>(0));
}

template<typename T>
T floor(const T& x)
{
  return std::floor(x);
}

template<typename T>
T trunc(const T& x)
{
  return static_cast<float>(x) < static_cast<T>(0) ? -std::floor(static_cast<T>(-x)) : std::floor(static_cast<T>(x));
}

template<typename T>
T round(const T& x)
{
  return static_cast<float>(x) < static_cast<T>(0) ? static_cast<T>(int(static_cast<float>(x) - static_cast<T>(0.5))) : static_cast<T>(int(static_cast<float>(x) + static_cast<T>(0.5)));
}

template<typename T>
T round_even(const T& x)
{
  int i = static_cast<int>(x);
  T i_part = static_cast<T>(i);
  T frac_part = fract(x);
  if(frac_part > static_cast<T>(0.5) || frac_part < static_cast<T>(0.5))
	{
		return round(x);
	}
	else if((i % 2) == 0)
	{
		return i_part;
	}
	else if(x <= static_cast<T>(0))
	{
		return i_part - static_cast<T>(1);
	}
	else
	{
		return i_part + static_cast<T>(1);
	}
}

template<typename T>
T ceil(const T& x)
{
  return std::ceil(x);
}

template<typename T>
T fract(const T& x)
{
  return x - std::floor(x);
}

template<typename T>
T mod(const T& x, const T& b)
{
  return x - b * floor(x/b);
}


} // end namespace
