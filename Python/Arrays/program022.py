# Square of sorted array

# 1. All element are sorted and positive
# 2. All number are negative
def square(nums):
    for i in range(len(nums)):
        nums[i] = nums[i] * nums[i]
    return nums

nums = [1,2,3,4,5,6,7,8]
print(square(nums))


# 3. Both negative and positive are mix


nums2 = [-5,-3,-2,-1,2,4,6,7,8,9,10]
# def Square(nums):
#     left = 0
#     res = []
#     for i in range(len(nums)):
#         nums[i] = nums[i] * nums[i]
#     while nums[left] > nums[left+1]:
#         left+=1
#     right = left+1
#     while left >= 0 and right < len(nums):
#         if nums[left] == nums[right]:
#             res.append(nums[left])
#             res.append(nums[right])
#             left-=1
#             right+=1
#         elif nums[left] < nums[right]:
#             res.append(nums[left])
#             left-=1
#         else:
#             res.append(nums[right])
#             right+=1
#     while left >= 0:
#         res.append(nums[left])
#         left-=1
#     while right < len(nums):
#         res.append(nums[right])
#         right+=1
#     return res

# print(Square(nums2))

def optimalSimpler(nums):
    left = 0
    right = len(nums)-1
    res = []
    while left <= right:
        if abs(nums[left]) < abs(nums[right]):
            res.append(nums[left]**2)
            left += 1
        else:
            res.append(nums[right]**2)
            right -= 1

    return res[::1]
print(optimalSimpler(nums2))