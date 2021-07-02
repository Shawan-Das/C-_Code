#include<bits/stdc++.h>
using namespace std;
int main()
{
    char strng[1000];
    scanf("%s",strng);
    int Counter=0,c1=0,c2=0;
    for(int j=0;j<strlen(strng);j++)
    for(int i=0;i<strlen(strng);i++){
        if(strng[i]==strng[j]) c1++;
        else c2++;

        if(c1==c2)
        {
            Counter++;
            c1=0;
            c2=0;
        }

    }
    printf("%d",Counter);
    return 0;
}
