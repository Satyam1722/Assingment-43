#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> p,p1,p2;
    
    p.push(3);
    p.push(2);
    p.push(100);
    p.push(1);

    p1.push(1);
    p1.push(89);
    p1.push(87);
    p1.push(10);


    while(!p.empty())
    {
        p2.push(p.top());
        p.pop();
    }


    while(!p1.empty())
    {
        p2.push(p1.top());
        p1.pop();
    }

    while(!p2.empty())
    {
        cout<<p2.top()<<" ";
        p2.pop();
    }

    return 0;
}