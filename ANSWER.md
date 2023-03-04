Part 1:

	Q: What is the effect of the parent process calling wait() two times?
	A: The parent calls wait() two times so it could reap both children after they are finish, therefore preventing zombie processes.

	Q: Do you always get the same order of execution?
	A: No, parent waiting print statement may happen before child1 or after.

	Q: Does Child 1 always execute bnefore Child 2?
	A: Yes.

	added sleep(5) before child 1 print
	Q: What do you notice?
	A: Now we are getting a same order of execution at all times with parent waiting print statement, then child 2 print statement, then child 1 print statement.

	Q: Can we guarantee that Child 1 always executes before Child 2?
	A: No, instead we can guarantee Child 2 always executes before Child 1.

Part 2:
	Added spinlock related code according to handout.

Part 3:
	
	Q: After seeing what the two system calls do, why do you think we had to add system calls for the operations on condition variables? Why not just have these operations as functions in ulib.c as we did for the spinlock?
	A: 
