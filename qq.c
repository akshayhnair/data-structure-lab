#include<stdio.h>
#include<conio.h>
#define SIZE 25
void push (int);
int pop() ;
void ins(int) ;
int del() ;
int stack[SIZE],queue[SIZE], f=-1, r=-1;
int top=-1;
void main()
{
    int a[25],i,n,v,u;
    printf ("enter array limit");
    scanf ("%d",&n);
    printf ("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);

}
    printf ("\n array elements are");
    for(i=0;i<n;i++)
    {
        printf ("%d ",a[i]);

    }
    for(i=0;i<n;i++)
    {
        push(a[i]);
    }

    printf ("\n reverse of array in stack");
    for(i=0;i<n;i++)
    {
        v=pop();
        printf ("%d",v);
    }

    for(i=n-1;i>=0;i--)
    {
        ins(a[i]);
    }
    printf("\n reverse of array in queue" );
    for(i=0;i<n;i++)
    {
        u= del();
        printf ("%d",u);
    }
   getch();
}

void push(int k)
{
    top++;
    stack[top]=k;
}

int pop()
{
    int p;
    p=stack[top];
    top--;
    return p;
}
