//// Contains Duplicate : return T/F the duplicate within k elements.
//// Tags:  [Array] [Hash table]
//// Level: [Easy]
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// 01. my code O(n): hash table; Don't understand.....
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
    // set is ordered automatically 
	set<long long> window; 
	for (int i = 0; i < nums.size(); ++i) {
        // keep the set contains nums i j at most k
		if (i > k && i - k - 1 < nums.size()) window.erase(nums[i - k - 1]);
        // |x - nums[i]| <= t  ==> -t <= x - nums[i] <= t;
        // x-nums[i] >= -t ==> x >= nums[i]-t
		set<long long>::iterator it = window.lower_bound((long long)nums[i] - t);
        // x - nums[i] <= t ==> |x - nums[i]| <= t
		if (it != window.cend() && *it - nums[i] <= t) return true;
		window.insert(nums[i]);
	}
	return false;
}

int main(){

    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(0);
    input.push_back(2);

    cout<<"Contains duplicate : "<<containsNearbyAlmostDuplicate(input, 1, 4)<<endl;

}
