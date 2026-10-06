# #longest Substring without duplicate 

# nums = [11,1,1,2,2,3,3,4,4,5,6,7,8,9,10]
# def longestSubstring(nums):
#     low = 0
#     freq = {}
#     res = 0
#     for high in range(len(nums)):
#         freq[nums[high]] = freq.get(nums[high], 0) + 1
#         while len(freq) < high-low+1:
#             freq[nums[low]] -= 1
#             if freq[nums[low]] == 0:
#                 del freq[nums[low]]
#             low += 1
#         currentWindow = high-low+1
#         res = max(res, currentWindow)
#     return res
# print(longestSubstring(nums))



nums = [1,9,11,2,2,2,3,2,1,2,34,3,2,2,1,3]
nums = set(nums)
print(nums)