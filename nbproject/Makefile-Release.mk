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
CCC=gcc
CXX=gcc
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Gnuplot.o \
	${OBJECTDIR}/Growth.o \
	${OBJECTDIR}/GrowthCosA.o \
	${OBJECTDIR}/GrowthCosAB.o \
	${OBJECTDIR}/GrowthCosAInv.o \
	${OBJECTDIR}/GrowthCosARand.o \
	${OBJECTDIR}/GrowthCosB.o \
	${OBJECTDIR}/GrowthCosBRand.o \
	${OBJECTDIR}/RungeKutta.o \
	${OBJECTDIR}/Test.o \
	${OBJECTDIR}/Util.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rungekutta.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rungekutta.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rungekutta ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Gnuplot.o: Gnuplot.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gnuplot.o Gnuplot.cpp

${OBJECTDIR}/Growth.o: Growth.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Growth.o Growth.cpp

${OBJECTDIR}/GrowthCosA.o: GrowthCosA.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosA.o GrowthCosA.cpp

${OBJECTDIR}/GrowthCosAB.o: GrowthCosAB.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosAB.o GrowthCosAB.cpp

${OBJECTDIR}/GrowthCosAInv.o: GrowthCosAInv.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosAInv.o GrowthCosAInv.cpp

${OBJECTDIR}/GrowthCosARand.o: GrowthCosARand.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosARand.o GrowthCosARand.cpp

${OBJECTDIR}/GrowthCosB.o: GrowthCosB.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosB.o GrowthCosB.cpp

${OBJECTDIR}/GrowthCosBRand.o: GrowthCosBRand.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GrowthCosBRand.o GrowthCosBRand.cpp

${OBJECTDIR}/RungeKutta.o: RungeKutta.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RungeKutta.o RungeKutta.cpp

${OBJECTDIR}/Test.o: Test.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Test.o Test.cpp

${OBJECTDIR}/Util.o: Util.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Util.o Util.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/rungekutta.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
