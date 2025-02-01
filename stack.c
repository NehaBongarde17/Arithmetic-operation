#include<stdio.h>
int Push(int star[],int *sttop,int size,int data)
{
	if(*sttop>=(size-1))
	{
		return (0);
	}
	else
	{
		(*sttop)++;
		star[*sttop]=data;
		return(1);
	}
}
int Pop(int star[],int *sttop,int *retdata)
{
	int val;
	if(*sttop==-1)
	{
		return (0);
	}
	else
	{
		val=star[*sttop];
		(*sttop)--;
		*retdata=val;
		return (1);
	}
}
int main()
{
	int stack[10];
	int top=-1;
	int size=10;
	int dval;
	int status1,status2;
	int retval;
	int ch;
	printf("1.Push the data in the stack\n");
	printf("2.Pop the data from the stack\n");
	printf("3.Exit\n");
	printf("Enter the your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter the value to store in stack:");
		scanf("%d",&dval);
		status1=Push(stack,&top,size,dval);
		if(status1==1)
		{
			printf("The data is pushed in the stack");
		}
		else
		{
			printf("Stack is full");
		}
		break;
		case 2:printf("Enter the value for remove from the stack:");
		scanf("%d",&retval);
		status2=Pop(stack,&top,&retval);
		if(status2==0)
		{
			printf("Stack is empty");
		}
		else
		{
			printf("Poped value=%d",retval);
		}
		break;
		default:printf("Invalid");
		break;
		
	}
}
