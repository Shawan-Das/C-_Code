#include<stdio.h>
struct skewness{
    double lower, upper, mid, fi, di, fidi2, indi, fiindi;
};

int main()
{
    int n;
    scanf("%d",n);
   struct skewness skw[n];

   for(int i=0; i<n; i++){
    scanf("%lf %lf %lf",&skw[i].lower, &skw[i].upper, &skw[i].fi);
    skw[i].mid= (skw[i].lower+skw[i].upper)/2;
   }
   skw[n/2].di=0;
   for(int i=(n/2)-1;i>=0;i--)skw[n/2].di=0-i;

}
