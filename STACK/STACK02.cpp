#include<bits/stdc++.h>
using namespace std;
void show(stack <int> st)
{
    stack <int> st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.top()<<endl;
        st2.pop();
    }
}
int main()
{
    stack <int> st;
    for(int i=1;i<=10;i++)
        st.push(i);
        show(st);
}
