# Two Sum
def TwoSum(nums, target):
    nums.sort()
    left = 0
    right = len(nums)-1
    while left < right:
        sum = nums[left] + nums[right]
        if sum == target:
            return left, right
        elif sum < target:
            left+=1
        else:
            right -= 1
    return -1

nums = [1,2,1,3,4,5,4,6,3,6,4,7,8,6,7,8,9,0]
print(TwoSum(nums, 10))



def unsortedTwoSum(nums, target):
    mp = {}
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in mp:
            return mp[complement], i
        mp[nums[i]] = i

    return -1


nums = [1,2,1,3,4,5,4,3,6,4,7,8,6,7,8,9,0]
print(unsortedTwoSum(nums, 10))