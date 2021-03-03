namespace Math {

template<typename T>
bool epsilon_equal(const T& x, const T& y)
{
  return abs(x-y) < static_cast<T>(epsilon);
}

template<typename T>
bool epsilon_not_equal(const T& x, const T& y)
{
  return abs(x-y) >= static_cast<T>(epsilon);
}


} // end namespace
