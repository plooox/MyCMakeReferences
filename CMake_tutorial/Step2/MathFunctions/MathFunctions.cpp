#include "MathFunctions.hpp"

// 11: include cmath
#include <cmath>
// 10: Wrap the mysqrt include in a precompiled ifdef based on USE_MYMATH
#ifdef USE_MYMATH
#include "mysqrt.hpp"
#endif

namespace mathfunctions {
double sqrt(double x)
{
  // 9: If USE_MYMATH is defined, use detail::mysqrt.
  // Otherwise, use std::sqrt.
#ifdef USE_MYMATH
  return detail::mysqrt(x);
#else
  return std::sqrt(x);
#endif
}
}
