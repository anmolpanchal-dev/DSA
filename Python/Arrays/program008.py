#Rotate by n number of turn


def rotateNTime(nums,target):
    n = target%len(nums)
    temp = nums[:n]
    length = len(nums)
    start = length-n
    for i in range (n, length):
        nums[i-n] = nums[i]
    for i in range(start, length):
        nums[i] = temp[i-start]
    return nums

nums = [1,2,3,4,5,6,7,8,9,10]
# result = rotateNTime(nums,111)
# print(result)

# This create problem when the target is out of index


#optimal

def optimalSolution(nums, target):
    n = target % len(nums)
    def reverse(left, right):
        while left < right:
           nums[left], nums[right] = nums[right], nums[left]
           left += 1
           right -= 1
    reverse(0,n-1)
    reverse(n, len(nums)-1)
    reverse(0, len(nums)-1)
    return nums

nums = [1,2,3,4,5,6,7,8,9,10]
result = optimalSolution(nums, 5)
print(result)

