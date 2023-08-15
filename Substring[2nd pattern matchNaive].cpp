#include<bits/stdc++.h>
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
}

//or

#include <bits/stdc++.h>
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
}
