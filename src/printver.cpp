#include <print>

#include "PrintVer/config.hpp"

namespace pv {

void print_version() {
  std::println("Version: {}.{}", PRINTVER_VERSION_MAJOR,
      PRINTVER_VERSION_MINOR);
}

} // namespace pv
