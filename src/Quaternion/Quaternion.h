#ifndef _QUATERNION_H_
#define _QUATERNION_H_

namespace Math {

template<typename T>
class Quaternion
{
public:
  T w;
  Vector3D<T> vec;

  Quaternion() = default;
  Quaternion(T w, const Vector3D<T>& vec);
  Quaternion(T yaw, T pitch, T roll);
  Quaternion(const Vector3D<T>& vec);
  Quaternion(const Quaternion<T>& quat);
  ~Quaternion() = default;

  Quaternion<T>& operator=(const Quaternion<T>& quat);

  Quaternion<T> operator+(const Quaternion<T>& quat) const;
  Quaternion<T> operator-(const Quaternion<T>& quat) const;
  Quaternion<T> operator*(const Quaternion<T>& quat) const;
  Quaternion<T> operator*(T v) const;
  Quaternion<T> operator/(T v) const;

  void operator+=(const Quaternion<T>& quat);
  void operator-=(const Quaternion<T>& quat);
  void operator*=(const Quaternion<T>& quat);
  void operator*=(T v);

  void set(const Quaternion<T>& quat);
  float norm() const;
  float norm();
  void normalize();
  void normalize() const;
  void to_unit_norm_quat();
  void to_unit_norm_quat() const;
  Quaternion<T> conjugate() const;
  Quaternion<T> conjugate();
  Quaternion<T> inverse() const;
  Quaternion<T> inverse();
  Quaternion<T> multiply(const Quaternion<T>& quat) const;

  static Quaternion<T> identity()
  {
    return Quaternion<T>(static_cast<T>(1), {static_cast<T>(0), static_cast<T>(0), static_cast<T>(0)});
  }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Quaternion<T>& quat);

template<typename T>
std::istream& operator>>(std::istream& is, const Quaternion<T>& quat);

#include "Quaternion.inl"

} // end namespace

typedef Math::Quaternion<int> iQuat;
typedef Math::Quaternion<float> Quat;
typedef Math::Quaternion<double> dQuat;


#endif
