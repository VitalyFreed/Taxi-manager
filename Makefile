TARGET = taxi_manager
SRC = main.cpp taxi.cpp taxi_manager.cpp trip.cpp

CXX = g++
CXXFLAGS = -Wall -std=c++11 -m32

$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
