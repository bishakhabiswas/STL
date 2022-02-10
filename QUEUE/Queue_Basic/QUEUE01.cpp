#include<bits/stdc++.h>
///#include<queue>
using namespace std;

///QUEUE ER SOB ELEMENT TRAVERSE KORAR JONNO
void show( queue <string> queueTemp)
{
    while(!queueTemp.empty())
    {
        cout<<queueTemp.front()<<endl;
        queueTemp.pop();
    }
}

void show2( queue <int> queueTemp)
{
    while(!queueTemp.empty())
    {
        cout<<queueTemp.front()<<" ";
        queueTemp.pop();
    }
}

int main()
{
    queue<string>q;

    q.push("Shima");
      q.push("Rima");
        q.push("Nima");
      ///  q.pop(); ///pop er karone ekti element delete hoe jabe
    /* cout<< q.size()<<endl;///pop er karone size 3 theke 2 hoe jabe
      cout<<  q.front()<<endl;///front a Shime theke Rima hoe jabe
       cout<< q.back()<<endl;///back a Nima
       cout<<q.empty()<<endl;*/


       queue<int>q2;
       for(int i=0;i<=100;i++)
       q2.push(i);


       show(q);
       show2(q2);
        return 0;
}
