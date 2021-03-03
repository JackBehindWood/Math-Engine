#ifndef _MATRIXDECOMPOSE_H_
#define _MATRIXDECOMPOSE_H_

#include "Matrix.h"
#include "../Vector/Vector3D.h"

namespace Math {

template<typename T> bool decompose_transform(const Matrix<T>& transform, Vector3D<T>& translation, Vector3D<T>& rotation, Vector3D<T>& scale);

} // end namespace

#include "MatrixDecompose.inl"

#endif
