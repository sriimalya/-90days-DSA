#include <iostream>
using namespace std;
void pattern1(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = n - i - 1; j <= i + n - 1; j++)
        {
            cout << "* ";
        }
        // for (int j = n+i; j <n; j++)
        // {
        //     cout <<"  ";
        // }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 2 * n - (2 + i); j++)
        {
            cout << "* ";
        }
        // for (int j=2*n-(2+i)+1 ; j <n; j++)
        // {
        //     cout <<" ";
        // }
        cout << endl;
    }
}
void pattern9(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (j = 0; j < n / 2 - i; j++)
            {
                cout << " ";
            }
            for (j = n / 2 - i + 1; j <= n / 2 + i - 1; j++)
            {
                cout << "*";
            }
        }
        if (i >= n / 2 + 1)
        {
            for (j = 0; j < (i - n / 2) - 1; j++)
            {
                cout << " ";
            }
            for (j = i - (n / 2); j <= 3 * n / 2 - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {
            for (j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        if (i > n / 2)
        {
            for (j = 0; j <= n - i - 1; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "No. of rows:";
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    pattern10(n);
    return 0;
}