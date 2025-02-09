cmake_minimum_required(VERSION 3.16)

project(notifikaattori LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(notifikaattori main.cpp
    seuraaja.h seuraaja.cpp
    notifikaattori.h notifikaattori.cpp)

include(GNUInstallDirs)
install(TARGETS notifikaattori
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
