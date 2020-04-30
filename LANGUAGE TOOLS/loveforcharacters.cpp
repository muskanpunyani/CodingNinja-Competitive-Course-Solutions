#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]=m[s[i]]+1;
    }
    map<char,int>::iterator it;
    int  a_value=0;
    int s_value=0;
    int p_value=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->first=='a')
        {
            a_value=it->second;
        }
   else  if(it->first=='s')
        {
            s_value=it->second;
        }
          else if(it->first=='p')
        {
            p_value=it->second;
        }
}
    cout<<a_value<<" "<<s_value<<" "<<p_value<<endl;
    
	return 0;
}
