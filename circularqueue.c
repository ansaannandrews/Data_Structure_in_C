#include<stdio.h>
void enqueue();
void dequeue();
void display();
int item,front=-1,rear=-1,A[50],i,maxsize;
void main()
{   
    printf("Enter limit: ");
    scanf("%d",&maxsize);
    printf("HINT:\nEnter 1 if you want to enqueue an element to the Circular Queue\nEnter 2 if you want to dequeue an element from the Circular Queue\nEnter 3 if you want to display the Circular Queue\nEnter 4 if you want to break from the loop\n");
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
       if((rear==maxsize-1 && front == 0) || (front == rear+1))
       {
            printf("Overflow\n");
       }
        else
        {
            printf("Element to be pushed: ");
            scanf("%d",&item);
            if(rear == -1)
            {
               front++;
               rear++;
            }
            else if(rear == maxsize-1)
            {
               rear = 0;
            }
            else
            {
               rear++;
            }
            A[rear] = item;
       } 
}     
void dequeue()
{
       if(front==-1)
       {
           printf("Underflow\n");
       }
       else
       {
           printf("Deleted item = %d\n",A[front]);
           if(rear == front)
           {
               front=-1;
               rear=-1;
           }
           else if(front == maxsize-1)
           {
               front=0;
           }
           else
           {
               front++;
           }
       }
} 
void display()
{
       if(front==-1)
       {
           printf("Circular Queue is empty\n");
       }
       else
       {
           printf("Circular Queue =\n");
           if(front <= rear)
           {
               for(i=front;i<=rear;i++)
               {
                   printf("%d\n",A[i]);
               }
           }
           else
           {
               for(i=rear;i<maxsize;i++)
               {
                   printf("%d\n",A[i]);
               }
           }
       }
}     
