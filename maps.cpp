//Everything about C++ STL MAPS - Part 1 | Competitive Programming Course | Episode 25
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define s second
#define REP(i, a, b) for (int i=a; i<b; i++)
#define ll long long
void print(map<int,string> &m)
{
	cout<<m.size() <<endl;
	for(auto &p : m)   //p is a pair
	{
		cout<<p.f<<" "<<p.s <<endl;
	}
}
int _1()
{
	map <int,string> m ; //maps
	m[1]="abc";  //O(log n) complexity
	m[5]="cdc";
	m[3]="acd";
	m[6]="a";
	m[5]="cde";
	print(m);
}
int _2()
{
	map <int,string> m ; //maps
	m[1]="abc";  //O(log n) complexity
	m[5]="cdc";
	m[3]="acd";
	m[6]="a";
	m[5]="cde";
	print(m); cout<<endl;
	
	auto it=m.find(3) ; // pointing to the map at key 3 if it exists , otherwise points to the end of the map
	if (it==m.end()) cout<<"NO VALUE" ;   //m.end() refers to the end of the map
	else cout<<it->f<<" "<<it->s<<endl; ;
	
	if(it!=m.end()) m.erase(it);  //erase 
	print(m); cout<<endl;
	
	m[3]="acd";
	m.clear();       //clear
	print(m); cout<<endl;
}
int lexico()  //print unique strings in lexicographical order
{
	map <string,int> m; //here the key is a string!! integer will be storing the count
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;cin>>s;m[s]++ ;
	}
	for (auto &p : m )
	{
		cout<<p.f<<" "<<p.s<<endl;
	}
	
}
int main()
{
	lexico();
}