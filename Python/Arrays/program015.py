# Find the number that does not appearing twice

def findNum(nums):
    XOR = 0
    for i in range(0,len(nums)):
        XOR ^= nums[i]
    return XOR

nums = [1,1,2,2,3,3,4,5,6,6]
print(findNum(nums))


def byUsingHash(nums):
    freq = {}
    for num in nums:
        if num in freq:
            freq[num]+=1
        else:
            freq[num]=1
    for num in nums:
        if freq[num]==1:
            return num