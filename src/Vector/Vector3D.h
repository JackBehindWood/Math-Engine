#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

namespace Math {

template<typename T>
class Vector3D
{
public:
  T x,y,z;

  template<typename Q = T> Vector3D(Q x=static_cast<Q>(0.0f), Q y=static_cast<Q>(0.0f), Q z=static_cast<Q>(0.0f));
  template<typename Q = T> Vector3D(const Vector3D<Q>& vec);
  template<typename Q = T> Vector3D(const Vector2D<Q>& vec);
  template<typename Q = T> Vector3D(const Vector4D<Q>& vec);

  ~Vector3D() = default;

  template<typename Q = T> Vector3D<T>& operator=(const Vector3D<Q>& vec);

  template<typename Q = T> Vector3D<T> operator+(const Vector3D<Q>& vec) const;
  template<typename Q = T> Vector3D<T> operator+(Q X) const;
  template<typename Q = T> Vector3D<T> operator-(const Vector3D<Q>& vec) const;
  template<typename Q = T> Vector3D<T> operator-(Q X) const;
  template<typename Q = T> Vector3D<T> operator*(Q X) const;
  template<typename Q = T> T operator*(Vector3D<Q> vec) const;
  template<typename Q = T> Vector3D<T> operator/(Q X) const;
  template<typename Q = T> Vector3D<T> operator/(Vector3D<Q> vec) const;


  template<typename Q = T> Vector3D<T>& operator+=(const Vector3D<Q>& vec);
  template<typename Q = T> Vector3D<T>& operator+=(Q X);
  template<typename Q = T> Vector3D<T>& operator-=(const Vector3D<Q>& vec);
  template<typename Q = T> Vector3D<T>& operator-=(Q X);
  template<typename Q = T> Vector3D<T>& operator*=(Q X);
  template<typename Q = T> Vector3D<T>& operator/=(Q X);

  // Vector3D<T> operator+(const Vector3D<T>& vec) const;
  // Vector3D<T> operator-(const Vector3D<T>& vec) const;
  // void operator+=(const Vector3D<T>& vec);
  // void operator-=(const Vector3D<T>& vec);

  template<typename Q = T> void set(Q X, Q Y, Q Z);
  float magnitude() const;
  float magnitude();
  void normalize();
  Vector3D<T> normal() const;
  Vector3D<T> normal();

  //static functions

  static Vector3D<T> up() {return Vector3D<T>(static_cast<T>(0.0f), static_cast<T>(1.0f), static_cast<T>(0.0f));};
  static Vector3D<T> down() {return Vector3D<T>(static_cast<T>(0.0f), static_cast<T>(-1.0f), static_cast<T>(0.0f));};
  static Vector3D<T> left() {return Vector3D<T>(static_cast<T>(-1.0f), static_cast<T>(0.0f), static_cast<T>(0.0f));};
  static Vector3D<T> right() {return Vector3D<T>(static_cast<T>(1.0f), static_cast<T>(0.0f), static_cast<T>(0.0f));};
  static Vector3D<T> forward() {return Vector3D<T>(static_cast<T>(0.0f), static_cast<T>(0.0f), static_cast<T>(1.0f));};
  static Vector3D<T> backward() {return Vector3D<T>(static_cast<T>(0.0f), static_cast<T>(0.0f), static_cast<T>(-1.0f));};
  static Vector3D<T> zero() {return Vector3D<T>(static_cast<T>(0.0f), static_cast<T>(0.0f), static_cast<T>(0.0f));};
  static Vector3D<T> one() {return Vector3D<T>(static_cast<T>(1.0f), static_cast<T>(1.0f), static_cast<T>(1.0f));};


};

template<typename T, typename Q = T> Vector3D<T> operator+(Q x, const Vector3D<T>& vec);
template<typename T, typename Q = T> Vector3D<T> operator-(Q x, const Vector3D<T>& vec);
template<typename T, typename Q = T> Vector3D<T> operator*(Q x, const Vector3D<T>& vec);
template<typename T, typename Q = T> Vector3D<T> operator/(Q x, const Vector3D<T>& vec);


template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector3D<T>& vec);

template<typename T>
std::istream& operator>>(std::istream& is, const Vector3D<T>& vec);

#include "Vector3D.inl"

} // end namespace

typedef Math::Vector3D<int> iVec3;
typedef Math::Vector3D<float> Vec3;
typedef Math::Vector3D<double> dVec3;

#endif
