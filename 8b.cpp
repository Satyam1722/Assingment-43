#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    
    int n;
    cout<<"enter the number of element : ";
    cin>>n;

    priority_queue <int>p;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        p.push(a);
    }

 while(v.size()>1)
 {
    int a=p.top();
    p.pop();
    int b=p.top();

    int k=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==a||k==1){
        v[i]=v[i+1];
        k=1;
        }
        else
        continue;
    }
    cout<<endl;
    v.pop_back();

    k=0;    
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==b||k==1){
        v[i]=v[i+1];
        k=1;
        }
        else
        continue;
    }

    v.pop_back();
    v.push_back(abs(a-b));
 }
   
   if(v.size()==1)
   {
    cout<<v[0]<<endl;
   }

    return 0;
    
}