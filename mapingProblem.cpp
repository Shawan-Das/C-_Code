#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<string,int> input;
    cin>>n; getchar();
    for(int i=1;i<=n;i++)
    {
        string str;
        getline(cin,str);
        input[str]++;
        if(input[str]>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
