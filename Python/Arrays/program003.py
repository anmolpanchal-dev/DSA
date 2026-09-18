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