add_executable(demo1)
target_sources(demo1 PRIVATE demo1.cpp)
target_link_libraries(demo1 PRIVATE math_obj)