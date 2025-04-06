
#include <bits/stdc++.h>
using namespace std;
void rotate(int &b, int k) {
        int len = b.size();
        k %= len;
        rev(b , 0 ,len -1 );
        rev(b ,0 ,k-1);
        rev(b , k , len -1 );
}
void rev(int b[], int i , int r){
        while(i< r){
            swap(b[i] ,b[r]);
            i++ ;
            j--;
        }
}
    

int main()
{
	//declare 
	int number[15];
	//accessing array
	cout<<number[20]<<endl;
	cout<<"Everything is Fine "<<endl;

	return 0;
}
