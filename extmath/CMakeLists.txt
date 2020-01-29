add_library(ext_math_obj OBJECT)
target_sources(ext_math_obj PRIVATE src/extmath.cpp)
target_include_directories(ext_math_obj PUBLIC ./include)
target_link_libraries(ext_math_obj PRIVATE math_obj)

add_library(ext_math STATIC)
target_link_libraries(ext_math  
PUBLIC ext_math_obj 
PRIVATE math_obj)