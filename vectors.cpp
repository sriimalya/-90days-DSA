#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    cout << "size of vector= " << v.size() << endl; // size()->O(1)
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[10];     // fixed size
    vector<int> v; // size can be modified,continuous memory allocation,hence, size limts upto 10^5 to 10^7
    int n;
    cin >> n;
    for (int i=0; i < n; ++i)
    {
        cout<<"Enter element: ";
        int x;
        cin >> x;
        v.push_back(x); // O(1)
    }
    printVector(v);

    vector <int> v1(5); //by default all values are 0
    printVector(v1);
}