#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ind(int* a, int n){
	int i;
	for(i=0;i<n;i++)
	{
  	if(i==a[i])
  	return i;
  }
}
int main()
{
  int i,n,t;
  int* a;
  scanf("%d",&n);
  if(n < 0)
  {return -1;}
  else{
  a=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  t=ind(a,n);
  return t;}
}
