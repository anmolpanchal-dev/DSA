# Variable Window 
# Maximum length of Subarray
nums = [1,1,1,0,0,0,0,0,0,0,1,1,2,2,2]

def variableWindow(nums, target):
    low = 0
    total = 0
    maxLength = 0
    for high in range(len(nums)):
        total += nums[high]
        while total > target:
            total -= nums[low]
            low += 1
        maxLength = max(maxLength, high-low+1)
    return maxLength


print(variableWindow(nums,5))
