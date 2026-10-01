# Sliding Window return subarray with highest sum of K size 
nums = [1,3,2,6,5,7,6,7,8,7,6,4,5,5,6,7,8,9,2,43,5,5]

def highestSum(nums, k):
    if len(nums) < k:
        return -1
    currentSum = 0
    for i in range(0, k):
        currentSum += nums[i]
    low = 0
    high = k
    maxSum = currentSum
    while high < len(nums):
        currentSum = currentSum - nums[low] + nums[high]
        maxSum = max(maxSum,currentSum)
        low+=1
        high+=1
    return maxSum

print(highestSum(nums,3))



# return the subarray also 
def highestSum(nums, k):
    if len(nums) < k:
        return -1
    currentSum = 0
    for i in range(0, k):
        currentSum += nums[i]
    low = 0
    high = k
    maxSum = currentSum
    bestStart = 0
    while high < len(nums):
        currentSum = currentSum - nums[low] + nums[high]
        if currentSum > maxSum:
            maxSum = currentSum
            bestStart = low+1
        low+=1
        high+=1
    return nums[bestStart:bestStart+k],maxSum

print(highestSum(nums,3))
