#include<stdio.h>
void enqueue();
void dequeue();
void display();
int item,front=-1,rear=-1,A[50],i,maxsize;
void main()
{
    printf("Enter limit: ");
    scanf("%d",&maxsize);
    printf("HINT:\nEnter 1 if you want to enqueue an element to the Queue\nEnter 2 if you want to dequeue an element from the Queue\nEnter 3 if you want to display the Queue\nEnter 4 if you want to break from the loop\n");
    int ch;
    while(ch!=4)
    {
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                  break;
            case 2:dequeue();
                  break;
            case 3:display();    
                  break;
            case 4:printf("Successfully exited from the program");
                  break;  
        }
    }
}   
    void enqueue()
    {
        if(rear==maxsize-1)
        {
            printf("Overflow\n");
            
        }
        else
        {
            printf("Element to be enqued: ");
            scanf("%d",&item);
            if(front==-1&&rear==-1)
            {
                rear=0;
                front=0;
                A[rear]=item;
            }
            else
            {
                rear++;
                A[rear]=item;
            }
        }
    }
    void dequeue()
    {
        if(front==-1 && rear==-1)
        {
            printf("Underflow\n");
        }
        else
        {
           printf("Deleted item = %d\n",A[front]);
           if(front == rear)
           {
               front=-1;
               rear=-1;
           }
           else
           {
               front++;
           }
        }
    }
    void display()
    {
        if(front==-1 && rear == -1)
       {
           printf("Queue is Empty\n");
       }
       else
       {
           printf("Queue =\n");
           for(i=front;i<=rear;i++)
           {
               printf("%d\n",A[i]);
           }
       }
    }
