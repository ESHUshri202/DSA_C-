#include<bits/stdc++.h>
using namespace std;
void fun(int a[]){
        cout<<a[0]<<" ";

}
void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}
int main(){

    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    //cout<<*ptr << " "<< f << " "<<p;
  //  int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
//    cout<<a<<" "<< b;
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout<<*ptr<<endl;

    // int a = 7;
    // int *c = &a;
    // c = c+1;
    // cout<<a << " "<< *c<<endl;

    // int a[] = {1,2,3,4};
    // cout<< *(a)<< " "<< *(a+1);

    // int arr[] = {4,5,6,7};
    // int *ptr = (arr+1);
    // cout<<*arr + 9;
    // char arr[20];
    // int i ;
    // for(i = 0; i< 10 ; i++){
    //     *(arr+ i) = 65 + i;

    // }
    // *(arr+i) = '\0';
    // cout<<arr;
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout<<ptr;
    // float arr[5] = {12.5
    
    // int a[] = {1,2,3,4};
    // fun(a+1);
    // cout<<a[0];

    char *x = "ninjaquiz";
    char *y = "codingninja";
    char *t;
    swap(x,y);
    cout<<x<<" "<<y;
    t = x;
    x = y;
    y = x;
    cout<<" "<<x<<" "<<y;
}
