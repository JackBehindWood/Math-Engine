namespace Math {

// extra Quaternion functions
template<typename T>
Quaternion<T> angle_axis(T angle, Vector3D<T>& axis, const Vector3D<T>& v)
{
  Quaternion<T> p((T)0.0f, v);
  axis.normalize();
  Quaternion<T> q(angle, axis);
  q.to_unit_norm_quat();
  Quaternion<T> q_inv = q.inverse();
  Quaternion<T> r = q*p*q_inv;
  return r;
}

template<typename T>
Quaternion<T> angle_axis(T angle, Vector3D<T>& axis)
{
  axis.normalize();
  Quaternion<T> q(angle, axis);
  q.to_unit_norm_quat();
  return q;
}


template<typename T>
Vector3D<T> vector_angle_axis(T angle, Vector3D<T>& axis, const Vector3D<T>& v)
{
  Quaternion<T> p((T)0.0f, v);
  axis.normalize();
  Quaternion<T> q(angle, axis);
  q.to_unit_norm_quat();
  Quaternion<T> q_inv = q.inverse();
  Quaternion<T> r = q*p*q_inv;
  return r.vec;
}

template<typename T>
Quaternion<T> lerp(const Quaternion<T>& quat1, const Quaternion<T>& quat2, const T& t)
{
  Quaternion<T> q = quat1 + (quat2 - quat1) * t;
  q.normalize();
  return q;
}

template<typename T>
Quaternion<T> slerp(const Quaternion<T>& quat1, const Quaternion<T>& quat2, const T& t)
{
  Quaternion<T> q(quat1);
  q.to_unit_norm_quat();
  //return (quat1 * pow(q * quat2, t));
  q *= quat2;
  q = quat1 * pow(q, t);
  q.normalize();
  return q;
}

template<typename T>
Quaternion<T> exp(Quaternion<T>& quat)
{
  quat.normalize();
  float mag = quat.vec.magnitude();
  assert("Cannot take e ^ Quaternion" && mag != 0.0f);
  Quaternion<T> q;
  q.w = exp(quat.w) * cos(mag);
  q.vec = exp(quat.w) * (quat.vec/mag) * sin(mag);
  return q;
}

template<typename T>
Quaternion<T> pow(Quaternion<T>& quat, const T& x)
{
  float norm = quat.norm();
  assert("Cannot calculate angle" && (norm != 0.0f));
  float angle = static_cast<float>(acos(quat.w/norm));
  Quaternion<T> q;
  q.w = pow(norm, x) * cos(x*angle);
  q.vec = pow(norm, x) * quat.vec.normal() * sin(x*angle);
  return q;
}

template<typename T>
Quaternion<T> ln(Quaternion<T>& quat)
{
  quat.normalize();
  float mag = quat.vec.magnitude();
  float norm = quat.norm();
  assert("Cannot take e ^ Quaternion" && (mag != 0.0f || norm != 0.0f));
  Quaternion<T> q;
  q.w = std::log(norm); // log with base e
  q.vec = (quat.vec/mag)*acos(quat.w/norm);
  return q;
}

template<typename T, typename Q>
Quaternion<T> log(Quaternion<T>& quat, const Q& x)
{
  T base = static_cast<T>(ln(x));
  assert("Cannot take log of Quaternion" && (base != 0.0f));
  return ln(quat)/base;
}

template<typename T>
Quaternion<T> operator*(T v, const Quaternion<T>& quat)
{
  return quat * v;
}

template<typename T>
Quaternion<T> sign(const Quaternion<T>& quat)
{
  return Quaternion<T>(sign(quat.w), sign(quat.vec));
}

template<typename T>
Quaternion<T> floor(const Quaternion<T>& quat)
{
  return Quaternion<T>(floor(quat.w), floor(quat.vec));
}

template<typename T>
Quaternion<T> trunc(const Quaternion<T>& quat)
{
  return Quaternion<T>(trunc(quat.w), trunc(quat.vec));

}

template<typename T>
Quaternion<T> round(const Quaternion<T>& quat)
{
  return Quaternion<T>(round(quat.w), round(quat.vec));

}

template<typename T>
Quaternion<T> round_even(const Quaternion<T>& quat)
{
  return Quaternion<T>(round_even(quat.w), round_even(quat.vec));

}

template<typename T>
Quaternion<T> ceil(const Quaternion<T>& quat)
{
  return Quaternion<T>(ceil(quat.w), ceil(quat.vec));

}

template<typename T>
Quaternion<T> fract(const T& quat)
{
  return Quaternion<T>(fract(quat.w), fract(quat.vec));

}

template<typename T>
Quaternion<T> mod(const Quaternion<T>& quat1, const Quaternion<T>& quat2)
{
  return Quaternion<T>(mod(quat1.w, quat2.w), mod(quat1.vec, quat2.vec));

}

template<typename T>
Quaternion<T> mod(const Quaternion<T>& quat, const T& x)
{
  return Quaternion<T>(sign(quat.w, x), sign(quat.vec, x));

}


} //end namespace
