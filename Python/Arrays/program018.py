#Sort an array or 0's 1's 2's 
def bruteForce(nums):
    nums.sort()
    return nums

def betterApproach(nums):
    count0 = 0
    count1 = 0
    count2 = 0
    for i in nums:
        if i == 0:
            count0 += 1
        elif i == 1:
            count1 += 1
        else:
            count2 += 1
    sum = count0+count1+count2
    i = 0
    while count0 > 0:
        nums[i] = 0
        i += 1
        count0 -= 1
    while count1 > 0:
        nums[i] = 1
        i += 1
        count1 -= 1
    while count2 > 0:
        nums[i] = 2
        i += 1
        count2 -= 1
    return nums

nums = [1,1,1,2,1,2,1,2,2,1,2,0,0,0,0,2,2,1,2,2,1,0,0,0]
print(betterApproach(nums))


def optimalApproach(nums):
    left = 0
    right = len(nums)-1
    while left < right:
        if nums[left] == 0:
            
    return nums
