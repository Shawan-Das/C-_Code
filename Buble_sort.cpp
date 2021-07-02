#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,counter=0;
     scanf("%d", &n);  int ary[n];

  for(int i=0;i<n;i++)
       scanf("%d",&ary[i]);

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(ary[j]>ary[j+1])
        swap(ary[j+1],ary[j]);
        counter++;
    }
    counter++;
  }

  for(int i=n-1;i>=n-3;i--)
     printf("%d ",ary[i]);
   printf("\ncounter-%d",counter);
  return 0;
}
