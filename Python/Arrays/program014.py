def maxCobsecutiveOnes(nums):
    maxCount = 0
    count = 0
    for i in nums:
        if i == 1:
            count += 1
            maxCount = max(count, maxCount)
        else:
            count = 0
    return maxCount

nums = [1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1]
print(maxCobsecutiveOnes(nums))


        
            
