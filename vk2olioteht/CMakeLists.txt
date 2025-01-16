cmake_minimum_required(VERSION 3.16)

project(vk2olioteht LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vk2olioteht main.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS vk2olioteht
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
