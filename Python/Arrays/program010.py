nums = [2,1,3,2,3,2,5,6,7,8,9,5,2,3,4,5,6,7]

def linearSearch(nums, target):
    for i in range(len(nums)):
        if nums[i] == target:
            return i+1
    return -1

result = linearSearch(nums, 4)
print(result)

def allOccurrences(nums, target):
    res = []
    for i in range(len(nums)):
        if nums[i] == target:
            res.append(i+1)
    return res
result2 = allOccurrences(nums, 2)
print(result2)