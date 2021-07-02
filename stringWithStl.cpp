#include<bits/stdc++.h>
using namespace std;
int main()
{

//    1) Write a program to print a string entered by user.
       string str;
    cin>>str;
    cout<<str<<"\n";

//    2) Write a program to print every character of a string entered by user in a new line using loop.
       for(int i;i<str.size();i++) cout<<str[i]<<"\n";

                  cout<<"\n\n";
//    3) Write a program to input and display the sentence I love Programming.
    getchar();
    getline(cin,str);
    cout<<str<<"\n\n";

//    4) Write a program to find the length of the string "refrigerator".
    str ="refrigerator";
    cout<<"Size of String: "<<str.size()<<"\n\n";


//    5) Write a program to find whether a string is a Palindrome or not.
    cin>>str;
  string str2=str; reverse(str2.begin(),str2.end());
    if(str==str2 )cout<<"palindrome\n\n";
    else cout<<"not palindrome\n\n";


//    6) Write a program to enter a string s1 and copy it to another string s2.
    string s1,s2;
    cin>>s1;
    s1=s2;
    cout<<s1<<s2<<"\n\n";

//    7) Write a program to compare if the two strings entered by user are equal or not.
    cin>>s1>>s2;
    if(s1==s2) cout<<"equal\n\n";
    else       cout<<"not equal\n\n";


//    8) Write a program to check if the letter 'e' is present in the word 'Umbrella'.
    str="Umbrella";
    int flag = str.find("e");
    if(flag!=-1) cout<<"present\n\n";
    else cout<<"not present\n\n";

//    9) Write a program to check if the word 'orange' is present in the "This is orange juice".
    str="This is orange juice";
    flag = str.find("orange");
    if(flag==-1) cout<<"not found\n\n";
    else cout<<"found\n\n";


//    10) Write a program to find the first and the last occurrence of the letter 'o' and character ',' in "Hello, World".
    str="Hello, World";
    cout<<"Output of problem 10: \n";
    cout<<"first occurrence of 'o':"<<str.find("o")<<" last occurrence of 'o':"<<str.rfind("o");
    cout<<"first occurrence of ',':"<<str.find(",")<<" last occurrence of ','"<<str.rfind(",");
     cout<<"\n\n";

//    11) Write the string after the first occurrence of ',' and the string after the last occurrence of ',' in the string "Hello, Good, Morning".
    str="Hello, Good, Morning";
   int flag1=str.find(",");
   int flag2=str.rfind(",");
   string str1= str; str1.erase(0,flag1+1);
    str2= str; str2.erase(0,flag2+1);
   cout<<str<<"\n"<<str1<<"\n"<<str2<<"\n\n";


//    12) Write a program that takes your full name as input and displays the abbreviations of the
//    first and middle names except the last name which is displayed as it is. For example, if
//    your name is Robert Brett Roser, then the output should be R.B.Roser.
    getline(cin,str); int i=0;
    while(1){
         int flag=str.find(" ");
         if(flag==-1) break;
         else{
         str.replace(i+1,flag-i,".");
         i=i+2;
         }
     }
              cout<<str<<"\n\n";


//    13) Write a program to find the number of vowels, consonants, digits and white space
//    characters in a string.
        int s=0,c=0,n=0,v=0;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);

    for(int i=0;i<str.size();i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U') v++;
       else if(str[i]==' ') s++;
    else if(str[i]>='A' && str[i]<='Z') c++;
       else n++;
    }

    cout<<"Vowel:"<<v<<" Consonant:"<<c<<" Space:"<<s<<" digit:"<<n<<"\n\n";


//    14) Write a program to delete all consonants from the string "Hello, have a good day".

         str="Hello, have a good day";
     i=0;
    while(i<str.size())
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U' || str[i]==','
        || str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' || str[i]==' ')
           i++;
        else str.erase(i,1);
    }
    cout<<str<<"\n\n";


//    15) Input a string of alphabets. Find out the number of occurrence of all alphabets in that
//    string. Find out the alphabet with maximum occurrence.
       getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    sort(str.begin(),str.end());
     flag=str.rfind(" ");
    str.erase(0,flag+1);
      str1=str; char ch=str1[0]; n=0;
      while(str1.size()!=0)
      {   int i=0;
          int x=str1.rfind(str1[0]);
          cout<<str1[0]<<":"<<x+1<<"\n";
          if(n<x+1){
            ch=str1[0]; n=x+1;
          }
          str1.erase(0,x+1);
      }
      cout<<"Max Occurrence is in "<<ch<<":"<<n<<"\n";

    return 0;
}













