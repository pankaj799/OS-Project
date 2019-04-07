#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<stdbool.h>
int no_of_new_process;


int allocate_map(int x,int process_name[],int n);
void allocate_pid(int y,int n,int process_name[],int pid_container[]);
int main()
{
	int no_of_process,process_name[no_of_process];
	int i,k,l,n,no_of_new_process,t,a;
	printf("Hello And Welcome to The PID Management System\n\n\n\n\n\n\n\n");
	printf("Enter the no of processes you want to Enter:\n");
	scanf("%d",&no_of_process);
	n=no_of_process/2;
	int available_index[n],pid_container[n];
	// please enter the no of process you want to run
	//scan no_of_process
	printf("If the Available index value is 0 than it means that index is available\n");
	printf("If the Available index value is 1 than it means that index is not available \n\n");
	printf("Giving values to available Index\n");
	for(i=0;i<=n;i++)
	{
			available_index[i]=0;
			process_name[no_of_process];
			pid_container[i]=(rand()%1000) + 100;
			available_index[i]=0;
			printf("PID Container[%d] : %d \n",i,pid_container[i]);
			printf("Available Index[%d] : %d \n",i,available_index[i]);
		
	}
	printf("\n\n\n\n\n\n\n");
	printf("Assigning Pids to processes:\n\n\n\n");
	for(k=0;k<=n;k++)
	{	
		if(available_index[k]==0)
		{
			process_name[k]=pid_container[k];
			available_index[k]=1;
			printf("Process Id[%d] : %d \n",k,process_name[k]);
			printf("Available Index[%d] : %d \n",k,available_index[k]);
		}
	}
	
	printf("Enter The no of new processes you want to assign (but it should ne less than or equal to the no of available processes): \n");
	scanf("%d",&no_of_new_process);
	printf("\n\n\n");
//	printf("Now A New Process Arives process[%d] \n",n+1);
//	printf("Now This New Process Termintes process[%d] and gives process[%d] id to process[%d]\n",n,n,n+1);	
//	
	t=allocate_map(no_of_new_process,process_name,n);
	printf("%d\n\n\n",t);
	
	printf("Assigning The Values TO The New Processes\n");
	
	allocate_pid(no_of_new_process,n,process_name,pid_container);

	//ALOCATION BEGINS
	//DO THIS FOR ALL no_of_process
	//check for pid 
	//check if pid is available
	//if pid id available update the available flag to 1 //measn it is used currently by another process
	
		
	
}

int allocate_map(int x,int process_name[],int n)
{
	int j,s,h;
	no_of_new_process=x;
	j=0;
	while(j<=no_of_new_process)
	{
		process_name[j]=NULL;
		printf("Process Name[%d]: %d\n",j,process_name[j]);
		
		
		j++;
	}
	for(h=no_of_new_process+1;h<=n;h++)
	{
		printf("Process Name[%d]: %d\n",h,process_name[h]);
	}
	for(s=0;s<no_of_new_process;s++){
			if(process_name[s]!=NULL)
		{
			return 1;
		}else if(s==no_of_new_process-1){
			return -1;
		}
	}
	

}

void allocate_pid(int y,int n,int process_name[],int pid_container[])
{
	int k,z,w=0,m;
	no_of_new_process=y;
	z=no_of_new_process+n+1;
	for(k=n+1;k<=z;k++)
	{
		process_name[k]=pid_container[w];
		printf("Process Name[%d]: %d\n",k,process_name[k]);
		w++;
	}
	for(m=no_of_new_process+1;m<=n;m++)
	{
		printf("Process Name[%d]: %d\n",m,process_name[m]);
	}
	
}

