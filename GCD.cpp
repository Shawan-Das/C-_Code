#include<bits/stdc++.h>
using namespace std;

int GCD(int num1, int num2)
{
    if(num2==0) return num1;

    else GCD(num2,num1%num2);
}

int main()
{
    int num2, num1;

    scanf("%d %d",&num1,&num2);
    int gcd;
    if(num1>num2) gcd=GCD(num1,num2);
    else gcd=GCD(num2,num1);
    printf("%d",gcd);
    return 0;
}
