#include<stdio.h>
char str[100],pat[50],rep[50],ans[100];
int m,i,k,j,c,flag=0;
void stringmatching()
{
 m=i=j=c=0;
 while(str[c]!='\0')
{
  if(str[m]==pat[i])
 {
  m++;
 i++;
if(pat[i]=='\0')
{
  flag=1;
for(k=0;rep[k]!='\0';k++,j++)
 ans[j]=rep[k];
 i=0;
 c=m;
}
}
 else
{
 ans[j]=str[c];
 j++;
c++;
i=0;
m=c;
}
} ans[j]='\0';
}

void main()
{
 printf("Enter Main string:\n");
gets(str);
printf("Enter Pattern string:\n");
gets(pat);
printf("Enter Replacement string:\n");
gets(rep);
  stringmatching();
if(flag==1)
printf("\The resultant string is\n%s\n",ans);
else
printf("Pattern matching does not exist\n");
}



