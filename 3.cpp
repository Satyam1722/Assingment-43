#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int,vector<int>,greater<int>>p;
    
    p.push(3);
    p.push(2);
    p.push(100);
    p.push(1);
 
    cout<<"minimum element is : "<<p.top()<<endl;

    return 0;
}