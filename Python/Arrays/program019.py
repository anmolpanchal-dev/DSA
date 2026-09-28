# Two Sum
nums = [1,2,3,4,5,6,7,8,9,10]
def twoSum(nums, target):
    left = 0
    right = len(nums)-1
    while left < right:
        sum = nums[left] + nums[right]
        if sum == target:
            return left, right
        elif sum < target:
            left += 1
        else:
            right -= 1
    return -1

print(twoSum(nums, 19))


def threeSum(nums, target):
    for i in range(0,len(nums)-2):
        left = i+1
        right = len(nums)-1
        while left < right:
            sum = nums[i] + nums[left] +nums[right]
            if sum == target:
                return i, left, right
            elif sum < target:
                left+=1
            else:
                right-=1
    return -1

print(threeSum(nums, 24))



nums2 = [1,3,2,4,2,5,4,6,5,7,8,9,0,5,5,4,43,45,24,24,67,89,87,65,434,545,67,890,98,76,54,32,1]
# two sum for unsorted array
def twoSumUnsorted(nums, target):
    mp = {}
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in mp:
            return mp[complement], i
        mp[nums[i]] = i
    return -1

print(twoSumUnsorted(nums2, 50))