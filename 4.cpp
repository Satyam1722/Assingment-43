#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> p,p1;
    
    p.push(3);
    p.push(2);
    p.push(100);
    p.push(1);

    p1.push(1);
    p1.push(89);
    p1.push(87);
    p1.push(10);

    p.swap(p1);

    cout<<"element of p are : "<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }

    cout<<"element of p1 are : "<<endl;
    while(!p1.empty())
    {
        cout<<p1.top()<<endl;
        p1.pop();
    }

    return 0;
}