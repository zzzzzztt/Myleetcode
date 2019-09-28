#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	vector<int> res;
	unordered_map<int, int> indexMap;
	for (int i=0;i<(int)nums.size();i++)
	{
		indexMap.insert({nums[i], i});
	}
	
	for (int i=0;i<(int)nums.size();i++)
	{
		int othervalue = target-nums[i];
		if (indexMap.find(othervalue)!=indexMap.end())
		{
			if(i==indexMap[othervalue])continue;
			res.push_back(i);
			res.push_back(indexMap[othervalue]);
			break;
		}
	}
	return res;
};

int main()
{
	vector<int> nums = {2,7,11,15};
	int target = 9;
	auto res = twoSum(nums, target);
	for (auto i: res)
		printf("%d", i);
};

