#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int i = 1;
    int n;
    cin>>n;
	
	int num = n*n;
// 	cout<<"helloworld"<<endl;;
	while(i<=n){
	    int j = 1;
	    int space = n - i;
	    while(space){
	        cout<<" ";
	        space--;
	    }
	    while(j<i){
	        cout<<"*"<<" ";
	        j++;
	    }
	    cout<<endl;
	    i++;
	}
	return 0;

}
