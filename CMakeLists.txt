cmake_minimum_required(VERSION 3.10)

project(phitest)
set(CMAKE_CXX_STANDARD 11)

# using C++11 
#set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++11 -pthread")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    /usr/local/include/
    /usr/include/ )

aux_source_directory(./src/ DIR_SRCS)

add_executable(phitest ${DIR_SRCS})
target_link_libraries(phitest 
/usr/lib/
# add phidge lib
/usr/local/lib/libphidget22.so)
