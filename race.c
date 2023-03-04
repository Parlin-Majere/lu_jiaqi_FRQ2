#include "types.h"
#include "stat.h"
#include "user.h"

// part 1 main function
int main(){
	int pid = fork();
	if(pid < 0){
		printf(1, "Error forking first child. \n");
	} else if (pid == 0){
		sleep(5);
		printf(1, "Child 1 Executing\n");
	} else {
		pid = fork();
		if(pid < 0){
			printf(1, "Error forking second child.\n");
		} else if(pid == 0){
			printf(1, "Child 2 Executing\n");
		} else {
			printf(1, "Parent Waiting\n");
			int i;
			for (i = 0; i<2; i++){
				wait();
			}
			printf(1, "Children completed\n");
			printf(1, "Parent Executing\n");
			printf(1, "Parent exiting.\n");
		}
	}

	// part 2 spinlock
	struct spinlock lk;
	init_lock(&lk);
	lock(&lk);
	// start of critical section
	// end of critical section
	unlock(&lk);


	exit();
}