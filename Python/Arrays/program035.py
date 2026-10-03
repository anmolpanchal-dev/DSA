# find shortest subarray sum equal or smaller than the target
nums = [1,2,3,4,5]

def shortestSubarray(nums, k):

    low = 0
    total = 0
    minLength = float("inf")

    for high in range(len(nums)):

        total += nums[high]

        while total >= k:
            if total == k:
                minLength = min(minLength, high - low + 1)
            total -= nums[low]
            low += 1

    return minLength


print(shortestSubarray(nums, 9))
        