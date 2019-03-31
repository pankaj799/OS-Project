#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/stat.h>

struct info
{
	int process_name[no_of_process];
	int process_pid[no_of_process];	
};
structure for the process information
process_name
process_pid
process_exectuion_time

int allocate_map()
{
	if(available_index==0)
	{
			return 1;
	}
	else
	{
			return -1; 
	}
}
int allocate_pid()
{
	if(pid_contained)
	{
			return pid;
	}
	else
	{
			return -1;
	}
}
int main()
{
	int no_of_process;
	struct info p;
	printf("Hello And Welcome to The PID Management System\n\n\n\n\n\n\n\n");
	printf("Enter the no of processes you want to Enter:\n");
	scanf("%d",no_of_process);
	// please enter the no of process you want to run
	//scan no_of_process
	int available_index[no_of_process],pid_container[no_of_process];
	for(int i=0;i<=no_of_process;i++)
	{
		available_index[i]=0;
		if(available_index[i]==0)
		{
			printf("Assigning Pids :\n");
			
			pid_container[i]=pid_container[i]+1;
		}
		
	}
	
	
	
	
	
	//ALOCATION BEGINS
	//DO THIS FOR ALL no_of_process
	//check for pid 
	//check if pid is available
	//if pid id available update the available flag to 1 //measn it is used currently by another process
	
		
	
}
