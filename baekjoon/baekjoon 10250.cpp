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
	int t;
  scanf("%d",&t);
  while(t--)
  {
    int h,w,n;
    scanf("%d %d %d",&h,&w,&n);
    int rw,rh;
    rh=n%h;
    rw=n/h;
    if(rh>0)
      rw++;
    else 
      rh=h;
    printf("%d\n",rh*100+rw);
  }
}