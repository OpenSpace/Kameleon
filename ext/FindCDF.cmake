set(CDF_INC_HINTS "/opt/local/include" "/usr/include" "/usr/local/include")
set(CDF_LIB_HINTS "/opt/local/lib" "/usr/lib" "/usr/local/lib")

if(NOT CDF_PATH)
	set(CDF_PATH "${KAMELEON_EXT_DIR}/cdf")
    set(CDF_SRC_PATH "${CDF_PATH}/cdf36_4-dist/src")
    set(CDF_INC_HINTS ${CDF_INC_HINTS} "${CDF_SRC_PATH}/include")
    set(CDF_LIB_HINTS ${CDF_LIB_HINTS} "${CDF_SRC_PATH}/lib")
endif()

find_path(CDF_INCLUDES cdf.h
            HINTS ${CDF_INC_HINTS})

if(CDF_USE_STATIC_LIBS)
    find_library(CDF_LIB NAMES ${CMAKE_STATIC_LIBRARY_PREFIX}cdf${CMAKE_STATIC_LIBRARY_SUFFIX}
                 HINTS "${CDF_LIB_HINTS}")
else()
    find_library(CDF_LIB NAMES ${CMAKE_SHARED_LIBRARY_PREFIX}cdf${CMAKE_SHARED_LIBRARY_SUFFIX}
                 HINTS "${CDF_LIB_HINTS}")
endif(CDF_USE_STATIC_LIBS)

set(CDF_LIBRARIES "${CDF_LIB}")