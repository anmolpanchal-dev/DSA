# Missing Value

def missingValue(nums, n):
    totalSum = int((n*(n+1)) / 2)
    for i in nums:
        totalSum -= i
    return totalSum
nums = [1,2,3,4,5,7,8,9,10]
# print(missingValue(nums,10))



def XORmissing(nums, n):
    XOR = 0
    for i in range(1, n+1):
        XOR^=i
    
    for i in nums:
        XOR^=i

    return XOR

nums = [1,2,3,4,5,7,8,9,10]
print(XORmissing(nums,10))

    