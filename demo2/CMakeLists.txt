add_executable(demo2)
target_sources(demo2 PRIVATE demo2.cpp)
target_link_libraries(demo2 PRIVATE ext_math)