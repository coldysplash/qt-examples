project(Counter)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON) 
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME} main.cpp Counter.hpp Counter.cpp)

target_link_libraries(
    ${PROJECT_NAME}
        Qt5::Widgets
)
