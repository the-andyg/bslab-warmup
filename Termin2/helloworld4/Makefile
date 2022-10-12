BIN= helloworld
OBJS = helloworld.o printhelloworld.o test.o

$(BIN): $(OBJS)
	g++ $^ -o $@
	
%.o: %.cc
	g++ -c $<
	
clean:
	rm -f $(BIN) $(OBJS)
