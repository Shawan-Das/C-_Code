#include<bits/stdc++.h>
  using namespace std;
int main()
{
    int i,j,n,counter=0;

    scanf("%d",&n);

    int ar[n];

    for(i=0;i<n;i++) scanf("%d",&ar[i]);

    for(i=0;i<n;i++)
        for(j=0;(j<n && i!=j); j++)
           if((ar[i]+ar[j])%3==0)
              counter++;

              printf("%d",counter);

    return 0;
}
