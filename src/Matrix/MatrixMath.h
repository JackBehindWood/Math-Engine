#ifndef _MATRIXMATH_H_
#define _MATRIXMATH_H_

namespace Math {

template<typename T, typename Q> Matrix<T> operator*(const Matrix<T>& mat, const Vector4D<Q>& vec);
template<typename T, typename Q> Matrix<T> operator*(const Vector4D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> operator*(const Matrix<T>& mat, const Vector3D<Q>& vec);
template<typename T, typename Q> Matrix<T> operator*(const Vector3D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> operator*(const Matrix<T>& mat, const Vector2D<Q>& vec);
template<typename T, typename Q> Matrix<T> operator*(const Vector2D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> operator*(const Matrix<T>& mat, const Quaternion<Q>& quat);
template<typename T, typename Q> Matrix<T> operator*(const Quaternion<T>& quat, const Matrix<Q>& mat);

template<typename T, typename Q> Matrix<T> operator+(T value, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> operator-(T value, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> operator*(T value, const Matrix<Q>& mat);

// extra matrix functions
template<typename T> inline Matrix<T> quat_to_matrix(unsigned int m, const Quaternion<T>& quat);
template<typename T> inline Matrix<T> quat_to_mat4(const Quaternion<T>& quat);
template<typename T, typename Q> Matrix<T> dot(const Matrix<T>& mat1, const Matrix<Q>& mat2);
template<typename T, typename Q> Matrix<T> dot(const Matrix<T>& mat, const Vector4D<Q>& vec);
template<typename T, typename Q> Matrix<T> dot(const Vector4D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> dot(const Matrix<T>& mat, const Vector3D<Q>& vec);
template<typename T, typename Q> Matrix<T> dot(const Vector3D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> dot(const Matrix<T>& mat, const Vector2D<Q>& vec);
template<typename T, typename Q> Matrix<T> dot(const Vector2D<T>& vec, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> dot(const Matrix<T>& mat, const Quaternion<Q>& quat);
template<typename T, typename Q> Matrix<T> dot(const Quaternion<T>& quat, const Matrix<Q>& mat);
template<typename T, typename Q> Matrix<T> multiply(const Matrix<T>& mat1, const Matrix<Q>& mat2);

template<typename T> Matrix<T> pow(const Matrix<T>& mat, const int& x);
template<typename T, typename Q> Matrix<T> pow(const Q& x, const Matrix<T>& mat);
template<typename T> Matrix<T> exp(const Matrix<T>& mat);
template<typename T, typename Q> Matrix<T> log(const Matrix<T>& mat, const Q& b);
template<typename T> Matrix<T> ln(const Matrix<T>& mat);
template<typename T> T sum(const Matrix<T>& mat);
template<typename T> Matrix<T> abs(const Matrix<T>& mat);

template<typename T> Matrix<T> inverse(const Matrix<T>& mat);
template<typename T> Matrix<T> inverse2x2(const Matrix<T>& mat);
template<typename T> Matrix<T> inverse3x3(const Matrix<T>& mat);
template<typename T> Matrix<T> inverse4x4(const Matrix<T>& mat);

template<typename T> Matrix<T> sign(const Matrix<T>& mat);
template<typename T> Matrix<T> floor(const Matrix<T>& mat);
template<typename T> Matrix<T> trunc(const Matrix<T>& mat);
template<typename T> Matrix<T> round(const Matrix<T>& mat);
template<typename T> Matrix<T> round_even(const Matrix<T>& mat);
template<typename T> Matrix<T> ceil(const Matrix<T>& mat);
template<typename T> Matrix<T> fract(const Matrix<T>& mat);
template<typename T, typename Q> Matrix<T> mod(const Matrix<T>& mat1, const Matrix<Q>& mat2);
template<typename T, typename Q> Matrix<T> mod(const Matrix<T>& mat, const Q& x);

} // end namespace

#include "MatrixMath.inl"


#endif
