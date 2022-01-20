#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
int i;

for (i=0;i<2;i++){
	fork();
	}

printf("Hello \n");
exit(0);
}
