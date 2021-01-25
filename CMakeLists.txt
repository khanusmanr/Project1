cmake_minimum_required(VERSION 3.19.3)

set (This ReportsTests)

set(Sources 
    ReportsTest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Reports
)
add_test(
    NAME ${This}
    COMMAND ${This}
)
