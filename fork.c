#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;  // process ID type

    pid = fork();  // create a child process

    if (pid == -1) {  // error occurred
        fprintf(stderr, "Fork unsuccessful");
        return 1;
    }
    else if (pid == 0) {  // child process
        printf("Child process!\n");
    }
    else {  // parent process
        printf("Parent process!\n");
    }

    printf("This line is printed by both parent and child processes!\n");

    return 0;
}
