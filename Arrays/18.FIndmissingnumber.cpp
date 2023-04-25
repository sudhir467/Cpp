/*This program is to find the missing number in array*/

#include <bits/stdc++.h>
using namespace std;

int missingnumber(vector<int> a, int n)
{
    int sum = n * (n + 1) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s2 += a[i];
    }

    int missingnum = sum - s2;
    return missingnum;
}

/*
int missingnumber(vector<int> a, int n)
{
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}*/

int main()
{
    int n = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingnumber(a, n);
    cout << "The missing number is:" << ans << endl;
    return 0;
}