cmake_minimum_required(VERSION 3.16)
project(hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Build options
option(CHERRY_STATIC "Link Cherry statically" ON) # Advanced usage only: keep this ON to link Cherry statically
option(CHERRY_DEBUG "Enable Cherry debug tools" OFF)
option(CHERRY_PACKAGE "Enable packaging features with pyinstaller" OFF)

# Cherry Options & Addons
option(CHERRY_ENABLE_NET "Enable net features" OFF)
option(CHERRY_ENABLE_CEF "Enable chrome embedded framwork (CEF)" OFF)
option(CHERRY_ENABLE_AUDIO "Enable audio features" OFF)
option(CHERRY_ENABLE_LINUXDRM "Enable Linux Direct Rendering Manager" OFF)

# Cherry Optimizations
option(CHERRY_DISABLE_NODES "Disable nodal systems" OFF)
option(CHERRY_DISABLE_WORKSPACESAVES "Disable workspace saves" OFF)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/cherry cherry_build)
add_executable(hello src/main.cpp)
target_link_libraries(hello PRIVATE cherry)
