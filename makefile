m:
	g++ -std=c++11 -Wall -g pixel.cpp header.cpp array1DDriver.cpp -o vec1DDriver
r:
	./vec1DDriver pooh.ppm hoop.ppm
c:
	rm vec1DDriver hoop.ppm