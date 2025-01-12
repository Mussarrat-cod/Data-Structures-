#include<stdio.h> 
#include<stdlib.h> 
int top=-1,a[10]; 
void push() 
{ 
int item; 
if(top>=10) 
{ 
printf("Stack overflow"); 
} 
else 
{ 
printf("Enter element: "); 
scanf("%d",&item); 
a[++top]=item; 
} 
} 
void pop() 
{ 
int item; 
if(top<0) 
{ 
printf("Stack underflow"); 
} 
else 
{ 
item=a[top--]; 
printf("The deleted item is %d",item); 
} 
} 
void display() 
{ 
int i; 
if(top<0) 
{ 
printf("Stack underflow"); 
} 
else 
{ 
for(i=0;i<=top;i++) 
{ 
printf("\n%d",a[i]); 
} 
} 
} 
void palindrome() 
{ 
int i,temp=top; 
if(top!=-1) 
{ 
for(i=0;i<=top/2;i++) 
if(a[i]!=a[top-1]) 
{ 
printf("Stack is not palindrome"); 
return; 
} 
printf("Stack is palindrome"); 
} 
return; 
}  
void main() 
{ 
int ch; 
while(1) 
{ 
printf("\n1.Push\n2.Pop\n3.Display\n4.Palindrome\n5.Exit\nEnter ur choice: "); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: 
push(); 
break; 
case 2: 
pop(); 
break; 
case 3: 
display(); 
break; 
case 4: 
palindrome(); 
break; 
case 5: exit(0); 
} 
} 
}
