# `util_a`

A small library mimicking a utility library.

If the above does not ring any bells, check out [CMake PAUL's organization page](https://github.com/cmake-paul) first.

## Usage

Include this repository via

```cmake
include(FetchContent)

FetchContent_Declare(
    UtilA
    GIT_REPOSITORY https://github.com/cmake-paul/util_a.git
    GIT_TAG main
)

FetchContent_MakeAvailable(UtilA)
```

Then link against the target `UtilA`.
