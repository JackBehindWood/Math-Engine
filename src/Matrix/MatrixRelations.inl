namespace Math {

template<typename T>
Matrix<bool> operator==(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] == mat2[i][j];
    }
  }
  return new_mat;
}

template<typename T>
Matrix<bool> operator!=(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] != mat2[i][j];
    }
  }
  return new_mat;
}

template<typename T>
Matrix<bool> operator>(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] > mat2[i][j];
    }
  }
  return new_mat;
}
template<typename T>
Matrix<bool> operator<(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] < mat2[i][j];
    }
  }
  return new_mat;
}
template<typename T>
Matrix<bool> operator>=(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] >= mat2[i][j];
    }
  }
  return new_mat;
}
template<typename T>
Matrix<bool> operator<=(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<bool> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i<new_mat.rows(); i++)
  {
    for (int j = 0; j<new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] <= mat2[i][j];
    }
  }
  return new_mat;
}

template<typename T>
Matrix<bool> equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> eps(mat1.rows(), mat1.columns());
  eps.fill_matrix(static_cast<T>(epsilon));
  return abs(mat1-mat2) < eps;
}
template<typename T>
Matrix<bool> not_equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> eps(mat1.rows(), mat1.columns());
  eps.fill_matrix(static_cast<T>(epsilon));
  return abs(mat1-mat2) > eps;
}
template<typename T>
Matrix<bool> less_than(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> val(mat1.rows(), mat1.columns());
  val.fill_matrix(static_cast<T>(0));
  return (mat1-mat2) < val;
}
template<typename T>
Matrix<bool> less_than_equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> val(mat1.rows(), mat1.columns());
  val.fill_matrix(static_cast<T>(0));
  return (mat1-mat2) <= val;
}
template<typename T>
Matrix<bool> greater_than(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> val(mat1.rows(), mat1.columns());
  val.fill_matrix(static_cast<T>(0));
  return (mat1-mat2) > val;
}

template<typename T>
Matrix<bool> greater_than_equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot compare matrices" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> val(mat1.rows(), mat1.columns());
  val.fill_matrix(static_cast<T>(0));
  return (mat1-mat2) >= val;
}

bool all(const Matrix<bool>& mat)
{
  bool result = true;
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      result = result && mat[i][j];
    }
  }
  return result;
}

bool any(const Matrix<bool>& mat)
{
  bool result = false;
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      result = result || mat[i][j];
    }
  }
  return result;
}

template<typename T>
Matrix<bool> epsilon_equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot equal matrix" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  T eps = static_cast<T>(epsilon);
  Matrix<T> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = abs(mat1[i][j] - mat2[i][j]) < eps;
    }
  }
  return new_mat;
}

template<typename T>
Matrix<bool> epsilon_not_equal(const Matrix<T>& mat1, const Matrix<T>& mat2)
{
  assert("Cannot equal matrix" && (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  T eps = static_cast<T>(epsilon);
  Matrix<T> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = abs(mat1[i][j] - mat2[i][j]) >= eps;
    }
  }
  return new_mat;
}


} // end namespace
