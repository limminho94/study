#include <stdio.h>
#include <pthread.h>
void* thread_main(void *arg);
void* thread_main1(void *arg);

int main(int argc, char *argv[]) 
{
	pthread_t t_id;
	pthread_t t_id1;
	int thread_param=5;
	printf("아아:%s\n", argv[0]);
	pthread_create(&t_id1, NULL, thread_main, (void*)&thread_param);
	if(pthread_create(&t_id, NULL, thread_main, (void*)&thread_param)!=0)
	{
		puts("pthread_create() error");
		return -1;
	}; 	
	while(1){
	sleep(1);  puts("end of main");
	
	}

	
	return 0;
}

void* thread_main(void *arg) 
{
	int i;
	int cnt=*((int*)arg);
	for(i=0; i<cnt; i++)
	{
		sleep(1);  puts("running thread");	 
	}
	return NULL;
}

void* thread_main1(void *arg) 
{
	int i;
	int cnt=*((int*)arg);
	for(i=0; i<cnt; i++)
	{
		sleep(1);  puts("running thread1111");	 
	}
	return NULL;
}