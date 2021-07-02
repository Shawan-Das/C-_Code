#include<bits/stdc++.h>
using namespace std;

void TOH(int disk, char A, char B, char C)
{
    if(disk==1) printf("Move Disk 1 From %c to %c\n",A,C);
    else{
        TOH(disk-1,A,C,B);
        printf("Move Disk %d From %c to %c\n",disk,A,C);
        TOH(disk-1,B,A,C);
    }
}

int main()
{
    int number; char source,medium,target;
    scanf("%d %c %c %c",&number,&source,&medium,&target);
    TOH(number,source,medium,target);
    return 0;
}
