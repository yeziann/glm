#define vec(L, T, Q) glm_vec(L, T, Q)

#define length_t glm_length_t
#define type_t   glm_type_t

#define negate GLM_CALL_FUNC(negate, GLM_VEC_NAME(L, T, Q))
#define add    GLM_CALL_FUNC(add   , GLM_VEC_NAME(L, T, Q))
#define sub    GLM_CALL_FUNC(sub   , GLM_VEC_NAME(L, T, Q))
#define mul    GLM_CALL_FUNC(mul   , GLM_VEC_NAME(L, T, Q))
#define div    GLM_CALL_FUNC(div   , GLM_VEC_NAME(L, T, Q))
#define adds   GLM_CALL_FUNC(adds  , GLM_VEC_NAME(L, T, Q))
#define subs   GLM_CALL_FUNC(subs  , GLM_VEC_NAME(L, T, Q))
#define muls   GLM_CALL_FUNC(muls  , GLM_VEC_NAME(L, T, Q))
#define divs   GLM_CALL_FUNC(divs  , GLM_VEC_NAME(L, T, Q))
#define addeqs GLM_CALL_FUNC(addeqs, GLM_VEC_NAME(L, T, Q))
#define subeqs GLM_CALL_FUNC(subeqs, GLM_VEC_NAME(L, T, Q))
#define muleqs GLM_CALL_FUNC(muleqs, GLM_VEC_NAME(L, T, Q))
#define diveqs GLM_CALL_FUNC(diveqs, GLM_VEC_NAME(L, T, Q))
#define addeqv GLM_CALL_FUNC(addeqv, GLM_VEC_NAME(L, T, Q))
#define subeqv GLM_CALL_FUNC(subeqv, GLM_VEC_NAME(L, T, Q))
#define muleqv GLM_CALL_FUNC(muleqv, GLM_VEC_NAME(L, T, Q))
#define diveqv GLM_CALL_FUNC(diveqv, GLM_VEC_NAME(L, T, Q))
#define addeq  GLM_CALL_FUNC(addeq , GLM_VEC_NAME(L, T, Q))
#define subeq  GLM_CALL_FUNC(subeq , GLM_VEC_NAME(L, T, Q))
#define muleq  GLM_CALL_FUNC(muleq , GLM_VEC_NAME(L, T, Q))
#define diveq  GLM_CALL_FUNC(diveq , GLM_VEC_NAME(L, T, Q))

/* Boolean Functions */
#define or   GLM_CALL_FUNC(or , GLM_VEC_NAME(L, bool, Q))
#define and  GLM_CALL_FUNC(and, GLM_VEC_NAME(L, bool, Q))
#define xor  GLM_CALL_FUNC(xor, GLM_VEC_NAME(L, bool, Q))
#define all  GLM_CALL_FUNC(all, GLM_VEC_NAME(L, bool, Q))
#define any  GLM_CALL_FUNC(any, GLM_VEC_NAME(L, bool, Q))
#define not  GLM_CALL_FUNC(not, GLM_VEC_NAME(L, bool, Q))

/* Common Functions */
#define abs               GLM_CALL_FUNC(abs              , GLM_VEC_NAME(L, T, Q))
#define sign              GLM_CALL_FUNC(sign             , GLM_VEC_NAME(L, T, Q))
#define floor             GLM_CALL_FUNC(floor            , GLM_VEC_NAME(L, T, Q))
#define trunc             GLM_CALL_FUNC(trunc            , GLM_VEC_NAME(L, T, Q))
#define round             GLM_CALL_FUNC(round            , GLM_VEC_NAME(L, T, Q))
#define roundEven         GLM_CALL_FUNC(roundEven        , GLM_VEC_NAME(L, T, Q))
#define ceil              GLM_CALL_FUNC(ceil             , GLM_VEC_NAME(L, T, Q))
#define fract             GLM_CALL_FUNC(fract            , GLM_VEC_NAME(L, T, Q))
#define mod               GLM_CALL_FUNC(mod              , GLM_VEC_NAME(L, T, Q))
#define mods              GLM_CALL_FUNC(mods             , GLM_VEC_NAME(L, T, Q))
#define modf              GLM_CALL_FUNC(modf             , GLM_VEC_NAME(L, T, Q))
#define min               GLM_CALL_FUNC(min              , GLM_VEC_NAME(L, T, Q))
#define mins              GLM_CALL_FUNC(mins             , GLM_VEC_NAME(L, T, Q))
#define max               GLM_CALL_FUNC(max              , GLM_VEC_NAME(L, T, Q))
#define maxs              GLM_CALL_FUNC(maxs             , GLM_VEC_NAME(L, T, Q))
#define clamp             GLM_CALL_FUNC(clamp            , GLM_VEC_NAME(L, T, Q))
#define clamps            GLM_CALL_FUNC(clamps           , GLM_VEC_NAME(L, T, Q))
#define mix               GLM_CALL_FUNC(mix              , GLM_VEC_NAME(L, T, Q))
#define mixs              GLM_CALL_FUNC(mixs             , GLM_VEC_NAME(L, T, Q))
#define step              GLM_CALL_FUNC(step             , GLM_VEC_NAME(L, T, Q))
#define steps             GLM_CALL_FUNC(steps            , GLM_VEC_NAME(L, T, Q))
#define smoothstep        GLM_CALL_FUNC(smoothstep       , GLM_VEC_NAME(L, T, Q))
#define smoothsteps       GLM_CALL_FUNC(smoothsteps      , GLM_VEC_NAME(L, T, Q))
#define isnan             GLM_CALL_FUNC(isnan            , GLM_VEC_NAME(L, T, Q))
#define isinf             GLM_CALL_FUNC(isinf            , GLM_VEC_NAME(L, T, Q))
#define fma               GLM_CALL_FUNC(fma              , GLM_VEC_NAME(L, T, Q))

/* Exponential Functions */
#define pow         GLM_CALL_FUNC(pow        , GLM_VEC_NAME(L, T, Q))
#define exp         GLM_CALL_FUNC(exp        , GLM_VEC_NAME(L, T, Q))
#define log         GLM_CALL_FUNC(log        , GLM_VEC_NAME(L, T, Q))
#define exp2        GLM_CALL_FUNC(exp2       , GLM_VEC_NAME(L, T, Q))
#define log2        GLM_CALL_FUNC(log2       , GLM_VEC_NAME(L, T, Q))
#define sqrt        GLM_CALL_FUNC(sqrt       , GLM_VEC_NAME(L, T, Q))
#define inversesqrt GLM_CALL_FUNC(inversesqrt, GLM_VEC_NAME(L, T, Q))

/* Geometry Functions */
#define length      GLM_CALL_FUNC(length     , GLM_VEC_NAME(L, T, Q))
#define distance    GLM_CALL_FUNC(distance   , GLM_VEC_NAME(L, T, Q))
#define dot         GLM_CALL_FUNC(dot        , GLM_VEC_NAME(L, T, Q))
#define normalize   GLM_CALL_FUNC(normalize  , GLM_VEC_NAME(L, T, Q))
#define faceforward GLM_CALL_FUNC(faceforward, GLM_VEC_NAME(L, T, Q))
#define reflect     GLM_CALL_FUNC(reflect    , GLM_VEC_NAME(L, T, Q))
#define refract     GLM_CALL_FUNC(refract    , GLM_VEC_NAME(L, T, Q))

/* Vector Relational Functions */
#define lessThan         GLM_CALL_FUNC(lessThan        , GLM_VEC_NAME(L, T, Q))
#define lessThanEqual    GLM_CALL_FUNC(lessThanEqual   , GLM_VEC_NAME(L, T, Q))
#define greaterThan      GLM_CALL_FUNC(greaterThan     , GLM_VEC_NAME(L, T, Q))
#define greaterThanEqual GLM_CALL_FUNC(greaterThanEqual, GLM_VEC_NAME(L, T, Q))
#define equal            GLM_CALL_FUNC(equal           , GLM_VEC_NAME(L, T, Q))
#define notEqual         GLM_CALL_FUNC(notEqual        , GLM_VEC_NAME(L, T, Q))

/* Angle and Trigonometry Functions */
#define sin   GLM_CALL_FUNC(sin  , GLM_VEC_NAME(L, T, Q))
#define cos   GLM_CALL_FUNC(cos  , GLM_VEC_NAME(L, T, Q))
#define tan   GLM_CALL_FUNC(tan  , GLM_VEC_NAME(L, T, Q))
#define asin  GLM_CALL_FUNC(asin , GLM_VEC_NAME(L, T, Q))
#define acos  GLM_CALL_FUNC(acos , GLM_VEC_NAME(L, T, Q))
#define atan  GLM_CALL_FUNC(atan , GLM_VEC_NAME(L, T, Q))
#define atan2 GLM_CALL_FUNC(atan2, GLM_VEC_NAME(L, T, Q))
#define sinh  GLM_CALL_FUNC(sinh , GLM_VEC_NAME(L, T, Q))
#define cosh  GLM_CALL_FUNC(cosh , GLM_VEC_NAME(L, T, Q))
#define tanh  GLM_CALL_FUNC(tanh , GLM_VEC_NAME(L, T, Q))
#define asinh GLM_CALL_FUNC(asinh, GLM_VEC_NAME(L, T, Q))
#define acosh GLM_CALL_FUNC(acosh, GLM_VEC_NAME(L, T, Q))
#define atanh GLM_CALL_FUNC(atanh, GLM_VEC_NAME(L, T, Q))
/*
#define bvec1 glm_bvec1
#define bvec2 glm_bvec2
#define bvec3 glm_bvec3
#define bvec4 glm_bvec4
#define vec1  glm_vec1
#define vec2  glm_vec2
#define vec3  glm_vec3
#define vec4  glm_vec4
#define dvec1 glm_dvec1
#define dvec2 glm_dvec2
#define dvec3 glm_dvec3
#define dvec4 glm_dvec4
#define ivec1 glm_ivec1
#define ivec2 glm_ivec2
#define ivec3 glm_ivec3
#define ivec4 glm_ivec4
#define uvec1 glm_uvec1
#define uvec2 glm_uvec2
#define uvec3 glm_uvec3
#define uvec4 glm_uvec4*/