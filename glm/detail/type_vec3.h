#ifndef GLM_DETAIL_TYPE_VEC3_H
#define GLM_DETAIL_TYPE_VEC3_H

#include "type_vec.h"

#define GLM_VEC3_CONSTRUCTOR_PARAMS_0(_A1, _A2, _A3)  
#define GLM_VEC3_CONSTRUCTOR_PARAMS_1(_A1, _A2, _A3) GLM_VARIADIC_PARAM(_A1) 
#define GLM_VEC3_CONSTRUCTOR_PARAMS_2(_A1, _A2, _A3) GLM_VARIADIC_PARAM(_A1), GLM_VARIADIC_PARAM(_A2)
#define GLM_VEC3_CONSTRUCTOR_PARAMS_3(_A1, _A2, _A3) GLM_VARIADIC_PARAM(_A1), GLM_VARIADIC_PARAM(_A2), GLM_VARIADIC_PARAM(_A3)
#define GLM_VEC3_CONSTRUCTOR_PARAMS_(_A1, _A2, _A3, _N, ...) _N, GLM_VEC3_CONSTRUCTOR_PARAMS_ ## _N (_A1, _A2, _A3)
#define GLM_VEC3_CONSTRUCTOR_RSEQ() 3, 2, 1, 0
#define GLM_VEC3_CONSTRUCTOR_PARAMS(...) GLM_VEC3_CONSTRUCTOR_PARAMS_(__VA_ARGS__, 3, 2, 1, 0)

#define GLM_VEC3_CONSTRUCTOR(T, Q, ...) GLM_VEC_CONSTRUCTOR_ADDR(3, T, Q)( GLM_VEC3_CONSTRUCTOR_PARAMS(__VA_ARGS__) )

#define glm_tvec3(T, Q, ...) GLM_VEC3_CONSTRUCTOR(T, Q, __VA_ARGS__)

#endif /* GLM_DETAIL_TYPE_VEC3_H */