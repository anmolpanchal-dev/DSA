# remove duplicate from a sorted array

def removeDuplicate(nums):
    left = 0
    for right in range(1, len(nums)):
        if nums[left] != nums[right]:
            left+=1
            nums[left] = nums[right]
    return nums[:left+1]

nums = [1,1,1,2,2,2,2,2,2,3,4,6,6,6,6,6]
print(removeDuplicate(nums))