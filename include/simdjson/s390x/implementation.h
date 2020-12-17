#ifndef SIMDJSON_S390X_IMPLEMENTATION_H
#define SIMDJSON_S390X_IMPLEMENTATION_H

#include "simdjson.h"
#include "simdjson/internal/isadetection.h"

namespace simdjson {
namespace s390x {

namespace {
using namespace simdjson;
using namespace simdjson::dom;
} // namespace

// todo: @AMS
// https://www.ibm.com/developerworks/linux/linux390/toolchain.html
// Need to confirm below behavior re: altivec style instrinsic support on s390x
// via vecintrin.h
class implementation final : public simdjson::implementation {
public:
  simdjson_really_inline implementation()
      : simdjson::implementation("s390x", "S390X ZARCH",
                                 internal::instruction_set::ZARCH) {} //TODO: @ams
  simdjson_warn_unused error_code create_dom_parser_implementation(
      size_t capacity, size_t max_length,
      std::unique_ptr<internal::dom_parser_implementation> &dst)
      const noexcept final;
  simdjson_warn_unused error_code minify(const uint8_t *buf, size_t len,
                                         uint8_t *dst,
                                         size_t &dst_len) const noexcept final;
  simdjson_warn_unused bool validate_utf8(const char *buf,
                                          size_t len) const noexcept final;
};

} // namespace s390x
} // namespace simdjson

#endif // SIMDJSON_S390X_IMPLEMENTATION_H
