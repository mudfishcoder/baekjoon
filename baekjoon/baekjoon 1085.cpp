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
	int ans,x,y,w,h;
  scanf("%d %d %d %d",&x,&y,&w,&h);
  ans=min(abs(x-w),abs(y-h));
  ans=min(ans,min(x,y));
  printf("%d",ans);
}