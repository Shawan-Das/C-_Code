#include<bits/stdc++.h>
  using namespace std;
int main()
{
    int i,j,element, sum=0;
    scanf("%d",&element);

    int m_array[element],
        s_array[element],  s_element=0;

    for(i=0;i<element;i++) scanf("%d",&m_array[i]);
// array input.

    for(i=0;i<element;i++){
        for(j=0;j<element;j++){
            if(m_array[i]!=m_array[j])
                sum=m_array[j]+sum;
        }
      s_array[s_element++]=sum;
             sum=0;
    }
      int minimum=s_array[0];

      for(i=1;i<s_element;i++)
        if(minimum>s_array[i])
        minimum=s_array[i];

       printf("%d ",minimum);
    return 0;
}
