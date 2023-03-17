target_sources(
    util_A
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/greet.h"
)

target_include_directories(
    util_A
    PRIVATE
    "${CMAKE_CURRENT_LIST_DIR}"
)
