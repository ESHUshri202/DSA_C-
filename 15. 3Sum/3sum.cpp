#include<bits/stdc++.h>

using namespace std;
// creating vector function
vector<vector<int>> threeSum(vector<int> &nums){
    int target = 0 ;
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for(int i = 0; i <nums.size() ; i++){
        int j = i+1;
        int k = nums.size() - 1; 
        while( j < k){
            int sum = nums[i] + nums[j] + nums[k] ; 
            if(sum == target)
            {
                s.insert({nums[i],nums[j],nums[k]});   // insert all the triplet having some zero where i != j , i != k & j != k. 
                j++;
                k--;
            }
            else if(sum < target)
            {
                j++;
            }
            else 
            {
                k--;
            }
        }
    }
    for(auto triplets : s)
    {
        output.push_back(triplets);
    }
    return output;
}
int main()
{
    std::vector<int> nums[100];
    int n ;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<endl<<"Enter the set of number for getting the sum of zero (Triplet)"<<endl;
    for(int i =0 ; i< n ; i++ )
    {
        cin>>nums[i];
    }
    for(int i =0 ; i< n ; i++ )
    {
        cout<<nums[i]<<" ";
    }
    // int *ptr = &nums;
    cout<<threeSum(sdt::vector<int>(nums));
    return 0;
}