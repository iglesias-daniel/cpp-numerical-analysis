CC = gcc
CXX = g++
CFLAGS = -Iinclude -Wall -std=c11 -DLOGGING_ENABLED
CXXFLAGS = -Iinclude -Wall -std=c++17 -DLOGGING_ENABLED

all: test_c test_cpp

test_c: src/error.c test/test_error.c
	$(CC) $(CFLAGS) -o bin/test_error_c src/error.c test/test_error.c

test_cpp: src/error.c test/test_error_cpp.cpp
	$(CXX) $(CXXFLAGS) -o bin/test_error_cpp src/error.c test/test_error_cpp.cpp

run_c:
	./bin/test_error_c

run_cpp:
	./bin/test_error_cpp

clean:
	rm -f bin/test_error_c bin/test_error_cpp