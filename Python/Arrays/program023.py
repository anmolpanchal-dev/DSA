# Triplet Sum to Zero
def tripletSum(nums):
    for i in range (len(nums)-2):
        left = i + 1
        right = len(nums)-1
        while left < right:
            sum = nums[i] + nums[left] + nums[right]
            if sum == 0:
                return nums[i], nums[left], nums[right]
            elif sum < 0:
                left += 1
            else:
                right -= 1

    return -1

# print(tripletSum(nums))


# triplets Sum equal to 0

nums = [-4,-4,-4,-4,-4,-3,-2,-1,0,1,2,4,5,6,7,8,9]
def tripletsSum(nums):
    res = []
    for i in range(len(nums)-2):
        if i != 0 and nums[i] == nums[i-1]:
            continue
        elif nums[i] > 0:
            break
        left = i + 1
        right = len(nums)-1
        while left < right:
            if nums[left] + nums[right] == -nums[i]:
                res.append([nums[i], nums[left], nums[right]])
                left+=1
                right-=1
                while left < right and nums[left] == nums[left-1]:
                    left += 1
                while left < right and nums[right] == nums[right+1]:
                    right -= 1
            elif nums[left] + nums[right] < -nums[i]:
                left+=1
            else:
                right-=1
    return res

print(tripletsSum(nums))
            