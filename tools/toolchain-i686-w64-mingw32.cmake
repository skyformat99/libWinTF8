# CMake toolchain configuration for Linux -> MinGW32 (Win32) cross compilation
# This can be enabled by ./configure -DCMAKE_TOOLCHAIN_FILE=tools/toolchain-i686-w64-mingw32.cmake
# The i686-w64-mingw32 toolchain is available at http://mingw-w64.sourceforge.net/

SET(CMAKE_SYSTEM_NAME Windows)
SET(CMAKE_SYSTEM_PROCESSOR i686-w64-mingw32)
SET(CMAKE_C_COMPILER ${CMAKE_SYSTEM_PROCESSOR}-gcc)
SET(CMAKE_CXX_COMPILER ${CMAKE_SYSTEM_PROCESSOR}-g++)
SET(CMAKE_RC_COMPILER ${CMAKE_SYSTEM_PROCESSOR}-windres)
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
