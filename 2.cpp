#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> p,temp;
    
    p.push(3);
    p.push(2);
    p.push(100);
    p.push(1);
    int n;
   
    cout<<"enter the element you want to delete : "<<endl;
    cin>>n;

    while(!p.empty())
    {
        if(p.top()!=n)
        cout<<p.top()<<" ";
        if(p.top()!=n)
        temp.push(p.top());
        p.pop();
    }

    while(!temp.empty())
    {
        p.push(temp.top());
        temp.pop();
    }

    
    
    cout<<endl;
    cout<<"size of priority queue is : "<<p.size()<<endl;

    int sum=0;
    while(!p.empty())
    {
        sum+=p.top();
        p.pop();
    }
    cout<<"sum of all element is : "<<sum<<endl;

    


    return 0;
}