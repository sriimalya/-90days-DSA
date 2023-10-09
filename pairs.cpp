#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first;

    pair<int, string> r;
    r = make_pair(1, "hello");
    cout << r.second << endl;

    pair<int, int> p1 = p;
    p1.first = 3;
    p1.second = 5;
    cout << "P1.first=" << p1.first << " P.first=" << p.first << endl; // value of p will not change

    pair<int, int> &p2 = p;
    p2.first = 3;
    p2.second = 5;
    cout << "P2.first=" << p2.first << " P.first=" << p.first << endl; // value of p will change

    // some operations using pairs
    // say a[3]={1,2,3} & b[3]={2,3,4}; there's a rel b/w elements at same index of a[] and b[]
    // using pairs will make it easy to perform operation on these arrays
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
    swap(p_arr[0], p_arr[2]);
    cout<<"After Swap";
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << " " << p_arr[i].second << endl;
    }
}
int main()
{
    explainPairs();
}