#include<bits/stdc++.h>
///include<stack>
using namespace std;
int main()
{
    stack <int> st;
    st.push(12);
    st.push(1);
    st.push(21); //top value
  //  cout<<st.top()<<endl;
  //  st.pop(); //to erase top value
   //  cout<<st.top()<<endl;

     while(!st.empty())
     {
         int x;
         x=st.top();
         cout<<x<<endl;
         st.pop();
     }
     return 0;


}
