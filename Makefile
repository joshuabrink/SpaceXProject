
CXX=g++
CFLAGS=-I. -Wall
TARGET=testSimulation
OBJS=*.cpp 

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c -g $< -o $@
    
clean:
	rm -f $(TARGET) $(OBJS)