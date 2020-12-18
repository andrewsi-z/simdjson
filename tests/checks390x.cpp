#include "simdjson.h"
#include <iostream>
#include <cstring>

int main(int argc, const char *argv[]) {
  std::cout << "simdjson v" << STRINGIFY(SIMDJSON_VERSION) << " is running the " << simdjson::active_implementation->name() << " implementation." << std::endl;
    const char *expected_implementation = nullptr;
  if (argc > 1) {
    expected_implementation = argv[1];
    std::cerr << "Called to check: " << expected_implementation << "." << std::endl;
  }
  for (auto imple : simdjson::available_implementations) {
    std::cerr << "polling available implementations " << imple->name() << "." << std::endl;
    if(imple->supported_by_runtime_system()) {
      std::cerr << "also supported by system: " << imple->name() << "." << std::endl;
    }
  }
  if (true) {
    std::cerr << "Implementation is " << simdjson::active_implementation->name() << "." << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}