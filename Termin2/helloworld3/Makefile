helloworld: helloworld.o printhelloworld.o test.o
	g++ helloworld.o printhelloworld.o test.o -o helloworld

helloworld.o: helloworld.cc
	g++ -c helloworld.cc
	
printhelloworld.o: printhelloworld.cc
	g++ -c printhelloworld.cc

test.o: test.cc
	g++ -c test.cc

clean:
	rm -f helloworld *.o