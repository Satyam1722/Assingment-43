#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"enter the number of element : ";
    cin>>n;
    cout<<"enter the value of k : ";
    cin>>k;

    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    priority_queue <int>p;

    for(int i=0;i<n;i++)
    p.push(a[i]);


    int sum=0,count=0;

    while(!p.empty())
    {
        if(sum<k)
        {
            cout<<sum<<endl;
            sum+=p.top();
            count++;
            p.pop();
        }
        else
        {
            sum=0;
        break;
        }
    }

    if(sum==0)
    cout<<count<<endl;
    else
    cout<<-1;
    return 0;
    

}