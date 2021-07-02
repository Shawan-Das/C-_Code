#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[20];
    scanf("%s",str);
    int i, n=strlen(str); int ary[n], counter=0;

    for(i=0;i<n;i++){
        if(str[i]=='2') ary[i]=1;
        if(str[i]=='J') ary[i]=2;
        if(str[i]=='Q') ary[i]=3;
        if(str[i]=='K') ary[i]=4;
        if(str[i]=='A') ary[i]=5;
    }

        for(i=1;i<n;i++){
             if(ary[i]<ary[i-1])
                for(int j=i;j>0;j--)
                    if(ary[j]<ary[j-1]){
                swap(ary[j],ary[j-1]);
                counter++;
             } else break;
    }

    printf("Number of Comparison-%d\n",counter);

    return 0;
}

