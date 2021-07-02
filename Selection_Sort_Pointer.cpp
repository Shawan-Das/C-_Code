//selection_sort_pointer;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n); int ary[n];
    int *p, *q, *minimum;

    for(p=&ary[0];p<&ary[n];p++) scanf("%d",p);


    for(p=&ary[0];p<&ary[n];p++){
            minimum= p;
        for(q=p+1;q<&ary[n];q++){
            if(*minimum>*q)
                 minimum = q;
        }
          swap(*p,*minimum);
       }
         for(int i=0;i<n;i++) printf("%d ",ary[i]);

       return 0;
}

