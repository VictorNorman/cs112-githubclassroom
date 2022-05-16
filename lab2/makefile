all: clean test

appTests: tests.cpp functions.cpp
	g++ -fsanitize=address --std=c++17 tests.cpp functions.cpp -o appTests

test: appTests
	# executes all tests
	./appTests

clean:
	rm -f appTests
