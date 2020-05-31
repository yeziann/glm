#ifndef GLM_DETAIL_TYPE_VEC4_H
#define GLM_DETAIL_TYPE_VEC4_H

#include "variadic_param.h"

#define GLM_VEC4_RSEQ() 4,3,2,1,0

#define GLM_VEC4_CONSTRUCTOR_PARAMS_0(A1, A2, A3, A4)  
#define GLM_VEC4_CONSTRUCTOR_PARAMS_1(A1, A2, A3, A4) GLM_VARIADIC_PARAM(A1)
#define GLM_VEC4_CONSTRUCTOR_PARAMS_2(A1, A2, A3, A4) GLM_VARIADIC_PARAM(A1), GLM_VARIADIC_PARAM(A2)
#define GLM_VEC4_CONSTRUCTOR_PARAMS_3(A1, A2, A3, A4) GLM_VARIADIC_PARAM(A1), GLM_VARIADIC_PARAM(A2), GLM_VARIADIC_PARAM(A3)
#define GLM_VEC4_CONSTRUCTOR_PARAMS_4(A1, A2, A3, A4) GLM_VARIADIC_PARAM(A1), GLM_VARIADIC_PARAM(A2), GLM_VARIADIC_PARAM(A3), GLM_VARIADIC_PARAM(A4)
#define GLM_VEC4_CONSTRUCTOR_PARAMS_(A1, A2, A3, A4, N, ...) N, GLM_VEC4_CONSTRUCTOR_PARAMS_ ## N (A1, A2, A3, A4)
#define GLM_VEC4_CONSTRUCTOR_PARAMS(...) GLM_VEC4_CONSTRUCTOR_PARAMS_(__VA_ARGS__)

#define GLM_VEC4_CONSTRUCTOR(T, Q, ...) GLM_VECTOR_CONSTRUCTOR_NAME(4, T, Q)(GLM_VEC4_CONSTRUCTOR_PARAMS(__VA_ARGS__, GLM_VEC4_RSEQ()))

#define glm_tvec4(T, Q, ...) GLM_VEC4_CONSTRUCTOR(T, Q, __VA_ARGS__)

#endif /* GLM_DETAIL_TYPE_VEC4_H */