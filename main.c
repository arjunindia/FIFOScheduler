#include <stdio.h>
#include <stdlib.h>
#define maxsize 20
struct process
{
    int process,burstTime,waitingTime,turnaroundTime;
};

void insert(struct process*);
void delete();
int front = -1, rear = -1;
struct process *queue[maxsize];

int main()
{
    int i = 0,n,counter = 0;
    float awt=0,att=0;
    struct process a[maxsize];
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i].process = i;
        printf("Enter burst time for process p%d: ",a[i].process);
        scanf("%d",&a[i].burstTime);
        a[i].waitingTime = 0;
        a[i].turnaroundTime = 0;
        insert(&a[i]);
    }
    //executes each process in FIFO using Queue
    while(rear!=-1){
        queue[front]->waitingTime = counter;
        counter = counter + queue[front]->burstTime;
        queue[front]->turnaroundTime = counter;
        awt = awt + queue[front]->waitingTime;
        att = att + queue[front]->turnaroundTime;
        delete();
    }
    awt = awt/n;
    att = att/n;
    //Prints table
       printf("\n-----------------------------------------------------------------");
    printf("\n| Process \t| Burst Time\t| Waiting Time\t|Turnaround Time|");
       printf("\n-----------------------------------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\n| p%d\t\t| %d\t\t| %d\t\t| %d\t\t|",a[i].process,a[i].burstTime,a[i].waitingTime,a[i].turnaroundTime);
    }
    printf("\n-----------------------------------------------------------------");
    printf("\n\nTotal time = %d",counter);
    printf("\nAverage waiting time = %.3f Seconds",awt);
    printf("\nAverage turnover time = %.3f Seconds",att);
    printf("\n");
    return 0;
}



void insert(struct process *a)
{
    if(rear == maxsize-1)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear+1;
    }
    queue[rear] = a;
}
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
    }
}
