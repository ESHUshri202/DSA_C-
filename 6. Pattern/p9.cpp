#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int i = 0;
    int n;
    cin>>n;
	
	int num = n*n;
// 	cout<<"helloworld"<<endl;;
	while(i<=n){
	    int j = 0;
	    int space = n - i;
	    // while(space){
	    //     cout<<" ";
	    //     space--;
	    // }
	    while(j<=i){
	        cout<<num<<" ";
	        j++;
            num--;       
	    }
	    cout<<endl;
	    i++;
	}
	return 0;

}
