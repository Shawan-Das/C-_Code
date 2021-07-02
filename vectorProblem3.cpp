#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,Q,i,a; char ch;
    cin>>T;
   cout<<endl;
    for(int i=0;i<T;i++){

         cin>>Q; int n; vector<int> A;

        for(int j=0;j<Q;j++){ cin>>ch;

        if(ch=='a'){
                cin>>n; A.push_back(n);
        }
        if(ch=='b') {
            sort(A.begin(), A.end());
        }
        if(ch=='c') {
            reverse(A.begin(), A.end());
        }
        if(ch=='d') {
            cout<<A.size()<<" ";
        }
        if(ch=='e') {
            for(auto k: A) cout<<k<<" ";
        }
        if(ch=='f') {
            sort(A.begin(), A.end(), greater<int>());
        }
        if(ch=='g'){
            cin>>a;
            auto it = find(A.begin(), A.end(),a);
            int position = it - A.begin();
            if(position<A.size()){
                cout<<"Exist"<<endl;
            }else{
                cout<<"Not Exist"<<endl;
            }
        }
        if(ch=='h'){
            cin>>a;
            if(a<=A.size()){
                A.erase(A.begin()+a, A.begin()+a);
            }
            else{
                cout<<a<<"th Element Not Exist"<<endl;
            }
        }
        if(ch=='i'){
            if(A.size()==0){
                cout<<"No Element"<<endl;
            }
            else{
                A.erase(A.end()-1,A.end()-1);
            }
        }
        if(ch=='j'){
            cin>>a;
            sort(A.begin(), A.end());
            auto last_pos = upper_bound(A.begin(), A.end(),a);
            int position = last_pos-A.begin();
            if(position<A.size()){
                cout<<"Exist in :"<<position<<endl;
            }
            else{
                cout<<"Not Exist"<<endl;
            }
        }
    }
        cout<<"\n";
  }
}
