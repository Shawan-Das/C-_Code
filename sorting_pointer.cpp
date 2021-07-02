//Buble sort using pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ary[n]; int *p;
    p=&ary[0];

    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }

    for(int i=0;i<n-1;i++){
            p=&ary[0];
        for(int j=0;j<n-1-i;j++){
            if(*p>*(p+1)) swap(*p,*(p+1));
            p++;
        }
    }
    p=&ary[0];
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
}
