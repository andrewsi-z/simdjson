#ifndef SIMDJSON_S390X_INTRINSICS_H
#define SIMDJSON_S390X_INTRINSICS_H

#include "simdjson.h"

// This should be the correct header whether
// you use visual studio or other compilers.
#include <vecintrin.h>

// These may be defined by vecintrin.h, and are by altivec.h in GCC toolchain, if it is safe to undef them there, maybe here too.
// TODO: @ams ok check on above statement
#ifdef bool
#undef bool
#endif

#ifdef vector
#undef vector
#endif

#endif //  SIMDJSON_S390X_INTRINSICS_H
