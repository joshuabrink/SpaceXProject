
CXX=g++
CFLAGS=-I. -Wall
TARGET=Main
OBJS=Main.cpp Satellite.cpp SatelliteIterator.cpp StarlinkOrbitingSatellite.cpp StarlinkCommunication.cpp ConcreteSatelliteIterator.cpp

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
    
clean:
	rm -f $(TARGET) $(OBJS)