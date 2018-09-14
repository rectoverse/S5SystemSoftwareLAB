#include<stdio.h>
#include<stdlib.h>
int main()
{
 int q[100],n,head,i,j,k,seek=0,diff;
 float avg;
 printf("Enter number of locations \t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d", &head);
 printf("Enter elements of disk queue\t");
 for(i=1;i<=n;i++)
     {
       scanf("%d", &q[i]);
     }
 q[0]=head;
 printf("\n");
 for(j=0;j<=n-1;j++)
     {
       diff=abs(q[j+1]-q[j]);
       seek+=diff;
       printf("%d ---> %d with Seek %d\n",q[j],q[j+1],diff);
     }
 printf("\nTotal Seek Time is %d\t",seek);
 avg=seek/(float)n;
 printf("\nAverage Seek Time is %f\t",avg);

}
