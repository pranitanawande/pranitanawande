#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  float arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%f",&arr[i]);
  }

  float sum=0.0,avg,ans;
  float result=0.0;
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  for(i=0;i<n;i++)
  {
    if(arr[i]<avg)
    {
      ans=avg-arr[i];
      result=result+ans;
    }
    
  }
  printf("%f\n",result);
}
