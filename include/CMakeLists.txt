configure_file(
  config.hpp.in
  ${CMAKE_BINARY_DIR}/include/PrintVer/config.hpp
  @ONLY
)

target_sources(printver
  PUBLIC FILE_SET config_headers
  TYPE HEADERS
  BASE_DIRS ${CMAKE_BINARY_DIR}/include
  FILES ${CMAKE_BINARY_DIR}/include/PrintVer/config.hpp

  INTERFACE FILE_SET interface_headers
  TYPE HEADERS
  BASE_DIRS ${CMAKE_CURRENT_LIST_DIR}
  FILES PrintVer/printver.hpp
)
