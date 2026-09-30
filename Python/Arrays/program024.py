# Triplete Sum close to target
nums = [1,3,4,5,7,8,9,12,23,45,67,89,100]
def tripleteSum(nums, target):
    for i in range(len(nums)-2):
        left = i+1
        right = len(nums)-1
        maxSum = 0
        while left < right:
            sum = nums[i] + nums[left] + nums[right]
            if sum < target:
                maxSum = max(sum, maxSum)
                left += 1
            elif sum > target:
                right -= 1
    return maxSum

print(tripleteSum(nums, 34))

    