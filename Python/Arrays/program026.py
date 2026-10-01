# Dutch National Flag
nums = [0,0,1,0,0,1,0,1,1,2,2,2,2,0,2,0,1,1,1,1,0,0]
def rearrange(nums):
    left = 0
    mid = 0
    right = len(nums)-1
    while mid < right:
        if nums[mid] == 0:
            nums[left], nums[mid] = nums[mid], nums[left]
            mid += 1
            left+=1
        elif nums[mid] == 1:
            mid+=1
        else:
            nums[right], nums[mid] = nums[mid], nums[right]
            right -= 1

    return nums

print(rearrange(nums))