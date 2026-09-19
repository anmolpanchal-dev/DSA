# Rotate LIst by One left 


def rotateLeft(nums):
    temp = nums[0]
    for i in range(1, len(nums)):
        nums[i-1] = nums[i]
    nums[len(nums)-1] = temp
    return nums

nums = [1,2,3,4,5,6,7,8]
result = rotateLeft(nums)
print(nums)


