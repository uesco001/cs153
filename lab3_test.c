#include "types.h"
#include "stat.h"
#include "user.h"

int test(int n)
{
    test(n+1);
    return n;
}

int main(int argc, char *argv[])
{
    int pid = 0;
    pid = fork();
    if (pid == 0){
        test(1);
        exit();
    }
    wait();
    exit();
}
