#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str; set<string> strs;

    getline(cin,str);

    transform(str.begin(),str.end(),str.begin(),::tolower);

   istringstream iss(str);

    while(iss){
            string str2;
        iss>>str2;
    strs.insert(str2);
    }

    for(auto i: strs) cout<<i<<endl;

    return 0;
}

