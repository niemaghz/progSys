#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

if(fork()==0){
if (fork()){

printf("hello!!\n");

}


}


exit(0);
}
