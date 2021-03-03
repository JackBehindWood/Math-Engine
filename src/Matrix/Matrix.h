#ifndef _MATRIX_H_
#define _MATRIX_H_

namespace Math {

template<typename T>
class Matrix
{

private:
  unsigned int m_rows, m_columns;
  T **m_data;
  void alloc_matrix();

public:
  Matrix(unsigned int m = 0, unsigned int n = 0);
  template<typename Q = T> Matrix(const std::vector<std::vector<Q>>& data);
  template<typename Q = T> Matrix(const Matrix<Q>& mat);
  ~Matrix();

  inline unsigned int rows() const {return m_rows;};
  inline unsigned int columns() const {return m_columns;};
  void swap_rows(int r1, int r2);
  void swap_columns(int c1, int c2);

  template<typename Q = T> Matrix<T>& operator=(const Matrix<Q>& mat);
  template<typename Q = T> Matrix<T>& operator=(const std::vector<std::vector<Q>>& data);
  T operator()(int i, int j) const;
  T operator()(int i, int j);
  T* operator[](int i) const;
  T* operator[](int i);

  template<typename Q = T> Matrix<T> operator+(const Matrix<Q>& mat) const;
  template<typename Q = T> Matrix<T> operator+(Q value) const;
  template<typename Q = T> Matrix<T> operator-(const Matrix<Q>& mat) const;
  template<typename Q = T> Matrix<T> operator-(Q value) const;
  template<typename Q = T> Matrix<T> operator*(const Matrix<Q>& mat) const;
  template<typename Q = T> Matrix<T> operator*(Q value) const;
  template<typename Q = T> Matrix<T> operator/(const Matrix<Q>& mat) const;
  template<typename Q = T> Matrix<T> operator/(Q value) const;


  template<typename Q = T> Matrix<T>& operator+=(const Matrix<Q>& mat);
  template<typename Q = T> Matrix<T>& operator+=(Q value);
  template<typename Q = T> Matrix<T>& operator-=(const Matrix<Q>& mat);
  template<typename Q = T> Matrix<T>& operator-=(Q value);
  template<typename Q = T> Matrix<T>& operator*=(Q value);
  template<typename Q = T> Matrix<T>& operator/=(Q value);

  template<typename Q = T> void set(const std::vector<std::vector<Q>>& data);

  Matrix<T> transpose() const;
  template<typename Q = T> Matrix<T>& fill_matrix(Q value);

  template<typename Q> Matrix<T> augment(const Matrix<Q>& mat) const;
  Matrix<T> guassian_eliminate() const;
  Matrix<T> row_reduce_from_guassion() const;
  Matrix<T> inverse() const;

  static Matrix<T> zeros(unsigned int m, unsigned int n)
  {
    Matrix<T> mat(m, n);
    mat.fill_matrix(static_cast<T>(0.0f));
    return mat;
  }

  static Matrix<T> ones(unsigned int m, unsigned int n)
  {
    Matrix<T> mat(m, n);
    mat.fill_matrix(static_cast<T>(1.0f));
    return mat;
  }

  static Matrix<T> identity(unsigned int m)
  {
    Matrix<T> mat = Matrix<T>::zeros(m, m);
    for (int i = 0 ; i < m; i++)
    {
      mat.m_data[i][i] = static_cast<T>(1.0f);
    }
    return mat;
  }
};

//extra functions

template<typename T, typename Q = T> Matrix<T> operator+(Q value, const Matrix<T>& mat);
template<typename T, typename Q = T> Matrix<T> operator-(Q value, const Matrix<T>& mat);
template<typename T, typename Q = T> Matrix<T> operator*(Q value, const Matrix<T>& mat);
template<typename T, typename Q = T> Matrix<T> operator/(Q value, const Matrix<T>& mat);


template<typename T>
std::ostream& operator<<(std::ostream& os, const Matrix<T>& mat);

template<typename T>
std::istream& operator>>(std::istream& is, const Matrix<T>& mat);

} // end namespace

#include "Matrix.inl"

typedef Math::Matrix<int> iMat;
typedef Math::Matrix<float> Mat;
typedef Math::Matrix<double> dMat;



#endif
