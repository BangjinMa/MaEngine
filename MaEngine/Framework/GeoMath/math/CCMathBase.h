#ifndef __CCMATHBASE_H__
#define __CCMATHBASE_H__

#include <memory>
namespace MaEngine{
	#define MATH_DEG_TO_RAD(x)          ((x) * 0.0174532925f)
	#define MATH_RAD_TO_DEG(x)          ((x)* 57.29577951f)
	#define MATH_FLOAT_SMALL            1.0e-37f
	#define MATH_TOLERANCE              2e-37f
	#define MATH_PIOVER2                1.57079632679489661923f
	#define MATH_EPSILON                0.000001f
	#define FLT_EPSILON					1.192092896e-07F
	#define MATRIX_SIZE					( sizeof(float) * 16)
}
#endif // __CCMATHBASE_H__
