#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n); int ary[n];
    int *p; p=&ary[0];
    for(int i=0;i<n;i++) scanf("%d",p+i);

    for(int i=1;i<n;i++){
        for(p=&ary[i];p>&ary[0];p--){
                if(*p<*(p-1))
                     swap(*p,*(p-1));
                else break;
            }
    }

    for(p=&ary[0];p<&ary[n];p++) printf("%d ",*p);
    return 0;
}

