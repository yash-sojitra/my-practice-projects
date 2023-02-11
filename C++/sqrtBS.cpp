#include <bits/stdc++.h> 

using namespace std;

int sqrtN(long long int N)
{
    int s = 0;
    int e = N-1;
    int ans;

    int mid = s+(e-s)/2;

    while(s<=e){
        if((mid*mid)==N){
            return mid;
        }
        else if((mid*mid)<N){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

double morePrescision(int n,int prescision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < prescision; i++)
    {
        factor = factor/10;

        for(double j =ans; j*j < n; j = j+factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int num,prescision;
    cout<<"enter a positive number"<<endl;
    cin>>num;
    cout<<"enter prescision"<<endl;
    cin>>prescision;;

    int tempSol = sqrtN(num);

    cout<<morePrescision(num,prescision,tempSol)<<endl;
    return 0;
}