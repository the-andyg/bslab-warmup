#include <iostream>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>

using namespace std;





int main(int argc, char** argv) {

	std::cout << "Hello world!" << std::endl;
    struct MyStruct {
        int a, b, c;
    };
    MyStruct s;

    int df1 = open("writestruct.txt", O_RDWR);
    write(df1, &s, sizeof(MyStruct));
    close(df1);
    df1 = open("writestruct.txt", O_RDWR);

    char *buf = new char[count + 1];
    int ret = read()

	return(EXIT_SUCCESS);
}
