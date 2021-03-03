#include "../Constants.h"
#include "../Vector/Vector3D.h"
#include "../Trigonometric.h"

namespace Math {
namespace detail {
	template<typename T> Vector3D<T> scale(const Vector3D<T>& vec, const T& len)
	{
		return vec * len / length(vec);
	}
} // end namespace detail

template<typename T>
bool decompose_transform(const Matrix<T>& transform, Vector3D<T>& translation, Vector3D<T>& rotation, Vector3D<T>& scale)
{
		Matrix<T> local_matrix(transform);

		// Normalize the matrix.
		if (epsilon_equal(local_matrix[3][3], static_cast<T>(0)))
			return false;

		//First, isolate perspective.  This is the messiest.
		if (
			epsilon_not_equal(local_matrix[0][3], static_cast<T>(0)) ||
			epsilon_not_equal(local_matrix[1][3], static_cast<T>(0)) ||
			epsilon_not_equal(local_matrix[2][3], static_cast<T>(0)))
		{
			// Clear the perspective partition
			local_matrix[3][0] = local_matrix[3][1] = local_matrix[3][2] = static_cast<T>(0);
			local_matrix[3][3] = static_cast<T>(1);
		}

		// Next take care of translation (easy).
		translation = Vector3D<T>(local_matrix[0][3], local_matrix[1][3], local_matrix[2][3]);
		local_matrix[0][3] = static_cast<T>(0);
    local_matrix[1][3] = static_cast<T>(0);
    local_matrix[2][3] = static_cast<T>(0);

		Vector3D<T> row[3], pdum3;

		// Now get scale and shear.
		for (int i = 0; i < 3; i++)
    {
        row[i].x = local_matrix[0][i];
        row[i].y = local_matrix[1][i];
        row[i].z = local_matrix[2][i];
    }

		// Compute X scale factor and normalize first row.
		scale.x = static_cast<T>(length(row[0]));
		row[0] = detail::scale(row[0], static_cast<T>(1));
		scale.y = static_cast<T>(length(row[1]));
		row[1] = detail::scale(row[1], static_cast<T>(1));
		scale.z = static_cast<T>(length(row[2]));
		row[2] = detail::scale(row[2], static_cast<T>(1));

		// At this point, the matrix (in rows[]) is orthonormal.
		// Check for a coordinate system flip.  If the determinant
		// is -1, then negate the matrix and the scaling factors.

		rotation.y = asin(-row[0].z);
		if (cos(rotation.y) != 0) {
			rotation.x = atan2(row[1].z, row[2].z);
			rotation.z = atan2(row[0].y, row[0].x);
		}
		else {
			rotation.x = atan2(-row[2].x, row[1].y);
			rotation.z = 0;
		}
		return true;
	}

} // end namespace
