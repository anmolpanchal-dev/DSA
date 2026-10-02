# Fruits in a basket
nums = [1,2,1,2,1,2,3,2,3,2,3,2,2,3,2,1,2,3,2,1]
def fruitBasket(nums):
    low = 0
    freq = {}
    res = 0
    for high in range(len(nums)):
        freq[nums[high]] = freq.get(nums[high],0) + 1
        while len(freq) > 2:
            freq[nums[low]] -= 1
            if freq[nums[low]] == 0:
                del freq[nums[low]]
            low+=1
        currentLength = high-low+1
        res = max(currentLength, res)
    return res

print(fruitBasket(nums))