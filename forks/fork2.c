#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
pid_t pid,pid2;

fork();
fork();
printf("Hello!\n");
exit(0);

}
