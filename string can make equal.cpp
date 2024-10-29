#include <bits/stdc++.h>
using namespace std;

bool Tahmid(string a, string b, int n)
{
	vector<char> A, B;

	for (int i = 0; i < n; i++)
	{
		if (a[i]!= b[i])
		{
			A.push_back(a[i]);
			B.push_back(b[i]);
		}
	}

	if (A.size() == B.size() and
		B.size() == 0)
		return true;

	if (A.size() == B.size() and
		B.size() == 2)
	{
		if (A[0] == A[1] and B[0] == B[1])
			return true;
	}
	return false;
}

int main()
{
    int t;cin>>t;

    while(t--){

	string s1,s2;cin>>s1>>s2;

	if (Tahmid(s1, s2, s1.size()))

	cout<<"YES"<<endl;

	else

	cout<<"NO"<<endl;

    }
    return 0;
}

