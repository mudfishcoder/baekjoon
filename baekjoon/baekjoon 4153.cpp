#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
int min(int a,int b)
{
  if(a>b) return b;
  return a;
}
int main()
{
	int a[3],imsi;
  while(1)
  {
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]==0 && a[1]==0 && a[2]==0)
      break;
    sort(a,a+3);
    if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
      printf("right\n");
    else
      printf("wrong\n");
    
  }
}