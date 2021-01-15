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

find_file(BBBLUE_HEADER roboticscape.h)
# message(STATUS, ${BBBLUE_HEADER})

#============================================================================
# List the subdirectories to build...
#============================================================================
ADD_SUBDIRECTORY(MOOS-pGPSd)
ADD_SUBDIRECTORY(MOOS-pSBUS)
ADD_SUBDIRECTORY(MOOS-pMixAmp)
ADD_SUBDIRECTORY(MOOS-pMux)
#ADD_SUBDIRECTORY(MOOS-pWingSailor)
ADD_SUBDIRECTORY(MOOS-pGeodesy)
ADD_SUBDIRECTORY(MOOS-uReflector)
ADD_SUBDIRECTORY(MOOS-pStartLogic)
ADD_SUBDIRECTORY(MOOS-pSimSail)
ADD_SUBDIRECTORY(waypoint_tool)
if(EXISTS ${BBBLUE_HEADER})
	ADD_SUBDIRECTORY(MOOS-pBBBLue)
	ADD_SUBDIRECTORY(MOOS-pNavEKF)
endif()

##############################################################################
#                           END of CMakeLists.txt
##############################################################################
