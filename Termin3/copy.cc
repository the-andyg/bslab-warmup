#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

void copy(char* d1, char* d2) {
    int count = 41;
    char *buf = new char[count + 1];
    int df1 = open(d1, O_RDONLY);
    int df2 = open(d2, O_WRONLY);
    int ret = read(df1, buf, count);
    buf[ret] = 0;
    write(df2, buf, strlen(buf));
}

int main(int argc, char** argv) {

	std::cout << "penis" << std::endl;
    copy(argv[1], argv[2]);
	
	return(EXIT_SUCCESS);
}
