#ifndef _PROJECTION_H_
#define _PROJECTION_H_

#include "Vector/Vector3D.h"
#include "Matrix/Matrix.h"
#include "Quaternion/Quaternion.h"

namespace Math{

template<typename T> Matrix<T> orthographic(T left, T right, T bottom, T top, T near, T far);
template<typename T> Matrix<T> frustum(T left, T right, T bottom, T top, T near, T far);
template<typename T> Matrix<T> perspective(T fov, T aspect, T near, T far);
template<typename T> Matrix<T> lookat(const Vector3D<T>& pos, const Vector3D<T>& target, const Vector3D<T>& up = Vector3D<T>::up());
//template<typename T> Quaternion<T> lookat(const Vector3D<T>& dir, const Vector3D<T>& up = Vector3D<T>::up());

} // end namespace

#include "Projection.inl"


#endif
