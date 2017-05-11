#Tell make to make one .out file for each .cpp file found in the current directory
all: $(patsubst src/%.cpp, bin/%.out, $(wildcard src/*.cpp))

#Rule how to create arbitary .out files. 
#First state what is needed for them e.g. additional headers, .cpp files in an include folder...
#Then the command to create the .out file, probably you want to add further options to the g++ call.
bin/%.out: src/%.cpp Makefile
	g++ $< -o $@ -O2 -static -std=gnu++11 