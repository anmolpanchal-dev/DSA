# check if the given array is sorted or not 

nums = [1,3,2,4,2,5,3,6,4,5,7,6,8,7]
nums1 = [2,2,2,3,3,3,4,4,4]

def checkSorted(nums):
    for n in range(1, len(nums)):
        if nums[n-1] > nums[n]:
            return False
    return True

result = checkSorted(nums1)
print(result)
