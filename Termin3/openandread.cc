#include <iostream>
#include <cstdlib>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void read() {

    int d = open("loreipsum.txt", O_RDONLY);

    int count = 99;
    char *buf = new char(count + 1);
    int ret = read(d, buf, count);

    d = close(d);
    buf[ret] = 0;
    std::cout << buf << std::endl;

}

int main(int argc, char** argv) {

	std::cout << "Hello world!" << std::endl;
    read();

	return(EXIT_SUCCESS);
}


