#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <sched.h>

int main(int argc, char const *argv[])
{
	int n;

	n = nice(0);


	printf("Current process affinity: %d\n", n);

	return 0;
}