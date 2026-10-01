#Triplete Sum smaller than target
nums = [00,1,2,3,4,4,4,4,4,4,5,6,7,8,9,10,22,33,44,55,66,77,88,99]
def tripletSmallerSum(nums, target):
    
    res = set()

    for i in range(len(nums) - 2):

        if i > 0 and nums[i] == nums[i - 1]:
            continue

        left = i + 1
        right = len(nums) - 1

        while left < right:

            total = nums[i] + nums[left] + nums[right]

            if total < target:

                for j in range(left + 1, right + 1):
                    res.add((nums[i], nums[left], nums[j]))

                left += 1

            else:
                right -= 1

    return [list(x) for x in res]

print(tripletSmallerSum(nums,8))


