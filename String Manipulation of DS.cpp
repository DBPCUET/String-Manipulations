//Palindrome
/*#include<bits/stdc++.h>
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

  /*	for(int i=0,j=(s.size()-1) ; i<=j ; i++,j--)
	{
		if(s[i]!=s[j])
		{
			cout<<"Not Palindrome"<<endl;
			return 0;
		}
	}
	cout<<"Palindrome"<<endl;
}
*/

//Checking first and last occuring character
/*#include<bits/stdc++.h>
long long cnt[100000000]={'\0'};
using namespace std;
int main()
{
	string s,sub;
	getline(cin,s);
	for(int i=0 ; i<s.size() ; i++)
	{
		cnt[(int)s[i]]++;
	}
	int first=1,last;
	for(int i=0 ; i<s.size() ; i++)
	{
		if(cnt[(int)s[i]]==1)
		{
			if(first==1)
			{
				first=i;
			}
			last=i;
		}
	}
	cout << s[first] << " "<< first+1 << endl ;
	cout << s[last] << " " << last+1 << endl;
}*/

//Substring
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string sub;
	getline(cin,sub);
	bool issub=false;
	for(int i=0 ; i<=(s.size()-sub.size()) ; i++)
	{
		bool match=true;
		for(int j=0 ; j<sub.size() ; j++)
		{
			if(s[i+j]!=sub[j])
			{
				match=false;
				break;
			}
		}
		if(match)
		{
			issub=true;
		}
	}
	if(issub)
	{
		cout<<"Yes"<<" ";
	}
	else
	{
		cout<<"No"<<" ";
	}
}*/


/*#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1 = "hello world";
    string str2 = "world";
    bool isSubstring = false;
    for (int i = 0; i <= str1.length() - str2.length(); i++) {
        bool match = true;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i+j] != str2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            isSubstring = true;
            break;
        }
    }
    if (isSubstring) {
        cout << str2 << " is a substring of " << str1 << std::endl;
    } else {
        cout << str2 << " is not a substring of " << str1 << std::endl;
    }
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	while(cin>>t)
	{
	int n;
	cin >> n ;
	int ara[n] ;
	for(int i=0 ; i<n ; i++)
	{
		cin >> ara[i];
	}
	int cnt=0; 
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(ara[i]<ara[j])
			{
				swap(ara[i],ara[j]);
				cnt++;
			}
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		cout<<ara[i]<<" ";
	}
	}
}