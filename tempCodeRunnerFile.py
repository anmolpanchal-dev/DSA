# Triplet Sum to Zero
nums = [-4,-3,-2,-1,0,1,2,4,5,6,7,8,9]
def tripletSum(nums):
    for i in range (len(nums)-2):
        left = i + 1
        right = len(nums)-1
        while left < right:
            sum = nums[i] + nums[left] + nums[right]
            if sum == 0:
                return nums[i], nums[left], nums[right]
            elif sum < 0:
                left += 1
            else:
                right -= 1

    return -1

print(tripletSum(nums))