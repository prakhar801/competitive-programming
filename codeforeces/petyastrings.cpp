#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(), :: tolower);
    transform(s2.begin(),s2.end(),s2.begin(), :: tolower);
    // bool ans=lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end());
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2)
        cout<<0;
    else if(s1>s2)
        cout<<1;
    else 
         cout<<-1;
    
    return 0;
}