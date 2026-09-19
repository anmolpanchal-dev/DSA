# Union Of Array 
# Brute Force 

num1 = [1,2,3,4,5,6,7,8]
num2 = [1,13,25,69,7,8,9,0]

# def UnionArrays(num1, num2):

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


