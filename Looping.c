#include<stdio.h>
//int main()
//{
//    ///forLoop, WhileLoop
////    initialization, condition, increment/decrement
////
////    1+4+6+8+10+.....+n
////    n+.....+5+4+3+2+1
//
//     //i=i+1; i+=1; i++/i--
//     int i,n;
////     5*1=5
////     5*2=10
////     5*3=15
////     5*4=20
////     5*5=25
//              //i=1       i=1->3->5->7->9->11
//           scanf("%d",&n);
//           i=1;
//     for(i=1; ;i++)
//     {
//        if(i<=10)
//            {
//         printf("%d*%d=%d\n",n,i,i*n);//5->10->15->20->25
//        }
//        else {
//            break;
//        }
//     }
//
////     i=1;
////     while(i<=10)
////     {
////         printf("%d*%d=%d\n",n,i,i*n);
////
////         i++;//i+=1;
////     }
//
//x=2  ///3->5->7->9->11->13
//
//}
int main()
{
    int x;
    scanf("%d",&x);
    int i,flag=0;
    for(i=x; ;i++)
    {
        if(i%2==1){
        printf("%d\n",i);
        flag++;
        }
        if(flag==6)
        {
            break;
        }
    }

}
