#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

if(fork())fork();

printf("hello!!\n");


exit(0);
}
