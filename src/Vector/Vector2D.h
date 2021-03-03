#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

namespace Math {

template<typename T>
class Vector2D
{
public:
  T x,y;

  template<typename Q = T> Vector2D(Q x = static_cast<Q>(0.0f), Q y = static_cast<Q>(0.0f));
  template<typename Q = T> Vector2D(const Vector2D<Q>& vec);
  template<typename Q = T> Vector2D(const Vector3D<Q>& vec);
  template<typename Q = T> Vector2D(const Vector4D<Q>& vec);
  ~Vector2D() = default;

  template<typename Q = T> Vector2D<T>& operator=(const Vector2D<Q>& vec);

  template<typename Q = T> Vector2D<T> operator+(const Vector2D<Q>& vec) const;
  template<typename Q = T> Vector2D<T> operator+(Q X) const;
  template<typename Q = T> Vector2D<T> operator-(const Vector2D<Q>& vec) const;
  template<typename Q = T> Vector2D<T> operator-(Q X) const;
  template<typename Q = T> T operator*(Vector2D<Q> vec) const;
  template<typename Q = T> Vector2D<T> operator*(Q X) const;
  template<typename Q = T> Vector2D<T> operator/(Vector2D<Q> vec) const;
  template<typename Q = T> Vector2D<T> operator/(Q X) const;

  template<typename Q = T> Vector2D<T>& operator+=(const Vector2D<Q>& vec);
  template<typename Q = T> Vector2D<T>& operator+=(Q X);
  template<typename Q = T> Vector2D<T>& operator-=(const Vector2D<Q>& vec);
  template<typename Q = T> Vector2D<T>& operator-=(Q X);
  template<typename Q = T> Vector2D<T>& operator*=(Q X);
  template<typename Q = T> Vector2D<T>& operator/=(Q X);

  // Vector2D<T> operator+(const Vector2D<T>& vec) const;
  // Vector2D<T> operator-(const Vector2D<T>& vec) const;
  // void operator+=(const Vector2D<T>& vec);
  // void operator-=(const Vector2D<T>& vec);

  template<typename Q> void set(Q X, Q Y);
  float magnitude() const;
  float magnitude();
  void normalize();
  Vector2D<T> normal() const;
  Vector2D<T> normal();

  //static functions

  static Vector2D<T> up() {return Vector2D<T>(static_cast<T>(0.0f), static_cast<T>(1.0f));};
  static Vector2D<T> down() {return Vector2D<T>(static_cast<T>(0.0f), static_cast<T>(-1.0f));};
  static Vector2D<T> left() {return Vector2D<T>(static_cast<T>(-1.0f), static_cast<T>(0.0f));};
  static Vector2D<T> right() {return Vector2D<T>(static_cast<T>(1.0f), static_cast<T>(0.0f));};
  static Vector2D<T> zero() {return Vector2D<T>(static_cast<T>(0.0f), static_cast<T>(0.0f));};
  static Vector2D<T> one() {return Vector2D<T>(static_cast<T>(1.0f), static_cast<T>(1.0f));};

};

template<typename T, typename Q = T> Vector2D<T> operator+(Q x, const Vector2D<T>& vec);
template<typename T, typename Q = T> Vector2D<T> operator-(Q x, const Vector2D<T>& vec);
template<typename T, typename Q = T> Vector2D<T> operator*(Q x, const Vector2D<T>& vec);
template<typename T, typename Q = T> Vector2D<T> operator/(Q x, const Vector2D<T>& vec);

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector2D<T>& vec);

template<typename T>
std::istream& operator>>(std::istream& is, const Vector2D<T>& vec);

#include "Vector2D.inl"

} // end namespace

typedef Math::Vector2D<int> iVec2;
typedef Math::Vector2D<float> Vec2;
typedef Math::Vector2D<double> dVec2;


#endif
