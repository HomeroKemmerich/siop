#define _GNU_SOURCE

#include <sched.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	int pmax, pmin;

	//FIFO
	pmax = sched_get_priority_max(SCHED_FIFO);
	pmin = sched_get_priority_min(SCHED_FIFO);

	printf("Prioridade maxima FIFO: %d\n", pmax);
	printf("Prioridade minima FIFO: %d\n", pmin);

	//RR
	pmax = sched_get_priority_max(SCHED_RR);
	pmin = sched_get_priority_min(SCHED_RR);

	printf("Prioridade maxima RR: %d\n", pmax);
	printf("Prioridade minima RR: %d\n", pmin);

	
	//BATCH
	pmax = sched_get_priority_max(SCHED_BATCH);
	pmin = sched_get_priority_min(SCHED_BATCH);

	printf("Prioridade maxima BATCH: %d\n", pmax);
	printf("Prioridade minima BATCH: %d\n", pmin);

	//IDLE
	pmax = sched_get_priority_max(SCHED_IDLE);
	pmin = sched_get_priority_min(SCHED_IDLE);

	printf("Prioridade maxima IDLE: %d\n", pmax);
	printf("Prioridade minima IDLE: %d\n", pmin);

	//OTHER
	pmax = sched_get_priority_max(SCHED_OTHER);
	pmin = sched_get_priority_min(SCHED_OTHER);

	printf("Prioridade maxima OTHER: %d\n", pmax);
	printf("Prioridade minima OTHER: %d\n", pmin);
}