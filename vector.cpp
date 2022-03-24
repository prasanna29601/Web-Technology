#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vet;
	vet.push_back(10);
	vet.push_back(20);
	for(vector<int>::iterator it=vet.begin();it!=vet.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto it=vet.begin();it!=vet.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<mat.size();i++)
	{
		for(int j=0;j<mat[i].size();j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<pair<int,int>>p;
	p.push_back({1,2});
	p.push_back({3,4});
	for(auto it:p)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
	sort(vet.begin(),vet.end(),greater<int>())
}