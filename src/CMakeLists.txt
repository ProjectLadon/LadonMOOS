##############################################################################
# FILE:        moos-ivp-extend/src/CMakeLists.txt
# DATE:        2010/09/07
# DESCRIPTION: CMakeLists.txt file for the moos-ivp-extend source directory
##############################################################################


#============================================================================
# Add the libraries in the current directory to the include path
#============================================================================
FILE(GLOB LOCAL_LIBRARY_DIRS ./lib_*)
INCLUDE_DIRECTORIES(${LOCAL_LIBRARY_DIRS})

#============================================================================
# Figure out whether we're on a Beaglebone BBBlue
#============================================================================

find_file(BBLUE_HEADER roboticscape.h)

#============================================================================
# List the subdirectories to build...
#============================================================================
ADD_SUBDIRECTORY(MOOS-pGPSd)
ADD_SUBDIRECTORY(MOOS-pSBUS)
ADD_SUBDIRECTORY(MOOS-pMixAmp)
ADD_SUBDIRECTORY(MOOS-pMux)d
ADD_SUBDIRECTORY(MOOS-paREST)
ADD_SUBDIRECTORY(MOOS-pAIOrest)
if(EXISTS ${BBBlue_HEADER})
    ADD_SUBDIRECTORY(MOOS-pBBBlue)
endif()

##############################################################################
#                           END of CMakeLists.txt
##############################################################################
