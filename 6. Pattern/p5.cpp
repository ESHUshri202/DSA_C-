#include<bits/stdc++.h>
using namespace std;

// This pattern is a little bit tricky. The first row will have 'A' and the last row will have 'A' + n - 1.
// The second row will have 'A' + 1 and the second last row will have 'A' + n - 2. So the pattern is like this: 
// A + 4 - 1 = E
// A + 4 - 2 = D
// A + 4 - 3 = C
// A + 4 - 4 = B
// A + 4 - 5 = A
// So the pattern is like this:
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char start = 'A' + n-row;
        while (col<=row)
        {
            cout<<start;
            start = start + 1;
            col=col+1;
        }
        
        cout<<endl;
        row=row+1;
        
    }
    
}