cmake_minimum_required(VERSION 3.5)

project(testSqlite)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)

add_library(sqlite SHARED sqlite3.c sqlite3.h sqlite3ext.h)

add_executable(testSqlite main.cpp datahandler.cpp datahandler.h user.h)

target_link_libraries (testSqlite sqlite)

install(TARGETS testSqlite
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
