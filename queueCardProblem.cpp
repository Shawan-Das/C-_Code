#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> sample;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) sample.push(i);
    cout<<"Discarded cards: "<<sample.front();
    sample.pop();
    int remaining = sample.front();
    sample.pop();
    sample.push(remaining);
    while(sample.size()!=1)
    {
        int var = sample.front();
        cout<<", "<<var;
        sample.pop();
    int remaining = sample.front();
    sample.pop();
    sample.push(remaining);
    }

    cout<<endl<<"Remaining card: "<<sample.front();
    return 0;
}
