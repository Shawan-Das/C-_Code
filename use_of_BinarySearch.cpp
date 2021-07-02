#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int ary[n];
    for(int i=0;i<n;i++) cin>>ary[i];

         if(ary[0]==1)   printf("%d ",n);
         if(ary[n-1]==0) printf("0");
         else{
            int low=0, high=n-1, index;
                   int mid;
        while(low<=high)
    {
        mid=(low+high)/2;
        if(ary[mid]==0 && ary[mid+1]==1){ index = mid+1; break;}
  else  if(ary[mid]==1 && ary[mid-1]==0){ index = mid;   break;}
  else  if(ary[mid]==1 && ary[mid-1]==1)  high  = mid;
  else  if(ary[mid]==0 && ary[mid+1]==0)  low   = mid;
    }
    printf("%d",n-index);
    }

    return 0;
}
