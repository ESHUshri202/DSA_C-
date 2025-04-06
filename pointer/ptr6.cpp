#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p  = &p;

    cout<<i<<" "<<p<< " "<<endl;

}