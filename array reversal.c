#include<stdio.h>
int main()
{
  int a[100],b[100],i,n,j;
  printf("\n enter no of elements:");
  scanf("%d",&n);
  printf("\n enter elements:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\n after reversing :\n ");
  for(i=n-1,j=0;(i>=0)&&j<n;i--,j++)
  {
      b[j]=a[i];
      printf("%d ",b[j]);
  }
 //   for(j=0;j<n;j++)
 // {
    //  printf("%d ",b[j]);
//  }
  return 0;
}

