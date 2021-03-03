#ifndef _TYPEPTR_H_
#define _TYPEPTR_H_

#include "Vector/Vector4D.h"
#include "Vector/Vector3D.h"
#include "Vector/Vector2D.h"
#include "Matrix/Matrix.h"
#include "Quaternion/Quaternion.h"

namespace Math {

template<typename T> const T* value_ptr(const Vector4D<T>& vec);
template<typename T> T* value_ptr(Vector4D<T>& vec);
template<typename T> const T* value_ptr(const Vector3D<T>& vec);
template<typename T> T* value_ptr(Vector3D<T>& vec);
template<typename T> const T* value_ptr(const Vector2D<T>& vec);
template<typename T> T* value_ptr(Vector2D<T>& vec);
template<typename T> const T* value_ptr(const Matrix<T>& mat);
template<typename T> T* value_ptr(Matrix<T>& mat);
template<typename T> const T* value_ptr(const Quaternion<T>& quat);
template<typename T> T* value_ptr(Quaternion<T>& quat);

} // end namespace

#include "Typeptr.inl"

#endif
