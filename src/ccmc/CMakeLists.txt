# core kameleon library (kameleon-plus/src/ccmc)
if (NOT CCMC_ROOT_DIR)
    set(CCMC_ROOT_DIR ${PROJECT_SOURCE_DIR})
endif ()

file(GLOB CCMC_SOURCE
    ${CCMC_ROOT_DIR}/*.cpp ${CCMC_ROOT_DIR}/*.c
)
file(GLOB CCMC_HEADER
    ${CCMC_ROOT_DIR}/*.h
)

source_group(Ccmc FILES ${CCMC_SOURCE})  
source_group(Ccmc FILES ${CCMC_HEADER})  

set(ALL_SOURCE ${CCMC_SOURCE})
set(ALL_HEADER ${CCMC_HEADER})

add_library(ccmc ${ALL_SOURCE} ${ALL_HEADER})
if (WIN32)
    target_compile_options(ccmc PRIVATE /MP)
endif ()

# Boost
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    message(STATUS "ccmc/ - Include boost: " ${Boost_INCLUDE_DIRS})    
    message(STATUS "ccmc/ - Link boost: " ${Boost_LIBRARIES})                                                                                          
endif()


# CDF
include_directories(${CDF_INCLUDE_DIRS})
message(STATUS "ccmc/ - Include CDF: " ${CDF_INCLUDE_DIRS})
message(STATUS "ccmc/ - link CDF: " ${CDF_LIBRARIES})

# point to kameleon-plus-Config.h
include_directories(${PROJECT_BINARY_DIR})

# hdf5
if(KAMELEON_USE_HDF5)
    add_definitions(-DHAVE_HDF5)
	message(STATUS "ccmc/ - Include HDF5: " ${HDF5_INCLUDE_DIR}) 
	message(STATUS "ccmc/ - Link HDF5_LIBRARIES: " ${HDF5_LIBRARIES}) 
    include_directories(${HDF5_INCLUDE_DIR})
endif(KAMELEON_USE_HDF5)

# Wrappers
set(WRAPPERS_ROOT_DIR "${CCMC_ROOT_DIR}/wrappers")
if(NOT KAMELEON_LIBRARY_ONLY)
    add_subdirectory(${WRAPPERS_ROOT_DIR}/python)
    #add_subdirectory(${WRAPPERS_ROOT_DIR}/java)
endif(NOT KAMELEON_LIBRARY_ONLY)

# link all libraries
target_link_libraries(ccmc ${CCMC_DEPENDENT_LIBS})