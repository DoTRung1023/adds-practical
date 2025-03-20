test1: test1.cpp Truckloads.cpp
	@g++ -std=c++11 test1.cpp Truckloads.cpp -o test1
	@./test1

test2: test2.cpp Reverser.cpp
	@g++ -std=c++11 test2.cpp Reverser.cpp -o test2
	@./test2

test3: test3.cpp EfficientTruckloads.cpp
	@g++ -std=c++11 test3.cpp EfficientTruckloads.cpp -o test3
	@./test3

clear:
	@rm -f test1 test2 test3