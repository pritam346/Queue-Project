//Queue Project
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int is_empty();
int is_full();
void enqueue(int);
int dequeue();
void display();

int queue[SIZE],front = -1,rear =-1;
int i;
int main()
{
    int choice,data,ret;
    while(1)
      {
    printf("\nEnter \n\n 1. For Enqueue \n 2. For Dequeue \n 3. For Display \n 4. For exit \n\n Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
            {
                printf("\nEnter data:");
                scanf("%d",&data);
                enqueue(data);
                break;
            }
        case 2:
            {
                ret=dequeue();
                if(ret != 0)
                {
                     printf("\n%d is dequeued successfully.",ret);
                }
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("\nExited from the system.\n");
                exit(0);
            }
        default:
            {
                printf("\nInvalid Operator");
            }
        }
      }
    return 0;
}
int is_full()
{
    if(rear == SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_empty()
{
    if(front ==-1 && rear == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int value)
{
    if(is_full())
    {
        printf("\nQueue Overflow\n");
        return;
    }
    else if(is_empty())
    {
        front++;
        rear++;
        queue[rear]=value;
    }
    else
    {
        rear++;
        queue[rear]=value;
    }
    printf("\n%d is enqueued successfully.",value);
}
int dequeue()
{
    if(is_empty())
    {
        printf("\nQueue Underflow.");
        return 0;
    }
    else if(rear == front)
    {
        int f=queue[front];
        front = -1;
        rear = -1;
        return f;
    }
    else
    {
        return queue[front++];
    }
}
void display()
{
    if(is_empty())
    {
        printf("\nQueue is empty\n");
    }
    else
    {
    for(i=front;i<=rear;i++)
    {
        printf("\n%d",queue[i]);
    }
    }
}
