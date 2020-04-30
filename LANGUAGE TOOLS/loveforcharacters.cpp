/*Love for Characters

Ayush loves the characters ‘a’, ‘s’, and ‘p’. He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’ occurs in the string respectively. Help him find it out.
Input:
First line contains an integer denoting length of the string.
Next line contains the string.
Constraints:
1<=n<=10^5
‘a’<= each character of string <= ‘z’
Output:
Three space separated integers denoting the occurrence of letters ‘a’, ‘s’ and ‘p’ respectively.
Sample Input:
6
aabsas
Sample output:
3 2 0
*/
//code
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
