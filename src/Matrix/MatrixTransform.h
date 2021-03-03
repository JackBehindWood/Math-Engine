#ifndef _MATRIXTRANSFORM_H_
#define _MATRIXTRANSFORM_H_

#include "Matrix.h"
#include "../Vector/Vector3D.h"

namespace Math {

template<typename T> Matrix<T> translate(const Matrix<T>& mat, const Vector3D<T>& vec);
template<typename T> Matrix<T> rotate(const Matrix<T>& mat, T angle, const Vector3D<T>& vec);
template<typename T> Matrix<T> rotate(const Matrix<T>& mat, const Vector3D<T>& vec);
template<typename T> Matrix<T> scale(const Matrix<T>& mat, const Vector3D<T>& vec);

#include "MatrixTransform.inl"

}// end namespace

#endif
