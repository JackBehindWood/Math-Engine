template<typename T>
Quaternion<T>::Quaternion(T w, const Vector3D<T>& vec) : w(w), vec(vec)
{

}

template<typename T>
Quaternion<T>::Quaternion(T yaw, T pitch, T roll)
{
  T cy = cos(yaw * static_cast<T>(0.5));
  T sy = sin(yaw * static_cast<T>(0.5));
  T cp = cos(pitch * static_cast<T>(0.5));
  T sp = sin(pitch * static_cast<T>(0.5));
  T cr = cos(roll * static_cast<T>(0.5));
  T sr = sin(roll * static_cast<T>(0.5));

  w = cr * cp * cy + sr * sp * sy;
  vec.x = sr * cp * cy - cr * sp * sy;
  vec.y = cr * sp * cy + sr * cp * sy;
  vec.z = cr * cp * sy - sr * sp * cy;
}

template<typename T>
Quaternion<T>::Quaternion(const Vector3D<T>& vec)
{
  Vector3D<T> c = cos(vec * T(0.5));
	Vector3D<T> s = sin(vec * T(0.5));

	w = c.x * c.y * c.z + s.x * s.y * s.z;
	this->vec.x = s.x * c.y * c.z - c.x * s.y * s.z;
	this->vec.y = c.x * s.y * c.z + s.x * c.y * s.z;
	this->vec.z = c.x * c.y * s.z - s.x * s.y * c.z;
}

template<typename T>
Quaternion<T>::Quaternion(const Quaternion<T>& quat)
{
  w = quat.w;
  vec = quat.vec;
}

//operators

template<typename T>
Quaternion<T>& Quaternion<T>::operator=(const Quaternion<T>& quat)
{
  w = quat.w;
  vec = quat.vec;
  return *this;
}

template<typename T>
Quaternion<T> Quaternion<T>::operator+(const Quaternion<T>& quat) const
{
  return Quaternion<T>(w + quat.w, vec + quat.vec);
}

template<typename T>
Quaternion<T> Quaternion<T>::operator-(const Quaternion<T>& quat) const
{
  return Quaternion<T>(w - quat.w, vec - quat.vec);
}

template<typename T>
Quaternion<T> Quaternion<T>::operator*(const Quaternion<T>& quat) const
{
  T v = w*quat.w - (vec.x*quat.vec.x+vec.y*quat.vec.y+vec.z*quat.vec.z);
  Vector3D<T> i = quat.vec * w + vec*quat.w + Math::cross(vec, quat.vec);
  return Quaternion<T>(v, i);
}

template<typename T>
Quaternion<T> Quaternion<T>::operator*(T v) const
{

  return Quaternion<T>(w*v, vec*v);
}

template<typename T>
Quaternion<T> Quaternion<T>::operator/(T v) const
{
  return (*this) * (1/v);
}


template<typename T>
void Quaternion<T>::operator+=(const Quaternion<T>& quat)
{
  w += quat.w;
  vec += quat.vec;
}

template<typename T>
void Quaternion<T>::operator-=(const Quaternion<T>& quat)
{
  w -= quat.w;
  vec -= quat.vec;
}

template<typename T>
void Quaternion<T>::operator*=(const Quaternion<T>& quat)
{
  (*this) = multiply(quat);
}

template<typename T>
void Quaternion<T>::operator*=(T v)
{
  w *= v;
  vec *= v;
}

//

template<typename T>
void Quaternion<T>::set(const Quaternion<T>& quat)
{
  w = quat.w;
  vec = quat.vec;
}

template<typename T>
float Quaternion<T>::norm() const
{
  float v = static_cast<float>(w*w);
  float i = static_cast<float>(vec.x*vec.x+vec.y*vec.y+vec.z*vec.z);
  return std::sqrt(v+i);
}

template<typename T>
float Quaternion<T>::norm()
{
  float v = static_cast<T>(w*w);
  float i = static_cast<T>(vec.x*vec.x+vec.y*vec.y+vec.z*vec.z);
  return std::sqrt(v+i);
}

template<typename T>
void Quaternion<T>::normalize()
{
  float n = norm();
  float v = 1/n;
  w *= static_cast<T>(v);
  vec *= static_cast<T>(v);
}

template<typename T>
void Quaternion<T>::to_unit_norm_quat()
{
  float angle = static_cast<float>(w  * 0.5f);
  vec.normalize();
  w = static_cast<T>(cosf(angle));
  vec = vec * static_cast<T>(sinf(angle));
}

template<typename T>
Quaternion<T> Quaternion<T>::conjugate() const
{
 return Quaternion<T>(w, vec*static_cast<T>(-1.0));
}

template<typename T>
Quaternion<T> Quaternion<T>::conjugate()
{
  return Quaternion<T>(w, vec*static_cast<T>(-1.0));
}

template<typename T>
Quaternion<T> Quaternion<T>::inverse() const
{
  float n = norm();
  T v = 1/static_cast<T>(n*n);
  Quaternion<T> con = conjugate();
  return Quaternion<T>(con.w*v, con.vec*v);
}

template<typename T>
Quaternion<T> Quaternion<T>::inverse()
{
  float n = norm();
  T v = 1/static_cast<T>(n*n);
  Quaternion<T> con = conjugate();
  return Quaternion<T>(con.w*v, con.vec*v);
}

template<typename T>
Quaternion<T> Quaternion<T>::multiply(const Quaternion<T>& quat) const
{
  T s = w*quat.w - (vec.x*quat.vec.x+vec.y*quat.vec.y+vec.z*quat.vec.z);
  Vector3D<T> i = quat.vec * w + vec*quat.w + Math::cross(vec, quat.vec);
  return Quaternion<T>(s, i);
}

//extra functions

template<typename T>
std::ostream& operator<<(std::ostream& os, const Quaternion<T>& quat)
{
  os << quat.w << " + " << quat.vec.x << "i + ";
  os << quat.vec.y << "j + " << quat.vec.z << "k" << std::endl;
  return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, const Quaternion<T>& quat)
{
  is >> quat.w;
  is >> quat.vec.x;
  is >> quat.vec.y;
  is >> quat.vec.y;
  return is;
}
