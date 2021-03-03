#include "Math.h"
#include "Matrix/MatrixTransform.h"
#include "Matrix/MatrixDecompose.h"
#include "Relations.h"
#include "Typeptr.h"
#include "Projection.h"

#include <chrono>

int main()
{
  Quat quat(90.0f, {1.0f, 0.0f, 0.0f});
  Quat quat1(90.0f, {1.0f, 0.0f, 0.0f});

  Vec3 vec(1.0f, 2.0f, 3.0f);
  Vec3 vec1(1.0f, 0.0f, 0.0f);
  Vec3 vec2(1.0f, 0.0f, 0.0f);

  //Quat q(Math::radians(Vec3{90.0f, 90.0f, 90.0f}));

  Mat mat = iMat::identity(4);

  std::cout << mat << std::endl;

  // Mat mat = Mat::identity(4);
  // std::cout << mat << std::endl;
  // mat = Math::translate(mat, Vec3{1.0f, 1.0f, 1.0f});
  // mat = Math::rotate(mat, Math::radians(Vec3{90.0f, 90.0f, 90.0f}));

}
