namespace Math {

//Matrix extra functions

template<typename T>
inline Matrix<T> quat_to_matrix(unsigned int m, const Quaternion<T>& quat)
{
  Matrix<T> new_mat = Matrix<T>::identity(m);
  T qxx(quat.vec.x * quat.vec.x);
  T qyy(quat.vec.y * quat.vec.y);
  T qzz(quat.vec.z * quat.vec.z);
  T qxz(quat.vec.x * quat.vec.z);
	T qxy(quat.vec.x * quat.vec.y);
	T qyz(quat.vec.y * quat.vec.z);
	T qwx(quat.w * quat.vec.x);
	T qwy(quat.w * quat.vec.y);
	T qwz(quat.w * quat.vec.z);

	// new_mat[0][0] = T(1) - T(2) * (qyy+qzz);
	// new_mat[0][1] = T(2) * (qxy+qwz);
	// new_mat[0][2] = T(2) * (qxz-qwy);
  //
	// new_mat[1][0] = T(2) * (qxy-qwz);
	// new_mat[1][1] = T(1) - T(2) * (qxx+qzz);
	// new_mat[1][2] = T(2) * (qyz+qwx);
  //
	// new_mat[2][0] = T(2) * (qxz+qwy);
	// new_mat[2][1] = T(2) * (qyz-qwx);
	// new_mat[2][2] = T(1) - T(2) * (qxx+qyy);

  new_mat[0][0] = T(1) - T(2) * (qyy+qzz);
  new_mat[0][1] = T(2) * (qxy-qwz);
  new_mat[0][2] = T(2) * (qxz+qwy);

	new_mat[1][0] = T(2) * (qxy+qwz);
  new_mat[1][1] = T(1) - T(2) * (qxx+qzz);
  new_mat[1][2] = T(2) * (qyz-qwx);

	new_mat[2][0] = T(2) * (qxz-qwy);
	new_mat[2][1] = T(2) * (qyz+qwx);
	new_mat[2][2] = T(1) - T(2) * (qxx+qyy);

  return new_mat;
}

template<typename T>
inline Matrix<T> quat_to_mat4(const Quaternion<T>& quat)
{
  Matrix<T> new_mat(4, 4);
  new_mat[0][0] = new_mat[1][1] = new_mat[2][2] = new_mat[3][3] = quat.w;
  new_mat[1][0] = new_mat[3][2] = quat.vec.x;
  new_mat[2][0] = new_mat[1][3] =  quat.vec.y;
  new_mat[3][0] = new_mat[2][1] = quat.vec.z;
  new_mat[0][1] = new_mat[2][3] = -quat.vec.x;
  new_mat[3][1] = new_mat[0][2] = -quat.vec.y;
  new_mat[1][2] = new_mat[0][3] =  -quat.vec.z;
  return new_mat;
}


//Matrix return dot functions

template<typename T, typename Q>
Matrix<T> dot(const Matrix<T>& mat1, const Matrix<Q>& mat2)
{
  assert("Cannot multiply Matrices" && mat1.columns() == mat2.rows());
  Matrix<T> new_mat = Matrix<T>::zeros(mat1.rows(), mat2.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      for (int k = 0; k < mat1.columns(); k++)
      {
        new_mat[i][j] = new_mat[i][j] + (mat1[i][k] * static_cast<T>(mat2[k][j]));
      }
    }
  }
  return new_mat;
}

template<typename T, typename Q>
Matrix<T> dot(const Matrix<T>& mat, const Vector4D<Q>& vec)
{
  assert("Cannot multiply Matrix by Vector" && mat.columns() >= 4);
  Matrix<T> new_mat = Matrix<T>::ones(mat.columns(), 1);
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[1][0] = static_cast<T>(vec.y);
  new_mat[2][0] = static_cast<T>(vec.z);
  new_mat[3][0] = static_cast<T>(vec.w);
  return dot(mat, new_mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Vector4D<T>& vec, const Matrix<Q>& mat)
{
  assert("Cannot multiply Vector by Matrix" && mat.rows() >= 4);
  Matrix<T> new_mat = Matrix<T>::ones(1, mat.rows());
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[0][1] = static_cast<T>(vec.y);
  new_mat[0][2] = static_cast<T>(vec.z);
  new_mat[0][3] = static_cast<T>(vec.w);
  return dot(new_mat, mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Matrix<T>& mat, const Vector3D<Q>& vec)
{
  assert("Cannot multiply Matrix by Vector" && mat.columns() >= 3);
  Matrix<T> new_mat = Matrix<T>::ones(mat.columns(), 1);
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[1][0] = static_cast<T>(vec.y);
  new_mat[2][0] = static_cast<T>(vec.z);
  return dot(mat, new_mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Vector3D<T>& vec, const Matrix<Q>& mat)
{
  assert("Cannot multiply Vector by Matrix" && mat.rows() >= 3);
  Matrix<T> new_mat = Matrix<T>::ones(1, mat.rows());
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[0][1] = static_cast<T>(vec.y);
  new_mat[0][2] = static_cast<T>(vec.z);
  return dot(new_mat, mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Matrix<T>& mat, const Vector2D<Q>& vec)
{
  assert("Cannot multiply Matrix by Vector" && mat.columns() >= 2);
  Matrix<T> new_mat = Matrix<T>::ones(mat.columns(), 1);
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[1][0] = static_cast<T>(vec.y);
  return dot(mat, new_mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Vector2D<T>& vec, const Matrix<Q>& mat)
{
  assert("Cannot multiply Vector by Matrix" && mat.rows() >= 2);
  Matrix<T> new_mat = Matrix<T>::ones(1, mat.rows());
  new_mat[0][0] = static_cast<T>(vec.x);
  new_mat[0][1] = static_cast<T>(vec.y);
  return dot(new_mat, mat);
}

template<typename T, typename Q>
Matrix<T> dot(const Matrix<T>& mat, const Quaternion<Q>& quat)
{
  assert("Cannot multiply Matrix by Quaternion" && mat.columns() >= 3);
  return dot(mat, quat_to_matrix(mat.columns(), quat));
}

template<typename T, typename Q>
Matrix<T> dot(const Quaternion<T>& quat, const Matrix<Q>& mat)
{
  assert("Cannot multiply Matrix by Quaternion" && mat.rows() >= 3);
  return dot(Matrix<T>::quat_to_matrix(mat.rows(), quat), mat);
}

// Matrix return multiply functions

template<typename T, typename Q>
Matrix<T> multiply(const Matrix<T>& mat1, const Matrix<Q>& mat2)
{
  assert("Cannot multiply Matrices"&& (mat1.rows() == mat2.rows() || mat1.columns() == mat2.columns()));
  Matrix<T> new_mat(mat1.rows(), mat2.columns());

  std::cout << mat1.rows() << ", " << mat2.columns() <<std::endl;
  for (int i = 0; i <new_mat.rows(); i++)
  {
    for (int j = 0; j <new_mat.columns(); j++)
    {
      new_mat[i][j] = mat1[i][j] * static_cast<T>(mat2[i][j]);
    }
  }
  return new_mat;
}

// matrix extra operators

template<typename T, typename Q>
Matrix<T> operator*(const Matrix<T>& mat, const Vector4D<Q>& vec)
{
  return dot(mat, vec);
}

template<typename T, typename Q>
Matrix<T> operator*(const Vector4D<T>& vec, const Matrix<Q>& mat)
{
  return dot(vec, mat);
}

template<typename T, typename Q>
Matrix<T> operator*(const Matrix<T>& mat, const Vector3D<Q>& vec)
{
  return dot(mat, vec);
}

template<typename T, typename Q>
Matrix<T> operator*(const Vector3D<T>& vec, const Matrix<Q>& mat)
{
  return dot(vec, mat);
}

template<typename T, typename Q>
Matrix<T> operator*(const Matrix<T>& mat, const Vector2D<Q>& vec)
{
  return dot(mat, vec);
}

template<typename T, typename Q>
Matrix<T> operator*(const Vector2D<T>& vec, const Matrix<Q>& mat)
{
  return dot(vec, mat);
}

template<typename T, typename Q>
Matrix<T> operator*(const Matrix<T>& mat, const Quaternion<Q>& quat)
{
  return dot(mat, quat);
}

template<typename T, typename Q>
Matrix<T> operator*(const Quaternion<T>& quat, const Matrix<Q>& mat)
{
  return dot(quat, mat);
}

template<typename T>
Matrix<T> pow(const Matrix<T>& mat, const int& x)
{
  if (x < 0)
  {
    if (x == -1)
    {
      return mat.inverse();
    }
    return pow(mat.inverse(), -x);
  }
  if (x == 1)
  {
    return mat;
  }
  if (x == 0)
  {
    return Matrix<T>::identity(mat.rows());
  }
  Matrix<T> new_mat(mat);
  for (unsigned int i = x; i > 1; i--)
  {
    new_mat = dot(new_mat, mat);
  }
  return new_mat;
}

template<typename T, typename Q>
Matrix<T> pow(const Q& x, const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = static_cast<T>(pow(x, mat[i][j]));
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> exp(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = static_cast<T>(exp(mat[i][j]));
    }
  }
  return new_mat;
}

template<typename T, typename Q>
Matrix<T> log(const Matrix<T>& mat, const Q& b)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = static_cast<T>(log(mat[i][j], b));
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> ln(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = static_cast<T>(ln(mat[i][j]));
    }
  }
  return new_mat;
}

template<typename T>
T sum(const Matrix<T>& mat)
{
  T s = static_cast<T>(0);
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      s += mat[i][j];
    }
  }
  return s;
}

template<typename T>
Matrix<T> abs(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < mat.rows(); i++)
  {
    for (int j = 0; j < mat.columns(); j++)
    {
      new_mat[i][j] = abs(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> inverse(const Matrix<T>& mat)
{
    return mat.inverse();
}

template<typename T>
Matrix<T> inverse2x2(const Matrix<T>& mat)
{
  T over_determinent = static_cast<T>(1) / (mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]);
  Matrix<T> inv(2, 2);
  inv[0][0] = mat[1][1] * over_determinent;
  inv[0][1] = - mat[0][1] * over_determinent;
  inv[1][0] = - mat[1][0] * over_determinent;
  inv[1][1] = mat[0][0] * over_determinent;

	return inv;
}

template<typename T>
Matrix<T> inverse3x3(const Matrix<T>& mat)
{
  T over_determinent = static_cast<T>(1) / (
                      mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2])
                    - mat[1][0] * (mat[0][1] * mat[2][2] - mat[2][1] * mat[0][2])
                    + mat[2][0] * (mat[0][1] * mat[1][2] - mat[1][1] * mat[0][2]));

  Matrix<T> inv(3, 3);
  inv[0][0] = (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2]) * over_determinent;
	inv[1][0] = - (mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2]) * over_determinent;
	inv[2][0] = (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]) * over_determinent;
	inv[0][1] = - (mat[0][1] * mat[2][2] - mat[2][1] * mat[0][2]) * over_determinent;
	inv[1][1] = (mat[0][0] * mat[2][2] - mat[2][0] * mat[0][2]) * over_determinent;
	inv[2][1] = - (mat[0][0] * mat[2][1] - mat[2][0] * mat[0][1]) * over_determinent;
	inv[0][2] = (mat[0][1] * mat[1][2] - mat[1][1] * mat[0][2]) * over_determinent;
	inv[1][2] = - (mat[0][0] * mat[1][2] - mat[1][0] * mat[0][2]) * over_determinent;
	inv[2][2] = (mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]) * over_determinent;

	return inv;
}

template<typename T>
Matrix<T> inverse4x4(const Matrix<T>& mat)
{
  T a1 = mat[2][2] * mat[3][3] - mat[2][3] * mat[3][2];
  T a2 = mat[2][1] * mat[3][3] - mat[2][3] * mat[3][1];
  T a3 = mat[2][1] * mat[3][2] - mat[2][2] * mat[3][1];
  T a4 = mat[2][0] * mat[3][3] - mat[2][3] * mat[3][0];
  T a5 = mat[2][0] * mat[3][2] - mat[2][2] * mat[3][0];
  T a6 = mat[2][0] * mat[3][1] - mat[2][1] * mat[3][0];
  T a7 = mat[1][2] * mat[3][3] - mat[1][3] * mat[3][2];
  T a8 = mat[1][1] * mat[3][3] - mat[1][3] * mat[3][1];
  T a9 = mat[1][1] * mat[3][2] - mat[1][2] * mat[3][1];
  T a10 = mat[1][2] * mat[2][3] - mat[1][3] * mat[2][2];
  T a11 = mat[1][1] * mat[2][3] - mat[1][3] * mat[2][1];
  T a12 = mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1];
  T a13 = mat[1][0] * mat[3][3] - mat[1][3] * mat[3][0];
  T a14 = mat[1][0] * mat[3][2] - mat[1][2] * mat[3][0];
  T a15 = mat[1][0] * mat[2][3] - mat[1][3] * mat[2][0];
  T a16 = mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0];
  T a17 = mat[1][0] * mat[3][1] - mat[1][1] * mat[3][0];
  T a18 = mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0];

  T over_determinent = static_cast<T>(1) / (
        mat[0][0] * (mat[1][1] * a1 - mat[1][2] * a2 + mat[1][3] * a3)
      - mat[0][1] * (mat[1][0] * a1 - mat[1][2] * a4 + mat[1][3] * a5)
      + mat[0][2] * (mat[1][0] * a2 - mat[1][1] * a4 + mat[1][3] * a6)
      - mat[0][3] * (mat[1][0] * a3 - mat[1][1] * a5 + mat[1][2] * a6));

  Matrix<T> inv(4, 4);
  inv[0][0] = over_determinent *   (mat[1][1] * a1 - mat[1][2] * a2 + mat[1][3] * a3);
  inv[0][1] = over_determinent * - (mat[0][1] * a1 - mat[0][2] * a2 + mat[0][3] * a3);
  inv[0][2] = over_determinent *   (mat[0][1] * a7 - mat[0][2] * a8 + mat[0][3] * a9);
  inv[0][3] = over_determinent * - (mat[0][1] * a10 - mat[0][2] * a11 + mat[0][3] * a12);
  inv[1][0] = over_determinent * - (mat[1][0] * a1 - mat[1][2] * a4 + mat[1][3] * a5);
  inv[1][1] = over_determinent *   (mat[0][0] * a1 - mat[0][2] * a4 + mat[0][3] * a5);
  inv[1][2] = over_determinent * - (mat[0][0] * a7 - mat[0][2] * a13 + mat[0][3] * a14);
  inv[1][3] = over_determinent *   (mat[0][0] * a10 - mat[0][2] * a15 + mat[0][3] * a16);
  inv[2][0] = over_determinent *   (mat[1][0] * a2 - mat[1][1] * a4 + mat[1][3] * a6);
  inv[2][1] = over_determinent * - (mat[0][0] * a2 - mat[0][1] * a4 + mat[0][3] * a6);
  inv[2][2] = over_determinent *   (mat[0][0] * a8 - mat[0][1] * a13 + mat[0][3] * a17);
  inv[2][3] = over_determinent * - (mat[0][0] * a11 - mat[0][1] * a15 + mat[0][3] * a18);
  inv[3][0] = over_determinent * - (mat[1][0] * a3 - mat[1][1] * a5 + mat[1][2] * a6);
  inv[3][1] = over_determinent *   (mat[0][0] * a3 - mat[0][1] * a5 + mat[0][2] * a6);
  inv[3][2] = over_determinent * - (mat[0][0] * a9 - mat[0][1] * a14 + mat[0][2] * a17);
  inv[3][3] = over_determinent *   (mat[0][0] * a12 - mat[0][1] * a16 + mat[0][2] * a18);

 return inv;
}

template<typename T>
Matrix<T> sign(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = sign(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> floor(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = floor(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> trunc(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = trunc(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> round(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = round(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> round_even(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = round_even(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> ceil(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = ceil(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T>
Matrix<T> fract(const Matrix<T>& mat)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = fract(mat[i][j]);
    }
  }
  return new_mat;
}

template<typename T, typename Q>
Matrix<T> mod(const Matrix<T>& mat1, const Matrix<Q>& mat2)
{
  assert("Cannot take the modulo of the matrix" &&  (mat1.rows() != mat2.rows() || mat1.columns() != mat2.columns()));
  Matrix<T> new_mat(mat1.rows(), mat1.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = mod(mat1[i][j], mat2[i][j]);
    }
  }
  return new_mat;
}

template<typename T, typename Q>
Matrix<T> mod(const Matrix<T>& mat, const Q& x)
{
  Matrix<T> new_mat(mat.rows(), mat.columns());
  for (int i = 0; i < new_mat.rows(); i++)
  {
    for (int j = 0; j < new_mat.columns(); j++)
    {
      new_mat[i][j] = mod(mat[i][j], x);
    }
  }
  return new_mat;
}


} // end namespace
