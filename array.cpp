#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,b,sum=0;
    scanf("%d",&n);
    int Array[n];

    for(i=0;i<n;i++)
          scanf("%d",&Array[i]);

    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(Array[j]>Array[j+1])
                    swap(Array[j],Array[j+1]);


    for(i=1;i<n;i++)
        if(Array[i]!=Array[i-1]);
            printf("%d ",Array[i]);
           //printf("%d",sum);
    return 0;
}
