cmake_minimum_required(VERSION 3.30)

project(
  PrintVer
  LANGUAGES CXX
  VERSION 1.2.3
)

add_library(printver)
target_compile_features(printver PRIVATE cxx_std_23)

add_subdirectory(src)
add_subdirectory(include)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/PrintVer-config-version.cmake
  COMPATIBILITY AnyNewerVersion
)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/PrintVer-config.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/PrintVer-config-version.cmake
  DESTINATION ${CMAKE_INSTALL_DATADIR}/PrintVer
)

install(
  TARGETS printver
  EXPORT PrintVer-targets
  FILE_SET config_headers 
  FILE_SET interface_headers 
)

install(
  EXPORT PrintVer-targets
  NAMESPACE pv::
  DESTINATION ${CMAKE_INSTALL_DATADIR}/PrintVer
)
