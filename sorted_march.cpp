#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=0,n,m;
    scanf("%d",&n);  int ary1[n];
    for(int i=0;i<n;i++) scanf("%d",&ary1[i]);

    scanf("%d",&m);  int ary2[m];
    for(int i=0;i<m;i++) scanf("%d",&ary2[i]);

    int ary3[n+m],i=0,j=0;

    while(i<n||j<m)
    {
        if(ary1[i]<ary2[j])
            ary3[k++]=ary1[i++];

        else ary3[k++]=ary2[j++];
    }

    for(i=0;i<n+m;i++) printf("%d ",ary3[i]);
    return 0;
}
