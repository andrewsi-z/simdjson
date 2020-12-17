#ifndef SIMDJSON_S390X_H
#define SIMDJSON_S390X_H

#ifdef SIMDJSON_FALLBACK_H
#error "s390x.h must be included before fallback.h"
#endif

#include "simdjson/portability.h"

#include "simdjson/internal/isadetection.h"
#include "simdjson/internal/jsoncharutils_tables.h"
#include "simdjson/internal/numberparsing_tables.h"
#include "simdjson/internal/simdprune_tables.h"

#if SIMDJSON_IMPLEMENTATION_S390X

namespace simdjson {
/**
 * Implementation for ALTIVEC like vector header (s390x).
 */
namespace s390x {
} // namespace s390x
} // namespace simdjson

#include "simdjson/s390x/implementation.h"

#include "simdjson/s390x/begin.h"

// Declarations
#include "simdjson/generic/dom_parser_implementation.h"
#include "simdjson/s390x/intrinsics.h"
#include "simdjson/s390x/bitmanipulation.h"
#include "simdjson/s390x/bitmask.h"
#include "simdjson/s390x/simd.h"
#include "simdjson/generic/jsoncharutils.h"
#include "simdjson/generic/atomparsing.h"
#include "simdjson/s390x/stringparsing.h"
#include "simdjson/s390x/numberparsing.h"
#include "simdjson/generic/implementation_simdjson_result_base.h"
#include "simdjson/generic/ondemand.h"

// Inline definitions
#include "simdjson/generic/implementation_simdjson_result_base-inl.h"
#include "simdjson/generic/ondemand-inl.h"
#include "simdjson/s390x/end.h"

#endif // SIMDJSON_IMPLEMENTATION_S390X

#endif // SIMDJSON_S390X_H
