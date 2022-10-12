#include <iostream>
#include <cstdlib>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void read() {

    FILE *d = fopen("loreipsum.txt", O_RDONLY);
    std::cout << d << std::endl;
    fseek(d, 0, SEEK_END);
    long c = ftell(d);
    fseek(d, 0, SEEK_END);

    char *buf = new char(c + 1);
    fread(buf, c, 1, d);

    fclose(d);
    std::cout << d << std::endl;
    buf[c] = 0;
    std::cout << buf << std::endl;

}

int main(int argc, char** argv) {

	std::cout << "Hello world!" << std::endl;
    read();

	return(EXIT_SUCCESS);
}


