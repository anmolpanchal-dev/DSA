# variable Window
#Return minimum length of subarray that have the sum equal or greater than target

nums = [1,2,3,2,1,3,4,2,3,5,4,3,5,6]
def minimumLength(nums, target):
    low = 0
    total = 0
    minLength = float('inf')
    for high in range(len(nums)):
        total += nums[high]
        while total >= target:
            minLength = min(minLength, high-low+1)
            total -= nums[low]
            low+=1
    return minLength

print(minimumLength(nums,6))