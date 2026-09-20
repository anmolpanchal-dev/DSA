# Intersection of array

def intersection(num1, num2):
    res = []
    for i in num1:
        for j in num2:
            if i == j:
                if not res or res[-1] != i:
                    res.append(i)
    return res
num = [1,2,2,2,3,4,5]
num1 = [1,2,2,2,3,5,7,9]
print(intersection(num , num1))


# num1 = [1,2,2,2,3,4,5,3,3,3,3,3,3,9]
# num2 = [1,2,3,5,7,9]
# def optimalIntersection(num1, num2):
#     i = 0
#     j = 0
#     res = []
#     while i < len(num1) and j < len(num2):
#         if num1[i] == num2[j]:
#             if not res or res[-1] != num1[i]:
#                 res.append(num1[i])
#             i+=1
#             j+=1
#         elif num1[i] < num2[j]:
#             i+=1
#         else:
#             j+=1

#     return res

# print(optimalIntersection(num1, num2))
        

    
    

def rotateArray(num, n):
    target = n % len(num)
    def reverse(left, right):
        while left < right:
            num[left], num[right] = num[right], num[left]
            left+=1
            right-=1
        return num
    reverse(0, target-1)
    reverse(target, len(num)-1)
    reverse(0, len(num)-1)
    return num
num001 = [1,2,3,4,5,6,7,8,9,10]
print(rotateArray(num001, 22))
    