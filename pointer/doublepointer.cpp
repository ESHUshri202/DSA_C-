using namespace std;
#include<bits/stdc++.h>
void update(int **p){
    // p = p+1; // No change 

    // *p = *p +1; // Changed

    // **p = **p +1; // Changed
}
int main(){
    
    int i =  5 ;
    int *ptr = &i;
    int **ptr2 = &ptr;

    //print value at ptr
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<ptr2<<endl;
    cout<<"print the value of i   "<<i<<endl;
    cout<<"printing the value at ptr   "<<*ptr<<endl;
    cout<<"printing the value at ptr2  "<<**ptr2<<endl;

    
    return 0;
}