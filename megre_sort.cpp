#include<bits/stdc++.h>
using namespace std;
int Array[10000];
int ax_Array[10000];

void merge_arrays(int low,int mid,int high)
{
    int i=low, j=mid+1, k=low;

    while(i<=mid && j<=high)
    {
        if(Array[i]<Array[j]) ax_Array[k++]=Array[i++];
        else                  ax_Array[k++]=Array[j++];
    }
    while(i<=mid)  ax_Array[k++]=Array[i++];
    while(j<=high) ax_Array[k++]=Array[j++];

    for(i=low;i<=high;i++) Array[i]=ax_Array[i];
}

void merge_sort(int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge_arrays(low,mid,high);
    }
    else return;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&Array[i]);
    merge_sort(0,n-1);

    for(int i=0;i<n;i++) printf("%d ",Array[i]);

    return 0;
}
