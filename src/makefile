VREP_DIR=../../../
VREP_PROGRAMMING_DIR=${VREP_DIR}/programming/


CFLAGS = -std=c++14 -I../include -I${VREP_PROGRAMMING_DIR}include -Wall -fPIC `rtm-config --cflags` 
#LDFLAGS = -lpthread -ldl `rtm-config --libs` --all-static
#LDFLAGS = -static -lpthread -ldl -L/usr/local/lib -export-dynamic -L/usr/local/lib -static  -lomniORB4 -lomnithread -lomniDynamic4 -lRTC -lcoil
#LDFLAGS = -static -lpthread -ldl -L/usr/local/lib -export-dynamic -L/usr/local/lib -static  /usr/local/lib/libomniORB4.a /usr/local/lib/libomnithread.a /usr/local/lib/libomniDynamic4.a /usr/local/lib/libcoil.a /usr/local/lib/libRTC.a 

OBJS = v_repExtRTC.o ${VREP_PROGRAMMING_DIR}common/simLib.o ${VREP_PROGRAMMING_DIR}common/scriptFunctionDataItem.o ${VREP_PROGRAMMING_DIR}common/scriptFunctionData.o VREPRTC.o SimulatorSVC_impl.o SimulatorStub.o RTCHelper.o RobotRTC.o Tasks.o RobotRTCContainer.o RangeRTC.o CameraRTC.o AccelerometerRTC.o GyroRTC.o DepthRTC.o ObjectRTC.o

OS = $(shell uname -s)
ECHO=@

ifeq ($(OS), Linux)
	CFLAGS += -D__linux
	OPTION = -shared
	LDFLAGS =  -lpthread -ldl `rtm-config --libs` 
	EXT = so
	TARGET = ../lib/libsimExtRTC.$(EXT) ../lib/rtc.conf
	BINDIR = ${VREP_DIR}
else
	CFLAGS += -D__APPLE__
	OPTION = -dynamiclib -current_version 1.0
	LDFLAGS = -static -lpthread -ldl -L/usr/local/lib -export-dynamic -L/usr/local/lib -static  /usr/local/lib/libomniORB4.a /usr/local/lib/libomnithread.a /usr/local/lib/libomniDynamic4.a /usr/local/lib/libcoil.a /usr/local/lib/libRTC.a 
	EXT = dylib
	TARGET = ../lib/libsimExtRTC.$(EXT)
	BINDIR = ${VREP_DIR}coppeliaSim.app/Contents/MacOS/
endif

all: simExtRTCLib

simExtRTCLib: $(OBJS)
		@mkdir -p ../lib
		@echo "Linking $(OBJS) to $(TARGET)"
		$(ECHO)$(CXX) $(CFLAGS) $(OBJS) $(OPTION) -o $(TARGET) $(LDFLAGS)

%.o: %.c
		@echo "Compiling $< to $@"
		$(ECHO)$(CXX) $(CFLAGS) -c $< -o $@

%.o: %.cpp
		@echo "Compiling $< to $@"
		$(ECHO)$(CXX) $(CFLAGS) -c $< -o $@

clean:
		@echo "Cleaning $(OBJS) $(TARGET)"
		$(ECHO)rm -rf $(OBJS) *~ ../*~ ../include/*~ $(TARGET)

install:
		@echo "Installing $(TARGET) to $(BINDIR)"
		$(ECHO)cp $(TARGET) $(BINDIR)


