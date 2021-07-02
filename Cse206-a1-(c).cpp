#include<bits/stdc++.h>
  using namespace std;
int main()
{
    int s1,s2,i,j,flag=0; // flag variable as an indicator.
    char str1[1000], str2[1000];
//string input.
    scanf("%s",str1);    scanf("%s",str2);
     s1=strlen(str1);     s2=strlen(str2); //length of given string

     if(s1==s2)
        {
            for(j=0;j<s1;j++)
            for(i=0;i<s1-1;i++)
            {
                if(str1[i]>str1[i+1]) swap(str1[i+1],str1[i]);
                if(str2[i]>str2[i+1]) swap(str2[i+1],str2[i]);
               // rearrange of string element in ascending order.
            } // rearrange of string elements.

             if(strcmp(str1,str2)==0)
                  printf("Equivalent");
             else printf("Not Equivalent");

        }
        else printf("Not Equivalent");

        return 0;
}
