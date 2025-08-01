cmake_minimum_required(VERSION 3.10)
project(ReactionGame)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ensure compiler uses full include and link paths
set(CMAKE_PREFIX_PATH "/opt/homebrew")

# Find SFML
find_package(SFML 2.5 REQUIRED COMPONENTS graphics window system)

# Build executable
add_executable(ReactionGame main.cpp)

# Link SFML libraries
target_link_libraries(ReactionGame sfml-graphics sfml-window sfml-system)

# Include SFML headers explicitly (optional, but robust)
target_include_directories(ReactionGame PRIVATE /opt/homebrew/include)

# Optional: Set custom output name
set_target_properties(ReactionGame PROPERTIES OUTPUT_NAME "game")