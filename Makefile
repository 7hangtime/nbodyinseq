CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2

TARGET = nbody

$(TARGET): nobdy.cpp
	$(CXX) $(CXXFLAGS) nobdy.cpp -o $(TARGET)

