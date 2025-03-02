# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\oliovk8_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\oliovk8_autogen.dir\\ParseCache.txt"
  "oliovk8_autogen"
  )
endif()
