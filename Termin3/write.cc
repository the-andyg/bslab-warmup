#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fcntl.h>
#include <unistd.h>

void testwrite() {
    int d = open("testwrite.txt", O_RDWR);
    const char *bf = "hallo, ich habe in eine datei geschrieben";
    int count = strlen(bf);
    d = write(d, bf, count);
    d = close(d);
}

int main(int argc, char** argv) {

	std::cout << "Hello world!" << std::endl;
    testwrite();

	return(EXIT_SUCCESS);
}
