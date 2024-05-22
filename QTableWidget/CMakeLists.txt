project(TableExample)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(TableExample main.cpp)

target_link_libraries(
    TableExample

    Qt5::Widgets
)
