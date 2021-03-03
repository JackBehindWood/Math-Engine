#ifndef _MATRIXRELATION_H_
#define _MATRIXRELATION_H_

namespace Math {

template<typename T> Matrix<bool> operator==(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> operator!=(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> operator>(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> operator<(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> operator>=(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> operator<=(const Matrix<T>& mat1, const Matrix<T>& mat2);

template<typename T> Matrix<bool> equal(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> not_equal(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> less_than(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> less_than_equal(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> greater_than(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> greater_than_equal(const Matrix<T>& mat1, const Matrix<T>& mat2);

bool all(const Matrix<bool>& mat);
bool any(const Matrix<bool>& mat);

template<typename T> Matrix<bool> epsilon_equal(const Matrix<T>& mat1, const Matrix<T>& mat2);
template<typename T> Matrix<bool> epsilon_not_equal(const Matrix<T>& mat1, const Matrix<T>& mat2);

} // end namespace

#include "MatrixRelations.inl"


#endif
