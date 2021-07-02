#include<bits/stdc++.h>
  using namespace std;

  int main()
  {
      char str_1[1000], str_2[1000];

      scanf("%s",str_1);
   strlwr(str_1);
    strcpy(str_2,str_1);
    strrev(str_2);

    if(strcmp(str_1,str_2)==0)
        printf("Palindrome");

    else printf("Not Palindrome");

    return 0;
  }
