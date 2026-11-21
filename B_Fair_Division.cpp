#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < v.size(); i++)
        {
            cin >> v[i];
        }
        int count1 = 0, count2 = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
                count1++;
            else
                count2++;
        }
        int sum = count1 + (count2 * 2);
        if (sum % 2 != 0)
            cout << "NO" << endl;

        else if ((count1 == 0) && count2 % 2 != 0)
            cout << "NO" << endl;
        else if ((count2 == 0) && count1 % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}