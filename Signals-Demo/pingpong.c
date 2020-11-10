//Chase Staples
//Demo on Signals in c
//Demo on a game of ping pong between PID and CPID
//Sending signals back and forth

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void pong(int sig);
void ping(int sig);

int cpid;

int main()
{
	cpid = fork();
	if(cpid > 0)
	{
		signal(SIGUSR1, pong);
		sleep(1);
		printf("Service to %d!\n", cpid);
		kill(cpid, SIGUSR2);
		while(1) pause();

	}
	else
	{
		signal(SIGUSR2, ping);
		pause();
		while(1) pause();
	}


}
void ping(int sig)
{
	printf("Ping to %d!\n", getppid());
	sleep(1);
	kill(getppid(), SIGUSR1);
}

void pong(int sig)
{
        printf("Pong to %d!\n", cpid);
        sleep(1);
        kill(cpid, SIGUSR2);
}
