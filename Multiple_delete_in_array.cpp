#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array_size;
    scanf("%d",&array_size);
    int Array[array_size];

    for(int i=0;i<array_size;i++)
        scanf("%d",&Array[i]);

        int number_of_delete;
        scanf("%d",&number_of_delete);
        int position[number_of_delete];

        for(int i=0;i<number_of_delete;i++)
        scanf("%d",&position[i]);

        for(int i=0;i<number_of_delete;i++)
            for(int j=0;j<number_of_delete-1;j++)
               if(position[j]<position[j+1])
                swap(position[j],position[j+1]);


         for(int i=0;i<number_of_delete;i++)
         {
             for(int j=position[i];j<array_size-1;j++)
                Array[j]=Array[j+1];
         }
for(int i=0;i<array_size-number_of_delete;i++)
    printf("%d ",Array[i]);


        return 0;
}
