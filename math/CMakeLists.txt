add_library(math_obj OBJECT)
target_sources(math_obj PRIVATE src/math.cpp)
target_include_directories(math_obj INTERFACE include/)
