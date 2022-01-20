#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<wait.h>
#include<sys/types.h>

int main(){
	pid_t pid;
	do{
		pid=fork();
	}while((pid==-1) && (errno==EAGAIN) );
	if(pid==-1) {
		fprintf(stderr,"fork impossible erreur=%d\n",errno);
		return -1;
		}
	else{
		if(pid==0){
			fprintf(stdout,"Fils PID=%ld,PPID=%ld\n",
			(long)getpid(),(long) getppid());
			execlp("date","date",NULL);
		return 0;
		}
		else{
			wait((int*) 0);
			fprintf(stdout,"le fils est fini\n");
		        fprintf(stdout,"Pere PID=%ld\n",
						(long)getpid());
		return 0;
		}
	
	}
}
