cmake_minimum_required (VERSION 3.0)
project (test)
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "header/*.h")
set (INCLUDE_FILES "")
foreach (_headerFile ${HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND INCLUDE_FILES ${_dir})
endforeach()
list(REMOVE_DUPLICATES INCLUDE_FILES)

add_executable(test_app main.cpp ${SOURCES}) 
target_include_directories(test_app PRIVATE ${INCLUDE_DIRS})


