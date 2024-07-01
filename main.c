// Stack using C
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//Stack
int stack[SIZE];
int top=-1;

// Function Prototype
void push(int);
void pop();
void display();
int i;
//drivers code
int main()
{
    int choice,data;
    while(1)
    {
    printf("\nEnter \n\n 1. For Push \n 2. For Pop \n 3. For Peek \n 4. For Display \n 5. For exit \n\n Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
            {
            printf("\nEnter data: ");
            scanf("%d",&data);
            push(data);
            break;
            }
        case 2:
            {
            pop();
            break;
            }
        case 3:
            {
                if(!is_empty())
                {
                     printf("\nTop element is %d",stack[top]);
                }
                else
                    printf("\n Stack is empty");
               break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                exit(0);
                break;
            }
        default:
            {
                printf("\nInvalid Choice .........");
            }
        }
    }
    return 0;
}
int is_full()
{
    if(top==SIZE-1)
        return 1;
    else
        return 0;
}
int is_empty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int value)
{
    if(is_full())
    {
        printf("\nStack Overflow\n");
        return;
    }
    top++;
    stack[top]=value;
    printf("\n%d is pushed successfully.\n",stack[top]);
}
void pop()
{
    if(is_empty())
    {
        printf("\nStack Underflow");
        return;
    }
    printf("\n%d is popped Successfully.\n",stack[top]);
    top--;
}
void display()
{
    {
        if(is_empty())
        {
            printf("\nStack is Empty");
        }
        else
            printf("\nElements on the stack are: \t");
        for(i=0;i<=top;i++)
        {
            printf("\n%d",stack[i]);
        }
    }
}
