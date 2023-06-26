cmake_minimum_required (VERSION 3.8)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})

project (MVC_pattern VERSION ${PROJECT_VESRION})
find_package(GTest)
configure_file(version.h.in version.h)

add_executable (
    MVC_pattern
    MVC_pattern.cpp
)
add_executable(MVC_pattern_gtest test/MVC_pattern_gtest.cpp)

target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_BINARY_DIR}
)
target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Model
)
target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Model/Geometric_shapes
)
target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/View
)
target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Controller
)
target_include_directories(
    MVC_pattern PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Observ
)

target_include_directories(
    MVC_pattern_gtest PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/test
)
target_include_directories(
    MVC_pattern_gtest PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
    MVC_pattern_gtest PRIVATE
    ${GTEST_INCLUDE_DIRS}
)

target_link_libraries(
    MVC_pattern_gtest PRIVATE
    ${GTEST_BOTH_LIBRARIES}
)
set_target_properties(MVC_pattern PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(MVC_pattern PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )

elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(MVC_pattern PRIVATE
        /EHsc
        /W4
        /WX
    )

endif()

install(TARGETS MVC_pattern RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()

add_test(MVC_pattern_gtest MVC_pattern_gtest)
