all:
	c++ src/intro.cpp -std=c++11 -o bin/intro
	c++ src/sparse.cpp -std=c++11 -o bin/sparse
clean:
	rm -rf bin/*
