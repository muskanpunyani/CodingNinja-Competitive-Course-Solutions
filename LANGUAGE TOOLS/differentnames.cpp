#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string> v;
    while(cin>>s)
    {
        v.push_back(s);
    }
    map<string,int> m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]=m[v[i]]+1;
    }
    map<string,int>::iterator it;
    int count=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if((it->second)>1)
        {
            cout<<(it->first)<<" "<<it->second<<endl;
            count++;
        }
        
    }
    if(count==0)
    {
        cout<<-1<<endl;
    }
      
	return 0;
}
