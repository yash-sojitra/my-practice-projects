#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int n,i,temp;
        char str[1000000];
        char ans[1000000];
	    cin>>n;
	    cin>>str;
	    for(int j = 0; j < n; j++){
	        ans[j] = '0';
	    }
        ans[n] = '\0';
	    for(i = 0; i<n; i++){
	        if(str[i] == '1'){
	            ans[i] = '1';
	            break;
	        }
	    }
        cout<<ans<<endl;
	}
	return 0;
}
