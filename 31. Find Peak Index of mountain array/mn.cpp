#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int find_pivot(vector<int> v)
	{
		int s = 0, e = v.size() - 1;
		int mid = (s + e) / 2;
		while (s < e)
		{
			if (v[mid] < v[mid + 1])
				s = mid + 1;
			else
				e = mid;

			mid = (s + e) / 2;
		}
		return s;
	}
	int peakIndexInMountainArray(vector<int> &arr)
	{
		return find_pivot(arr);
	}
};

int main()
{
	Solution s;
	vector<int> arr = {0, 2, 1, 0};
	cout << s.peakIndexInMountainArray(arr) << endl; // Output: 1
	return 0;
}