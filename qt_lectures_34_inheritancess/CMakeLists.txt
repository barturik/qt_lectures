cmake_minimum_required(VERSION 3.14)

project(qt_lectures_34_inheritancess LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(qt_lectures_34_inheritancess
  main.cpp
  animal.h
  animal.cpp
  mammal.h
  mammal.cpp
  canine.h
  canine.cpp
  feline.h
  feline.cpp
  monster.h
  monster.cpp
)
target_link_libraries(qt_lectures_34_inheritancess Qt${QT_VERSION_MAJOR}::Core)
