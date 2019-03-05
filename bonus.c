#include "types.h"
#include "stat.h"
#include "user.h"

int test(int n)
{
    //arr[n] = malloc(sizeof(arr[n]));
    test(n+1);
    //free(arr[n]);
    return n;
}

int main(int argc, char *argv[])
{
    int pid = 0;
    pid = fork();
    //int *arr[10000000];
    if (pid == 0){
        test(1);
        exit();
    }
    wait();
    exit();
}
