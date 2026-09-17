#Largest Element in List

def largestElement(nums):
    target = nums[0]
    for n in nums:
        if target < n:
            target = n

    return target

nums = [3,2,5,2,7,6,8,1,9,4,6,10]
result = largestElement(nums)
print(result)

def largestElement(nums):
    nums.sort()
    print(nums[len(nums)-1])
