#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> hit;
        char temp;
        int score = 0;
        for (int i = 1; i <= 10; i++)
        {
            for (size_t j = 1; j <= 10; j++)
            {
                cin >> temp;
                if (temp == 'X')
                {
                    hit.push_back({i, j});
                }
            }
        }
        for (int k = 0; k < hit.size(); k++)
        {
            int i = hit[k].first;
            int j = hit[k].second;
            if (i == j)
            {
                i < 5 ? score = i : score = 10 - i + 1;
            }
            else if(){
                
            }
        }
    }
    return 0;
}