#include<bits/stdc++.h>
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
}