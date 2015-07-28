#include <stdio.h>
#include <sys/socket.h>

int main(int argc, char *argv[]) {
    int fd_client = socket(AF_INET, SOCK_STREAM, 0);
    if (-1 == fd_client) {
        printf("socket fail\n");
        return -1;
    }
}
