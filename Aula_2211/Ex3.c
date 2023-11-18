#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>

#include <sys/time.h>
#include <sys/resource.h>

int main(int argc, char const *argv[])
{
	int priority;

	printf("Current process affinity: %d\n", getpriority(PRIO_PROCESS, 0));

	setpriority(PRIO_PROCESS, 0, 10);

	printf("Current process affinity: %d\n", getpriority(PRIO_PROCESS, 0));

	return 0;
}