include(FetchContent)

FetchContent_Declare(
    common
    GIT_REPOSITORY https://github.com/cmake-paul/common.git
    GIT_TAG main
)

FetchContent_MakeAvailable(common)

add_library(util_A)

target_link_libraries(
    util_A
    PRIVATE
    common_umbrella
)
