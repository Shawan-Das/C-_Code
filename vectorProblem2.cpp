#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    int n; cin>>n; vector<int> vect(n);

    for(int i=0;i<n;i++) cin>>vect[i];

//    for(int i=0;i<vect.size()-1;i++)
//        for(int j=i+1;j<vect.size();j++)
//           if(vect[i]+vect[j] == 10)
//               counter++;

      sort( vect.begin(), vect.end() );

    for(int i=0;i<vect.size();i++){
        int number=10-vect[i];
        if( binary_search( vect.begin()+i+1, vect.end(), number ))
           counter++;
    }

    cout<<"Total pair:"<<counter<<endl;
    return 0;
}

