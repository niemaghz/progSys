#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void doit(){
fork();
fork();
printf("Hello!\n");
}

int main(){

doit();
printf("Hello! \n");
exit(0);



return 0;
}
