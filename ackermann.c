//Applications of Stack -Recursions(Ackermann Function)

#include<stdio.h>
int ackermann(int m,int n)
{
   if(m==0)
return (n+1);
 else if(m>0 && n==0)
return ackermann(m-1,1);
 else if(m>0 && n>0)
return ackermann(m-1,ackermann(m,n-1));
}

void main()
{
  int m,n;
  printf("Enter the value of m and n:");
  scanf("%d%d",&m,&n);
  int result=ackermann(m,n);
  printf("The value of Ackermann Function A(%d,%d) = %d\n",m,n,result);
}

