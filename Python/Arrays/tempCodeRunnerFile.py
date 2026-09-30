def Square(nums):
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
