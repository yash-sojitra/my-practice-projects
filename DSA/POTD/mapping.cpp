#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10;
    int arr[] = {5,4,4,3,3,3,7,7,7};

    map<int, int> freq;
        
        for(int i = 0; i<n; i++)
        {
            if(freq.find(arr[i]) == freq.end())
            {
                freq[arr[i]] = 1;
            }
            else
            {
                freq[arr[i]]++;
            }
        }

    cout<<"frequency mapping of the given array"<<endl;
    map<int, int>::iterator it;
    map<int, int>::iterator it2;
    bool fb = true;
    for (it = freq.begin(); it!=freq.end();it++)
    {
        for (it2 = freq.begin(); it2!=freq.end(); it2++)
        {
            if (it->first == it2->first)
                continue;
            else if (it->second == it2->second)
            {
                fb = false;
                break;
            }      
        }
        if (fb == false)
            break;
    }
    cout<<fb<<endl;    
    return 0;
}