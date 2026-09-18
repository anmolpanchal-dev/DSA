#Remove Duplicate From Sorted ELement

nums = [1,1,1,1,2,2,2,2,3,3,4,5,6,7,8]
def RemoveDuplicate(nums):
    left = 0
    for right in range(1, len(nums)):
        if nums[left] != nums[right]:
            left += 1
            nums[left] = nums[right]
    return nums[:left+1]
    

result = RemoveDuplicate(nums)
print(result)