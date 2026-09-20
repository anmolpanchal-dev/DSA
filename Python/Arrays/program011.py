# Union Of Array 
# Brute Force 

num1 = [1,2,3,4,5,6,7,8]
num2 = [1,13,25,69]


def unionArrays(num1, num2):
    st = set()
    for n in num1:
        st.add(n)
    for n in num2:
        st.add(n)
    return st

result = unionArrays(num1, num2)
print(result)

# result.add(11)
# print(result)

# result.add(10)
# print(result)



def unionOne(num1, num2):
    return set(num1).union(num2)

result = unionOne(num1, num2)
print(result)


def unionTwo(num1, num2):
    return sorted(set(num1) | set(num2))

result = unionTwo(num1, num2)
print(result)


def unionOptimal(nums1, nums2):
    i = 0
    j = 0
    res = []
    while i < len(nums1) and j < len(nums2):
        if nums1[i] < nums2[j]:
            if not res or res[-1] != nums1[i]:
                res.append(nums1[i])
            i += 1
        elif nums1[i] > nums2[j]:
            if not res or res[-1] != nums2[j]:
                res.append(nums2[j])
            j += 1
        else:
            if not res or res[-1] != nums1[i]:
                res.append(nums1[i])
            i += 1
            j += 1

    while i < len(nums1):
        if not res or res[-1] != nums1[i]:
            res.append(nums1[i])
        i += 1
    while j < len(nums2):
        if not res or res[-1] != nums2[j]:
            res.append(nums2[j])
        j += 1
    return res

print(unionOptimal(num1, num2))
