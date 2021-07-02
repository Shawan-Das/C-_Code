#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,index,counter=0;
    scanf("%d",&n); int ary[n];
    for(int i=0;i<n;i++) scanf("%d",&ary[i]);


    for(int i=0;i<n;i++){
            int minimum=ary[i];
            index=i;
        for(int j=i+1;j<n;j++){
            if(minimum>ary[j])
            {
                minimum=ary[j];
                 index = j;
            }
          }
          swap(ary[i],ary[index]);
       }
       for(int i=0;i<n;i++) printf("%d ",ary[i]);

       return 0;
}
