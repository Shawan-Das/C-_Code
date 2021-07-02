#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;

    for(int i=1; i<=n; i++){
        int number, ary[10], index=0, digit=1;
        cin>>number;

         while(number!=0){
              if(number%10 != 0)
                    ary[index++]=number%10;

            number/=10;
         }
       cout<<index<<endl;

       for(int j= 0; j<index; j++)
       {
           cout<<ary[index]+digit<<" ";
           digit*=10;
       }
       printf("\n");
    }

}
