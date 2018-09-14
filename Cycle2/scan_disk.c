#include<stdlib.h>
#include<stdio.h>
int main()
{
 int i,j,sum=0,n,d[100],head,temp,max,headloc;
 printf("enter number of location\t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d",&head);
 printf("enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=head;
 n=n+1;
 for(i=0;i<n;i++)    
 {
  for(j=i;j<n;j++)
  {
    if(d[i]>d[j])
    {
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
  }
 }
 max=d[n];
 for(i=0;i<n;i++)   
 {
 if(head==d[i]) { headloc=i; break;  }
 }
 for(i=headloc;i>=0;i--)
 {
 printf("%d -->",d[i]);
 }
 printf("0 -->");
 for(i=headloc+1;i<n;i++)
 {
 printf("%d-->",d[i]);
 }
 sum=head+max;
       printf("\nmovement of total cylinders %d",sum);
 
 return 0;
}
