#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n; vector<int> vect(n);
    for(int i=0;i<n;i++){
        cin>>vect[i];
        sum=sum+vect[i];
    }
    cout<<"Sum of Vector Elements:"<<sum<<endl;
    return 0;
}
