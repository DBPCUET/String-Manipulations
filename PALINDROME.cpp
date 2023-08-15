#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s2="\0";
	getline(cin,s);
/*	for(int i=(s.size()-1);i>=0;i--)
	{
		s2+=s[i];
	}
	(s==s2)?cout<<"Palindrome"<<endl:cout<<"Not Palindrome"<<endl;*/

 	for(int i=0,j=(s.size()-1) ; i<=j ; i++,j--)
	{
		if(s[i]!=s[j])
		{
			cout<<"Not Palindrome"<<endl;
			return 0;
		}
	}
	cout<<"Palindrome"<<endl;
}