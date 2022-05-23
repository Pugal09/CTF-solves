#include<stdio.h> 
#include<fcntl.h> 
#include<stdlib.h>
int main() {
  char buffer[32];
  int fd = open("flag.txt",O_RDONLY);
  read(fd,buffer,24);
  printf("The flag is : %s",buffer);
  return 0;
}

