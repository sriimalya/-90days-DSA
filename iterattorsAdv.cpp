// Auto and Range based loops | CP COURSE | EP 24
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define REP(i, a, b) for (int i=a; i<b; i++)
#define ll long long
int _1()
{
	int n; cin>>n;	vector <int> v; 
	REP(i,0,n) {
		int x; cin>>x; v.pb(x);
	}
	for(int value : v)  //value is a COPY of the elements
	{
		value++ ;
	}
	for(int value : v)  //value is a COPY of the elements
	{
		cout<<value<<" ";
	}
	cout<<endl;
	for(int &value : v)  //value is the ACTUAL value of the elements
	{
		value++ ;
	}
	for(int value : v)  
	{
		cout<<value<<" ";
	}
	cout<<endl;	
}

int _2()
{
	int n; cin>>n;	vector <pair<int,int> > v; //vector of pairs
	REP(i,0,n) {
		int x,y; cin>>x>>y; v.pb({x,y});
	}
	
	for(auto it=v.begin();it!=v.end();it++)
	cout<<(*it).f<<" "<<(*it).s<<endl;
	
	cout<<endl;
	
	for(auto &value : v)          //This is much more concise
	cout<<value.f<<" "<<value.s<<endl ;
	
	
	cout<<endl;
}
int main()
{
	_2();
}