namespace Math {

// vector dot product function

template<typename T, typename Q>
float dot(const Vector4D<T>& vec1, const Vector4D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                          +vec1.z*static_cast<T>(vec2.z)+vec1.w*static_cast<T>(vec2.w));
};

template<typename T, typename Q>
float dot(const Vector3D<T>& vec1, const Vector3D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                                                        +vec1.z*static_cast<T>(vec2.z));
};

template<typename T, typename Q>
float dot(const Vector2D<T>& vec1, const Vector2D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y));
};

template<typename T, typename Q>
float dot(const Vector4D<T>& vec1, const Vector3D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                          +vec1.z*static_cast<T>(vec2.z)+vec1.w*static_cast<T>(0.0f));
}

template<typename T, typename Q>
float dot(const Vector4D<T>& vec1, const Vector2D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                            +vec1.z*static_cast<T>(0.0f)+vec1.w*static_cast<T>(0.0f));
}

template<typename T, typename Q>
float dot(const Vector3D<T>& vec1, const Vector4D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
            +vec1.z*static_cast<T>(vec2.z)+static_cast<T>(0.0f)*static_cast<T>(vec2.w));
}

template<typename T, typename Q>
float dot(const Vector3D<T>& vec1, const Vector2D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                          +vec1.z*static_cast<T>(0.0f));
}

template<typename T, typename Q>
float dot(const Vector2D<T>& vec1, const Vector4D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
    +static_cast<T>(0.0f)*static_cast<T>(vec2.z)+static_cast<T>(0.0f)*static_cast<T>(vec2.w));
}

template<typename T, typename Q>
float dot(const Vector2D<T>& vec1, const Vector3D<Q>& vec2)
{
  return static_cast<float>(vec1.x*static_cast<T>(vec2.x)+vec1.y*static_cast<T>(vec2.y)
                                        +static_cast<T>(0.0f)*static_cast<T>(vec2.z));
}


// vector return cross product

template<typename T, typename Q>
Vector4D<T> cross(const Vector4D<T>& vec1, const Vector4D<Q>& vec2)
{
  assert("Not implemented yet" && !true);
  return nullptr;
}

template<typename T, typename Q>
Vector3D<T> cross(const Vector3D<T>& vec1, const Vector3D<Q>& vec2)
{
  return Vector3D<T>(vec1.y*static_cast<T>(vec2.z)-vec1.z*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.x)-vec1.x*static_cast<T>(vec2.z),
                     vec1.x*static_cast<T>(vec2.y)-vec1.y*static_cast<T>(vec2.x));
}

template<typename T, typename Q>
Vector3D<T> cross(const Vector2D<T>& vec1, const Vector2D<Q>& vec2)
{
  return Vector3D<T>(vec1.y*static_cast<T>(0.0f)-static_cast<T>(0.0f)*static_cast<T>(vec2.y),
                     static_cast<T>(0.0f)*static_cast<T>(vec2.x)-vec1.x*static_cast<T>(0.0f),
                     vec1.x*static_cast<T>(vec2.y)-vec1.y*static_cast<T>(vec2.x));
}

template<typename T, typename Q>
Vector4D<T> cross(const Vector4D<T>& vec1, const Vector3D<Q>& vec2)
{
  assert("Not implemented yet" && !true);
  return nullptr;
}

template<typename T, typename Q>
Vector4D<T> cross(const Vector4D<T>& vec1, const Vector2D<Q>& vec2)
{
  assert("Not implemented yet" && !true);
  return nullptr;
}

template<typename T, typename Q>
Vector4D<T> cross(const Vector3D<T>& vec1, const Vector4D<Q>& vec2)
{
  assert("Not implemented yet" && !true);
  return nullptr;
}

template<typename T, typename Q>
Vector3D<T> cross(const Vector3D<T>& vec1, const Vector2D<Q>& vec2)
{
  return Vector3D<T>(vec1.y*static_cast<T>(0.0f)-vec1.z*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.x)-vec1.x*static_cast<T>(0.0f),
                     vec1.x*static_cast<T>(vec2.y)-vec1.y*static_cast<T>(vec2.x));
}

template<typename T, typename Q>
Vector4D<T> cross(const Vector2D<T>& vec1, const Vector4D<Q>& vec2)
{
  assert("Not implemented yet" && !true);
  return nullptr;
}

template<typename T, typename Q>
Vector3D<T> cross(const Vector2D<T>& vec1, const Vector3D<Q>& vec2)
{
  return Vector3D<T>(vec1.y*static_cast<T>(vec2.z)-static_cast<T>(0.0f)*static_cast<T>(vec2.y),
                     static_cast<T>(0.0f)*static_cast<T>(vec2.x)-vec1.x*static_cast<T>(vec2.z),
                     vec1.x*static_cast<T>(vec2.y)-vec1.y*static_cast<T>(vec2.x));
}


// vector return multiply

template<typename T, typename Q>
Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector4D<Q>& vec2)
{
  return Vector4D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.z),vec1.w*static_cast<T>(vec2.w));
}

template<typename T, typename Q>
Vector3D<T> multiply(const Vector3D<T>& vec1, const Vector3D<Q>& vec2)
{
  return Vector3D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.z));
}

template<typename T, typename Q>
Vector2D<T> multiply(const Vector2D<T>& vec1, const Vector2D<Q>& vec2)
{
  return Vector2D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y));
}

template<typename T, typename Q>
Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector3D<Q>& vec2)
{
  return Vector4D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.z),vec1.w*static_cast<T>(0.0f));
}

template<typename T, typename Q>
Vector4D<T> multiply(const Vector4D<T>& vec1, const Vector2D<Q>& vec2)
{
  return Vector4D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(0.0f),vec1.w*static_cast<T>(0.0f));
}

template<typename T, typename Q>
Vector4D<T> multiply(const Vector3D<T>& vec1, const Vector4D<Q>& vec2)
{
  return Vector4D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(vec2.z),static_cast<T>(0.0f)*static_cast<T>(vec2.w));
}

template<typename T, typename Q>
Vector3D<T> multiply(const Vector3D<T>& vec1, const Vector2D<Q>& vec2)
{
  return Vector3D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     vec1.z*static_cast<T>(0.0f));
}

template<typename T, typename Q>
Vector4D<T> multiply(const Vector2D<T>& vec1, const Vector4D<Q>& vec2)
{
  return Vector4D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     static_cast<T>(0.0f)*static_cast<T>(vec2.z),
                     static_cast<T>(0.0f)*static_cast<T>(vec2.w));
}

template<typename T, typename Q>
Vector3D<T> multiply(const Vector2D<T>& vec1, const Vector3D<Q>& vec2)
{
  return Vector3D<T>(vec1.x*static_cast<T>(vec2.x),vec1.y*static_cast<T>(vec2.y),
                     static_cast<T>(0.0f)*static_cast<T>(vec2.z));
}

// vector lerp/slerp function
template<typename T, typename Q>

Vector4D<T> lerp(const Vector4D<T>& vec1, const Vector4D<T>& vec2, const Q& t)
{
  return vec1 + (vec2 - vec1) * static_cast<T>(t);
}

template<typename T, typename Q>

Vector3D<T> lerp(const Vector3D<T>& vec1, const Vector3D<T>& vec2, const Q& t)
{
  return vec1 + (vec2 - vec1) * static_cast<T>(t);
}

template<typename T, typename Q>
Vector2D<T> lerp(const Vector2D<T>& vec1, const Vector2D<T>& vec2, const Q& t)
{
  return vec1 + (vec2 - vec1) * static_cast<T>(t);
}

template<typename T, typename Q>
Vector4D<T> slerp(const Vector4D<T>& vec1, const Vector4D<T>& vec2, const Q& t)
{
  float angle = Math::angle(vec1, vec2);
  float bottom = sin(angle);
  bottom = 1/bottom;
  return (sin((1-static_cast<T>(t))*angle)*bottom*vec1 + sin(t*angle)*bottom*vec2);
}

template<typename T, typename Q>
Vector3D<T> slerp(const Vector3D<T>& vec1, const Vector3D<T>& vec2, const Q& t)
{
  float angle = Math::angle(vec1, vec2);
  float bottom = sin(angle);
  bottom = 1/bottom;
  return (sin((1-static_cast<T>(t))*angle)*bottom*vec1 + sin(t*angle)*bottom*vec2);
}

template<typename T, typename Q>
Vector2D<T> slerp(const Vector2D<T>& vec1, const Vector2D<T>& vec2, const Q& t)
{
  float angle = Math::angle(vec1, vec2);
  float bottom = sin(angle);
  bottom = 1/bottom;
  return (sin((1-static_cast<T>(t))*angle)*bottom*vec1 + sin(t*angle)*bottom*vec2);
}


// extra vector functions

template<typename T> Vector4D<T> normalize(const Vector4D<T>& vec)
{
  return vec.normal();
}

template<typename T> Vector3D<T> normalize(const Vector3D<T>& vec)
{
  return vec.normal();
}

template<typename T> Vector2D<T> normalize(const Vector2D<T>& vec)
{
  return vec.normal();
}

template<typename T, typename Q>
Vector4D<T> pow(const Vector4D<T>& vec, const Q& x)
{
  return Vector4D<T>(pow(vec.x, x), pow(vec.y, x), pow(vec.z, x), pow(vec.w, x));
}

template<typename T, typename Q>
Vector3D<T> pow(const Vector3D<T>& vec, const Q& x)
{
  return Vector3D<T>(pow(vec.x, x), pow(vec.y, x), pow(vec.z, x));
}

template<typename T, typename Q>
Vector2D<T> pow(const Vector2D<T>& vec, const Q& x)
{
  return Vector2D<T>(pow(vec.x, x), pow(vec.y, x));
}

template<typename T>
Vector4D<T> exp(const Vector4D<T>& vec)
{
  return Vector4D<T>(exp(vec.x), exp(vec.y), exp(vec.z), exp(vec.w));
}

template<typename T>
Vector3D<T> exp(const Vector3D<T>& vec)
{
  return Vector3D<T>(exp(vec.x), exp(vec.y), exp(vec.z));
}

template<typename T>
Vector2D<T> exp(const Vector2D<T>& vec)
{
  return Vector2D<T>(exp(vec.x), exp(vec.y));
}

template<typename T, typename Q>
Vector4D<T> log(const Vector4D<T>& vec, const Q& b)
{
  return Vector4D<T>(log(vec.x, b), log(vec.y, b), log(vec.z, b), log(vec.w, b));
}

template<typename T, typename Q>
Vector3D<T> log(const Vector3D<T>& vec, const Q& b)
{
  return Vector3D<T>(log(vec.x, b), log(vec.y, b), log(vec.z, b));
}

template<typename T, typename Q>
Vector2D<T> log(const Vector2D<T>& vec, const Q& b)
{
  return Vector2D<T>(log(vec.x, b), log(vec.y, b));
}

template<typename T>
Vector4D<T> ln(const Vector4D<T>& vec)
{
  return Vector4D<T>(ln(vec.x), ln(vec.y), ln(vec.z), ln(vec.w));
}

template<typename T>
Vector3D<T> ln(const Vector3D<T>& vec)
{
  return Vector3D<T>(ln(vec.x), ln(vec.y), ln(vec.z));
}

template<typename T>
Vector2D<T> ln(const Vector2D<T>& vec)
{
  return Vector2D<T>(ln(vec.x), ln(vec.y));
}

template<typename T>
T sum(const Vector4D<T>& vec)
{
  return vec.x+vec.y+vec.z+vec.w;
}

template<typename T>
T sum(const Vector3D<T>& vec)
{
  return vec.x+vec.y+vec.z;
}

template<typename T>
T sum(const Vector2D<T>& vec)
{
  return vec.x+vec.y;
}

template<typename T >
Vector4D<T> abs(const Vector4D<T>& vec)
{
  return Vector4D<T>(abs(vec.x),abs(vec.y),abs(vec.z),abs(vec.w));
}

template<typename T >
Vector3D<T> abs(const Vector3D<T>& vec)
{
  return Vector3D<T>(abs(vec.x),abs(vec.y),abs(vec.z));
}

template<typename T >
Vector2D<T> abs(const Vector2D<T>& vec)
{
  return Vector2D<T>(abs(vec.x),abs(vec.y));
}


template<typename T, typename Q>
float angle(const Vector4D<T>& vec1, const Vector4D<Q>& vec2)
{
  float bottom = static_cast<T>(vec1.magnitude() * vec2.magnitude());
  float dot_product = dot(vec1, vec2);
  return static_cast<T>(std::acos(dot_product/bottom));
}

template<typename T, typename Q>
float angle(const Vector3D<T>& vec1, const Vector3D<Q>& vec2)
{
  float bottom = static_cast<T>(vec1.magnitude() * vec2.magnitude());
  float dot_product = dot(vec1, vec2);
  return static_cast<T>(std::acos(dot_product/bottom));
}

template<typename T, typename Q>
float angle(const Vector2D<T>& vec1, const Vector2D<Q>& vec2)
{
  float bottom = static_cast<T>(vec1.magnitude() * vec2.magnitude());
  float dot_product = dot(vec1, vec2);
  return static_cast<T>(std::acos(dot_product/bottom));
}

template<typename T, typename Q>
float distance(const Vector4D<T>& vec1, const Vector4D<Q>& vec2)
{
  float dx =  static_cast<float>(static_cast<T>(vec2.x) - vec1.x);
  float dy =  static_cast<float>(static_cast<T>(vec2.y) - vec1.y);
  float dz =  static_cast<float>(static_cast<T>(vec2.z) - vec1.z);
  float dw =  static_cast<float>(static_cast<T>(vec2.w) - vec1.w);
  return std::sqrt(dx*dx+dy*dy+dz*dz+dw*dw);
}

template<typename T, typename Q>
float distance(const Vector3D<T>& vec1, const Vector3D<Q>& vec2)
{
  float dx =  static_cast<float>(static_cast<T>(vec2.x) - vec1.x);
  float dy =  static_cast<float>(static_cast<T>(vec2.y) - vec1.y);
  float dz =  static_cast<float>(static_cast<T>(vec2.z) - vec1.z);
  return std::sqrt(dx*dx+dy*dy+dz*dz);
}

template<typename T, typename Q>
float distance(const Vector2D<T>& vec1, const Vector2D<Q>& vec2)
{
  float dx =  static_cast<float>(static_cast<T>(vec2.x) - vec1.x);
  float dy =  static_cast<float>(static_cast<T>(vec2.y) - vec1.y);
  return std::sqrt(dx*dx+dy*dy);
}

template<typename T>
T length(const Vector4D<T>& vec)
{
  return std::sqrt(dot(vec, vec));
}

template<typename T>
T length(const Vector3D<T>& vec)
{
  return std::sqrt(dot(vec, vec));
}

template<typename T>
float length(const Vector2D<T>& vec)
{
  return std::sqrt(dot(vec, vec));
}


template<typename T>
Vector4D<T> min(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  return Vector4D<T>(min<T>(vec1.x, vec2.x),
                     min<T>(vec1.y, vec2.y),
                     min<T>(vec1.z, vec2.z),
                     min<T>(vec1.w, vec2.w));
}

template<typename T>
Vector3D<T> min(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  return Vector3D<T>(min<T>(vec1.x, vec2.x),
                     min<T>(vec1.y, vec2.y),
                     min<T>(vec1.z, vec2.z));
}

template<typename T>
Vector2D<T> min(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  return Vector2D<T>(min<T>(vec1.x, vec2.x),
                     min<T>(vec1.y, vec2.y));
}

template<typename T>
Vector4D<T> max(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  return Vector4D<T>(std::max<T>(vec1.x, vec2.x),
                     std::max<T>(vec1.y, vec2.y),
                     std::max<T>(vec1.z, vec2.z),
                     std::max<T>(vec1.w, vec2.w));
}

template<typename T>
Vector3D<T> max(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  return Vector3D<T>(std::max<T>(vec1.x, vec2.x),
                     std::max<T>(vec1.y, vec2.y),
                     std::max<T>(vec1.z, vec2.z));
}

template<typename T>
Vector2D<T> max(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  return Vector2D<T>(std::max<T>(vec1.x, vec2.x),
                     std::max<T>(vec1.y, vec2.y));
}


template<typename T>
Vector4D<T> sign(const Vector4D<T>& vec)
{
  return Vector4D<T>(sign(vec.x), sign(vec.y), sign(vec.z), sign(vec.w));
}

template<typename T>
Vector3D<T> sign(const Vector3D<T>& vec)
{
  return Vector3D<T>(sign(vec.x), sign(vec.y), sign(vec.z));
}

template<typename T>
Vector2D<T> sign(const Vector2D<T>& vec)
{
  return Vector2D<T>(sign(vec.x), sign(vec.y));
}

template<typename T>
Vector4D<T> floor(const Vector4D<T>& vec)
{
  return Vector4D<T>(floor(vec.x), floor(vec.y), floor(vec.z), floor(vec.w));
}

template<typename T>
Vector3D<T> floor(const Vector3D<T>& vec)
{
  return Vector3D<T>(floor(vec.x), floor(vec.y), floor(vec.z));
}

template<typename T>
Vector2D<T> floor(const Vector2D<T>& vec)
{
  return Vector2D<T>(floor(vec.x), floor(vec.y));
}

template<typename T>
Vector4D<T> trunc(const Vector4D<T>& vec)
{
  return Vector4D<T>(trunc(vec.x), trunc(vec.y), trunc(vec.z), trunc(vec.w));
}

template<typename T>
Vector3D<T> trunc(const Vector3D<T>& vec)
{
  return Vector3D<T>(trunc(vec.x), trunc(vec.y), trunc(vec.z));
}

template<typename T>
Vector2D<T> trunc(const Vector2D<T>& vec)
{
  return Vector2D<T>(trunc(vec.x), trunc(vec.y));
}

template<typename T>
Vector4D<T> round(const Vector4D<T>& vec)
{
  return Vector4D<T>(round(vec.x), round(vec.y), round(vec.z), round(vec.w));
}

template<typename T>
Vector3D<T> round(const Vector3D<T>& vec)
{
  return Vector3D<T>(round(vec.x), round(vec.y), round(vec.z));
}

template<typename T>
Vector2D<T> round(const Vector2D<T>& vec)
{
  return Vector2D<T>(round(vec.x), round(vec.y));
}

template<typename T>
Vector4D<T> round_even(const Vector4D<T>& vec)
{
  return Vector4D<T>(round_even(vec.x), round_even(vec.y), round_even(vec.z), round_even(vec.w));
}

template<typename T>
Vector3D<T> round_even(const Vector3D<T>& vec)
{
  return Vector3D<T>(round_even(vec.x), round_even(vec.y), round_even(vec.z));
}

template<typename T>
Vector2D<T> round_even(const Vector2D<T>& vec)
{
  return Vector2D<T>(round_even(vec.x), round_even(vec.y));
}

template<typename T>
Vector4D<T> ceil(const Vector4D<T>& vec)
{
  return Vector4D<T>(ceil(vec.x), ceil(vec.y), ceil(vec.z), ceil(vec.w));
}

template<typename T>
Vector3D<T> ceil(const Vector3D<T>& vec)
{
  return Vector3D<T>(ceil(vec.x), ceil(vec.y), ceil(vec.z));
}

template<typename T>
Vector2D<T> ceil(const Vector2D<T>& vec)
{
  return Vector2D<T>(ceil(vec.x), ceil(vec.y));
}

template<typename T>
Vector4D<T> fract(const Vector4D<T>& vec)
{
  return Vector4D<T>(fract(vec.x), fract(vec.y), fract(vec.z), fract(vec.w));
}

template<typename T>
Vector3D<T> fract(const Vector3D<T>& vec)
{
  return Vector3D<T>(fract(vec.x), fract(vec.y), fract(vec.z));
}

template<typename T>
Vector2D<T> fract(const Vector2D<T>& vec)
{
  return Vector2D<T>(fract(vec.x), fract(vec.y));
}

template<typename T>
Vector4D<T> mod(const Vector4D<T>& vec1, const Vector4D<T>& vec2)
{
  return Vector4D<T>(mod(vec1.x, vec2.x), mod(vec1.y, vec2.y), mod(vec1.z, vec2.z), mod(vec1.w, vec2.w));
}

template<typename T>
Vector3D<T> mod(const Vector3D<T>& vec1, const Vector3D<T>& vec2)
{
  return Vector3D<T>(mod(vec1.x, vec2.x),mod(vec1.y, vec2.y),mod(vec1.z, vec2.z));
}

template<typename T>
Vector2D<T> mod(const Vector2D<T>& vec1, const Vector2D<T>& vec2)
{
  return Vector2D<T>(mod(vec1.x, vec2.x),mod(vec1.y, vec2.y));
}

template<typename T>
Vector4D<T> mod(const Vector4D<T>& vec, const T& x)
{
  return Vector4D<T>(mod(vec.x, x), mod(vec.y, x), mod(vec.z, x), mod(vec.w, x));
}

template<typename T>
Vector3D<T> mod(const Vector3D<T>& vec, const T& x)
{
  return Vector3D<T>(mod(vec.x, x),mod(vec.y, x),mod(vec.z, x));
}

template<typename T>
Vector2D<T> mod(const Vector2D<T>& vec, const T& x)
{
  return Vector2D<T>(mod(vec.x, x),mod(vec.y, x));
}


} // end namespace
