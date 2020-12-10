#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  if(argc < 2){
    fprintf(2, "need a param");
    exit();
  }
  int i = atoi(argv[1]);
  printf("(nothing happens for a little while)\n");
  sleep(i);
  exit();
}