#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/896ecef2/KMeans.o \
	${OBJECTDIR}/_ext/896ecef2/Point.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-framework OpenGL -framework GLUT
CXXFLAGS=-framework OpenGL -framework GLUT

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kmeans

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kmeans: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kmeans ${OBJECTFILES} ${LDLIBSOPTIONS} -framework OpenGL

${OBJECTDIR}/_ext/896ecef2/KMeans.o: ../KMeans/KMeans.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/896ecef2
	${RM} "$@.d"
	$(COMPILE.cc) -g -I\;../build/include -I/System/Library/Frameworks -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/896ecef2/KMeans.o ../KMeans/KMeans.cpp

${OBJECTDIR}/_ext/896ecef2/Point.o: ../KMeans/Point.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/896ecef2
	${RM} "$@.d"
	$(COMPILE.cc) -g -I\;../build/include -I/System/Library/Frameworks -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/896ecef2/Point.o ../KMeans/Point.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I\;../build/include -I/System/Library/Frameworks -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/kmeans

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
