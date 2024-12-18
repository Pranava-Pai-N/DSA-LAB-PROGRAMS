#include<stdio.h>
#include<stdlib.h>
int key,n,m,*ht,hi,elec,flag;
void createht()
{
 int i;
 ht = (int*)malloc(m*sizeof(int));
 if(m==0)
{
 printf("Unable to create the Hash table\n");
 exit(0);
}
 else
{
 for(i=0;i<m;i++)
 ht[i]=-1;
}

}

void insertht(int key)
{
 hi = key%m;
 while(ht[hi]!=-1)
{
 hi = (hi+1)%m;
 flag = 1;
}
 if(flag)
{
  printf("Collision detected and avoided by Linear probing!\n");
  flag = 0;
}
 ht[hi] = key;
 elec++;
}

void displayht()
{
  int i;
  if(elec == 0)
{
 printf("Hash Table is empty\n");
 return;
}
printf("Hash Table Contents are :\n");
for(i=0;i<m;i++)
printf("[%d]-->%d\n",i,ht[i]);
}

void main()
{
 int i;
 printf("Enter the Number of Employee record : ");
 scanf("%d",&n);
 printf("Enter the Two - Digit Memory Locations ");
 scanf("%d",&m);
 createht();
 printf("Enter the Four - Digit values of Employee Records\n");
for(i=0;i<n;i++)
{
 scanf("%d",&key);
 if(elec == m)
{
 printf("Hash Table is Full\n");
 break;
}
 insertht(key);
}
 displayht();
}




































