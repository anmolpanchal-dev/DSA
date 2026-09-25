# Find longest Subarray with sum k
nums = [1,2,3,2,1,-1,1,0,0,0,0,1,4,3,2,5,4,3,2,6,5,5,4,3,2,4,5,8]
def longestSubarray(nums, target):
    maxLength = 0
    sum = 0
    left = 0
    for right in range(len(nums)):
        sum += nums[right]
        while sum > target:
            sum -= nums[left]
            left += 1
        if sum == target:
            maxLength = max(maxLength, right-left+1 )
    return maxLength


print(longestSubarray(nums, 2))
        





def bruteForce(nums, target):
    sum = 0
    maxLength = 0
    for i in range(len(nums)):
        sum = 0
        for j in range(i, len(nums)):
            sum += nums[j]
            if sum == target:
                maxLength = max(maxLength, j-i+1)

    return maxLength

print(bruteForce(nums,2))

                