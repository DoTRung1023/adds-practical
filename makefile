main: main.cpp Computer.cpp Human.cpp Monkey.cpp Move.cpp Ninja.cpp Paper.cpp Pirate.cpp Player.cpp Referee.cpp Robot.cpp Rock.cpp Scissors.cpp Zombie.cpp
		@g++ -std=c++11 main.cpp Computer.cpp Human.cpp Monkey.cpp Move.cpp Ninja.cpp Paper.cpp Pirate.cpp Player.cpp Referee.cpp Robot.cpp Rock.cpp Scissors.cpp Zombie.cpp -o main
		@./main

clear: 
		@rm -f main