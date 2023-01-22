#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int>p;
    
    p.push(3);
    p.push(2);
    p.push(100);
    p.push(1);

    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }

    return 0;
}