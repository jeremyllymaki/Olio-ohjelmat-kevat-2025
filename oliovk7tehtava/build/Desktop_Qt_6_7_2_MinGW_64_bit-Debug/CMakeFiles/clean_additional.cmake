# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\oliovk7tehtava_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\oliovk7tehtava_autogen.dir\\ParseCache.txt"
  "oliovk7tehtava_autogen"
  )
endif()
