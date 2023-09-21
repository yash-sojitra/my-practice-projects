#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int point=0;
        for(int i=0;i<10;i++){
            string y;
            cin>>y;
            for(int j=0;j<10;j++){
                if(y[j]=='x' || y[j]=='X'){
                    if(j<5){
                        point=point+(j+1);
                    }
                    else{
                        point=point+(10-j);
                    }
                }
            }
        }
        cout<<point<<endl;
    }
}