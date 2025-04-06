// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;
#include<math.h>

// Driver program to test above function
int main()
{
	int n;
	cin>>n;
	int ans=0,i=0;
	while(n != 0){
		int bit = n % 10;
		if(bit == 1 ){
			ans = ans + pow(2,i);

		}
		n = n/10;
		i++;
	}
	cout<<ans<<endl;
}
