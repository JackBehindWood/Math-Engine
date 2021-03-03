#ifndef _VECTOR4D_H_
#define _VECTOR4D_H_

namespace Math {

template<typename T>
class Vector4D
{
public:
  T x,y,z,w;

  template<typename Q = T> Vector4D(Q x=static_cast<Q>(0.0f), Q y=static_cast<Q>(0.0f),Q z=static_cast<Q>(0.0f),Q w=static_cast<Q>(0.0f));
  template<typename Q = T> Vector4D(const Vector4D<Q>& vec);
  template<typename Q = T> Vector4D(const Vector2D<Q>& vec);
  template<typename Q = T> Vector4D(const Vector3D<Q>& vec);
  ~Vector4D() = default;

  template<typename Q = T>Vector4D<T>& operator=(const Vector4D<Q>& vec);

  template<typename Q = T> Vector4D<T> operator+(const Vector4D<Q>& vec) const;
  template<typename Q = T> Vector4D<T> operator+(Q X) const;
  template<typename Q = T> Vector4D<T> operator-(const Vector4D<Q>& vec) const;
  template<typename Q = T> Vector4D<T> operator-(Q X) const;
  template<typename Q = T> Vector4D<T> operator*(Q X) const;
  template<typename Q = T> Vector4D<T> operator/(Q X) const;

  template<typename Q = T> Vector4D<T>& operator+=(const Vector4D<Q>& vec);
  template<typename Q = T> Vector4D<T>& operator+=(Q X);
  template<typename Q = T> Vector4D<T>& operator-=(const Vector4D<Q>& vec);
  template<typename Q = T> Vector4D<T>& operator-=(Q X);
  template<typename Q = T> Vector4D<T>& operator*=(Q X);
  template<typename Q = T> Vector4D<T>& operator/=(Q X);

  template<typename Q = T> Vector4D<T>& set(Q X, Q Y, Q Z, Q W);

  static Vector4D<T> zero() {return Vector4D<T>(static_cast<T>(0.0f), static_cast<T>(0.0f), static_cast<T>(0.0f), static_cast<T>(0.0f));};
  static Vector4D<T> one() {return Vector4D<T>(static_cast<T>(1.0f), static_cast<T>(1.0f), static_cast<T>(1.0f), static_cast<T>(1.0f));};
};

// extra functions
template<typename T, typename Q = T> Vector4D<T> operator+(Q x, const Vector4D<T>& vec);
template<typename T, typename Q = T> Vector4D<T> operator-(Q x, const Vector4D<T>& vec);
template<typename T, typename Q = T> Vector4D<T> operator*(Q x, const Vector4D<T>& vec);
template<typename T, typename Q = T> Vector4D<T> operator/(Q x, const Vector4D<T>& vec);

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector4D<T>& vec);

template<typename T>
std::istream& operator>>(std::istream& is, const Vector4D<T>& vec);

#include "Vector4D.inl"

} // end namespace

typedef Math::Vector4D<int> iVec4;
typedef Math::Vector4D<float> Vec4;
typedef Math::Vector4D<double> dVec4;

#endif
