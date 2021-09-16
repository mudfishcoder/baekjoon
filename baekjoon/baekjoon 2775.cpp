#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
#include<iostream>

int solve(int a,int b)
{
  if(b==1) return 1;
  if(a==0) return b;
  return(solve(a-1,b)+solve(a,b-1));
}
int main()
{
	int t;  
  scanf("%d",&t);
  while(t--)
  {
    int k,n,sum=0;
    scanf("%d %d",&k,&n);
    printf("%d\n",solve(k,n));
  }
}