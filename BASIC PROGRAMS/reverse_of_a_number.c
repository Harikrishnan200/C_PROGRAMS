#include<stdio.h>  
int main()    
{    
int num,rem,rev=0,temp;    
printf("Enter the number:");    
scanf("%d",&num);    
temp=num;    
while(num>0)    
{    
rem=num%10;    
rev=(sum*10)+rem;    
num=num/10;  
}
printf("Reverse of the num is:",rev)  
}
 