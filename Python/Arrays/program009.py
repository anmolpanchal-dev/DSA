# Move Zeroes whiout changing the sequence

def moveZeroes(nums):
    left = 0
    while left < len(nums):
        while left < len(nums) and nums[left] != 0:
            left+=1
        if left == len(nums):
            break
        right = left+1
        while right < len(nums) and nums[right] == 0:
            right+=1
        if right == len(nums):
            break
        nums[left], nums[right] = nums[right], nums[left]
    return nums



nums = [1,2,3,0,0,0,5,6,0,7,0,8,0,9,0]
result = moveZeroes(nums)
print(result)
        


# Optimal Solution

def optimalSolution(nums):
    left = 0
    for right in range(len(nums)):
        if nums[right] != 0:
            nums[left], nums[right] = nums[right], nums[left]
            left+=1
    return nums

nums = [1,2,3,0,0,0,5,6,0,7,0,8,0,9,0]
result = optimalSolution(nums)
print(result)