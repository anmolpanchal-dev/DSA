# Second Largest Element in an Array
#BruteForce

def bruteForce(nums):
    target = nums[0]
    target2 = nums[0]
    for n in nums:
        if n > target:
            target = n
    for n in nums:
        if n < target and n > target2:
            target2 = n

    return target2

def brute2(nums):
    nums.sort()
    secondLarge = 0
    for n in range(len(nums)-2,-1,-1):
        if nums[n] != nums[n+1]:
            secondLarge = nums[n]
            break
    return secondLarge
        

def moreOptimal(nums):
    second = float('-inf')
    largest = float('-inf')
    for n in nums:
        if n > largest:
            second = largest 
            largest = n
        elif n > second and n != largest:
            second = n

    return second
        

# nums = [10, 10, 8, 7, 6,11,11]
# result = moreOptimal(nums)
# print(result)


a = 'abc129345bca'
largest = float('-inf')
second = float('-inf')
for i in a:
    if i.isdigit():
        digit = int(i)
        if digit > largest:
            second = largest
            largest = digit
        elif digit > second and digit != largest:
            second = digit

print(second)

        