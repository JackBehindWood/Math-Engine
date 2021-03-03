// /*
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// */

#include "../Constants.h"

namespace Math {

template<typename T>
Matrix<T>::Matrix(unsigned int m, unsigned int n) : m_rows(m), m_columns(n)
{
  alloc_matrix();
}

template<typename T>
template<typename Q>
Matrix<T>::Matrix(const std::vector<std::vector<Q>>& data)
{
  set(data);
}

template<typename T>
template<typename Q>
Matrix<T>::Matrix(const Matrix<Q>& mat) : m_rows(mat.rows()), m_columns(mat.columns())
{
  alloc_matrix();
  for (int i = 0; i<m_rows; i++)
  {
    for (int j = 0; j<m_columns; j++)
    {
      m_data[i][j] = static_cast<T>(mat[i][j]);
    }
  }
}

template<typename T>
Matrix<T>::~Matrix()
{
  //alloc_matrix();
  for (int i = 0; i < m_rows; ++i)
  {
    delete[] m_data[i];
  }
  delete[] m_data;
}

template<typename T>
void Matrix<T>::swap_rows(int r1, int r2)
{
  assert("Cannot swap rows" && (abs(r1) <= m_rows || abs(r2) <= m_rows));
  T *tmp = m_data[r1];
  m_data[r1] = m_data[r2];
  m_data[r2] = tmp;
}

template<typename T>
void Matrix<T>::swap_columns(int c1, int c2)
{
  assert("Cannot swap columns" && (abs(c1) <= m_columns || abs(c2) <= m_columns));
  Matrix<T> mat(m_rows, 1);
  for (int i = 0; i < mat.rows(); i++)
  {
    mat[i][0] = m_data[i][c1];
    m_data[i][c1] = m_data[i][c2];
    m_data[i][c2] = mat[i][0];
  }
}

// operators

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator=(const Matrix<Q>& mat)
{
  if (this == &mat)
  {
      return *this;
  }

  if (m_rows != mat.rows() || m_columns != mat.columns() || !std::is_same<T, Q>::value)
  {
    for (int i = 0; i < m_rows; i++) {
        delete[] m_data[i];
    }
    delete[] m_data;

    m_rows = mat.rows();
    m_columns = mat.columns();
    alloc_matrix();
  }

  for (int i = 0; i < m_rows; ++i) {
      for (int j = 0; j < m_columns; ++j) {
          m_data[i][j] = static_cast<T>(mat[i][j]);
      }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator=(const std::vector<std::vector<Q>>& data)
{
  set(data);
  return *this;
}

template<typename T>
T Matrix<T>::operator()(int i, int j) const
{
  return m_data[i][j];
}

template<typename T>
T Matrix<T>::operator()(int i, int j)
{
  return m_data[i][j];
}

template<typename T>
T* Matrix<T>::operator[](int i) const
{
  return m_data[i];
}

template<typename T>
T* Matrix<T>::operator[](int i)
{
  return m_data[i];
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator+(const Matrix<Q>& mat) const
{
  assert("cannot add Matrix" && m_rows == mat.rows());
  assert("cannot add Matrix" && m_columns == mat.columns());
  Matrix<T> new_mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      new_mat[i][j] = m_data[i][j] + static_cast<T>(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator+(Q value) const
{
  Matrix<T> mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      mat[i][j] = m_data[i][j] + static_cast<T>(value);
    }
  }
  return mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator-(const Matrix<Q>& mat) const
{
  assert("cannot subtract Matrix" && m_rows == mat.rows());
  assert("cannot subtract Matrix" && m_columns == mat.columns());
  Matrix<T> new_mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      new_mat[i][j] = m_data[i][j] - static_cast<T>(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator-(Q value) const
{
  Matrix<T> mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      mat[i][j] = m_data[i][j] + static_cast<T>(value);
    }
  }
  return mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator*(const Matrix<Q>& mat) const
{
  assert("Cannot multiply Matrices" && m_columns == mat.rows());
  Matrix<T> new_mat = Matrix<T>::zeros(m_rows, mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      for (int k = 0; k < mat.columns(); k++)
      {
        new_mat[i][j] = new_mat[i][j] + (m_data[i][k] * static_cast<T>(mat[k][j]));
      }
    }
  }
  return new_mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator*(Q value) const
{
  Matrix<T> mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      mat[i][j] = m_data[i][j] * static_cast<T>(value);
    }
  }
  return mat;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator/(const Matrix<Q>& mat) const
{
  return (*this) * mat.inverse();
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::operator/(Q value) const
{
  Matrix<T> mat(m_rows, m_columns);
  value = 1/value;
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      mat[i][j] = m_data[i][j] * static_cast<T>(value);
    }
  }
  return mat;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator+=(const Matrix<Q>& mat)
{
  assert("cannot add Matrix" && m_rows == mat.rows());
  assert("cannot add Matrix" && m_columns == mat.columns());
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] + static_cast<T>(mat[i][j]);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator+=(Q value)
{
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] + static_cast<T>(value);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator-=(const Matrix<Q>& mat)
{
  assert("cannot subtract Matrix" && m_rows == mat.rows());
  assert("cannot subtract Matrix" && m_columns == mat.columns());
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] - static_cast<T>(mat[i][j]);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator-=(Q value)
{
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] - static_cast<T>(value);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator*=(Q value)
{
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] * static_cast<T>(value);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::operator/=(Q value)
{
  value = 1/value;
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = m_data[i][j] * static_cast<T>(value);
    }
  }
  return *this;
}

//

template<typename T>
template<typename Q>
void Matrix<T>::set(const std::vector<std::vector<Q>>& data)
{
  if (m_rows != data.size() || m_columns != data[0].size()) {
    for (int i = 0; i < m_rows; i++) {
        delete[] m_data[i];
    }
    delete[] m_data;

    m_rows = data.size();
    m_columns = data[0].size();
    alloc_matrix();
  }

  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = data[i][j];
    }
  }
}

template<typename T>
Matrix<T> Matrix<T>::transpose() const
{
  Matrix<T> new_mat(m_columns, m_rows);
  for (unsigned int i = 0; i < m_rows; i++)
  {
    for (unsigned int j = 0; j < m_columns; j++)
    {
      new_mat[j][i] = m_data[i][j];
    }
  }
  return new_mat;
}

template<typename T>
template<typename Q>
Matrix<T>& Matrix<T>::fill_matrix(Q value)
{
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      m_data[i][j] = static_cast<T>(value);
    }
  }
  return *this;
}

template<typename T>
template<typename Q>
Matrix<T> Matrix<T>::augment(const Matrix<Q>& mat) const
{
  Matrix<T> new_mat(m_rows, m_columns + mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      if (j < m_columns)
      {
        new_mat[i][j] = m_data[i][j];
      } else {
        new_mat[i][j] = static_cast<T>(mat[i][j - mat.columns()]);
      }
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> Matrix<T>::guassian_eliminate() const
{
  Matrix<T> new_mat(*this);

  int i = 0;
  int j = 0;

  while (i < m_rows)
  {
    bool pivot_found = false;
    while (j < (m_columns - 1) && !pivot_found)
    {
      if (new_mat[i][j] != static_cast<T>(0))
      {
        pivot_found = true;
      } else {
        int max_row = i;
        double max_val = 0;
        for (int k = i + 1; k < m_rows; k++)
        {
          double cur_val = static_cast<double>(new_mat[k][j] >= static_cast<T>(0) ? new_mat[k][j] : -1 * new_mat[k][j]);
          if (cur_val > max_val)
          {
            max_row = k;
            max_val = cur_val;
          }
        }
        if (max_row != i)
        {
          new_mat.swap_rows(max_row, i);
          pivot_found = true;
        } else {
          j++;
        }
      }
    }

    if (pivot_found)
    {
      for (int t = i + 1; t < new_mat.rows(); t++)
      {
       for (int s = j + 1; s < new_mat.columns(); s++)
       {
         new_mat[t][s] = new_mat[t][s] - new_mat[i][s] * (new_mat[t][j] / new_mat[i][j]);
         if (new_mat[t][s] < static_cast<T>(epsilon) && new_mat[t][s] > -1*static_cast<T>(epsilon))
         {
            new_mat[t][s] = static_cast<T>(0);
         }
        }
        new_mat[t][j] = static_cast<T>(0);
       }
     }

     i++;
     j++;
  }
  return new_mat;
}

template<typename T>
Matrix<T> Matrix<T>::row_reduce_from_guassion() const
{
  Matrix<T> new_mat(*this);

  int i = m_rows - 1;
  int j = m_columns - 1;

  while (i >= 0)
  {
    int k = j - 1;
    while (k >= 0)
    {
      if (new_mat[i][k] != static_cast<T>(0))
      {
        j = k;
      }
      k--;
    }

    if (new_mat[i][j] != static_cast<T>(0))
    {
      for (int t = i - 1; t >= 0; t--)
      {
        for (int s = 0; s < m_columns; s++)
        {
          if (s != j)
          {
            new_mat[t][s] = new_mat[t][s] - new_mat[i][s]* (new_mat[t][j] / new_mat[i][j]);
            if (new_mat[t][s] < static_cast<T>(epsilon) && new_mat[t][s] > -1*static_cast<T>(epsilon))
            {
              new_mat[t][s] = static_cast<T>(0);
            }
          }
        }
        new_mat[t][j] = static_cast<T>(0);
      }

      for (int k = j + i; k < new_mat.columns(); k++)
      {
        new_mat[i][k] = new_mat[i][k] / new_mat[i][j];
        if (new_mat[i][k] < static_cast<T>(epsilon) && new_mat[i][k] > -1*static_cast<T>(epsilon))
        {
          new_mat[i][k] = static_cast<T>(0);
        }
      }
      new_mat[i][j] = static_cast<T>(1);
    }
    i--;
    j--;
  }
  return new_mat;
}

template<typename T>
Matrix<T> Matrix<T>::inverse() const
{
  Matrix<T> aug = augment(Matrix<T>::identity(m_rows));
  Matrix<T> ge = aug.guassian_eliminate();
  Matrix<T> rrfg = ge.row_reduce_from_guassion();
  Matrix<T> new_mat(m_rows, m_columns);
  for (int i = 0; i < m_rows; i++)
  {
    for (int j = 0; j < m_columns; j++)
    {
      new_mat[i][j] = rrfg[i][j+m_columns];
    }
  }
  return new_mat;
}


//private function

template<typename T>
void Matrix<T>::alloc_matrix()
{
  m_data = new T*[m_rows];
  for (int i = 0; i < m_rows; i++)
  {
    m_data[i] = new T[m_columns];
  }
}


//extra functions

template<typename T, typename Q> Matrix<T> operator+(Q value, const Matrix<T>& mat)
{
  return mat + static_cast<T>(value);
}

template<typename T, typename Q> Matrix<T> operator-(Q value, const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = static_cast<T>(value) - mat[i][j];
    }
  }
  return new_mat;
}

template<typename T, typename Q> Matrix<T> operator*(Q value, const Matrix<T>& mat)
{
  return mat * static_cast<T>(value);
}

template<typename T, typename Q> Matrix<T> operator/(Q value, const Matrix<T>& mat)
{
  return static_cast<T>(value) * mat.inverse();
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Matrix<T>& mat)
{
  os << "[";
  for (int i = 0; i < mat.rows(); i++)
  {
    if (i > 0)
    {
      os <<" ";
    }
    os << "[";
    os << mat(i, 0);
    for (int j = 1; j < mat.columns(); j++)
    {
      os << " " << mat(i, j);
    }
    os << "]";
    if (i != (mat.rows()-1))
    {
      os << std::endl;
    }
  }
  os << "]";
  return os;
}

template<typename T>
std::istream& operator>>(std::istream& is, const Matrix<T>& mat)
{
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      is >> mat[i][j];
    }
  }
  return is;
}

} // end namespace
