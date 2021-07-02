#include<bits/stdc++.h>
using namespace std;
//  https://onlinegdb.com/B1g8cKfwSD
int main()
{
//    vector<int> vec_1;
//    vector<int> vec_2 (5);
//    vector<int> vec_3 {1,2,40,50};
//    vector<int> vec_4;
//    vec_4.push_back(50);
//
//    for(int i=0;i<10;i++){
//        int m; cin>>m;
//        vec_4.push_back(m);
//    }
//    //cout<<vec_4[0]<<endl;
//    cout<<vec_4<<vec_4.size();
//    int sum=0;
//    for(int i-0;i<vec_4.size();i++)
//        cout<<vec_4[i]<<" ";

//    vector<int> vec_1{10,20,30,40,50};
//    vector<int> vec_2;
//    vec_2.insert(vec_2.end(), vec_1.begin()+2, vec_1.end());
//    vec_1.insert(vec_1.begin()+2,25);
//    vec_1.insert(vec_1.begin()+2,{25,26,27,28,29});
//
//    for(auto i: vec_1){
//        cout<<i<<" ";
//    }
//    for(auto i: vec_1){
//        cout<<i<<" ";
//    }

     vector<int> vec_1{10,20,30,40,50};
     vec_1.erase(vec_1.begin()+1,  vec_1.begin()+2);

//     vectro<int> vec_1{30,14,24,15,20};
//     sort(vec_1.begin(), vec_1.end());
     //sort(vec_1.begin(), vec_1.end(),greater<int>());

         for(auto i: vec_1){
        cout<<i<<" ";
    }
//Search on vector(Linear Search)
//    sort(vec_1.begin(), vec_1.end());
//   auto it = find(vec_1.begin(), vec_1.end(),25);
//   int position = it - vec_1.begin();

   //Binary search
//   vectro<int> vec_1{30,14,24,15,20};
//   sort(vec_1.begin(), vec_1.end());
//   int result = binary_search(vec_1.begin(),vec_1.end(),45); //return 0 or 1


   //first and last Occurence
//   vectro<int> vec_1{30,14,24,30,30,30,30,15,20};
//
   auto first_pos = lower_bound(vec_1.begin(), vec_1.end(),30);
//   auto last_pos = upper_bound(vec_1.begin(), vec_1.end(),30);
//
//   cout<<"First Occurence -"<<first_pos - vec_1.begin()<<endl;
//   cout<<"Last Occurence -"<<(last_pos - vec_1.begin())-1<<endl;

   return 0;
}
