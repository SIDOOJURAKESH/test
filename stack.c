#include<stdio.h>
#define S 5
int stack[S];
int tos=-1;
void push(int );
void pop();
void display();

int main()
{
push(1);
push(2);
push(3);
display();
pop();
display();
}

void push(int ele)
{
if(tos == S-1)
{
	printf("Stack is full\n");
	return;
}
else
{
	tos++;
	stack[tos]=ele;
}
}

void pop()
{
if(tos == -1)
{
	printf("Stack is empty\n");
	return;
}
else
{
	printf("poped ele = %d\n",stack[tos]);
	tos--;
}
} 

void display()
{
if(tos == -1)
{
	printf("Stack is empty\n");
	return;
}
int i;
for(i=0;i<=tos;i++)
	printf("%d\n",stack[i]);
}

