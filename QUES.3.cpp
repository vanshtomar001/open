#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String"<<endl;
    cin>>s;
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
    return 0;
}
