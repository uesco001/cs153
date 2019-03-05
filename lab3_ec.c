#include "types.h"
#include "stat.h"
#include "user.h"

int growstack(int d){
  int foo = 1 + d;
  foo = growstack(foo);
  foo = growstack(foo);
 // printf(1, "%d\n", foo);
  return foo;

}



int main(void){
  int pid = fork();
  //we only care when pid = 0
  if (pid == 0){
    growstack(1);
    exit();
  }
  wait();
  exit();
  //return 0;
}
