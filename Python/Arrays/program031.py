# longest substring with no duplicate

str = "abcdefaaghij"
def substringWithUnique(str,k):
    low = 0
    freq = {}
    res = 0
    for high in range(len(str)): 
        freq[str[high]] = freq.get(str[high],0)+1
        while len(freq) > k:
            freq[str[low]] -= 1
            if freq[str[low]] == 0:
                del freq[str[low]]
            low += 1
        if len(freq) == k:
            currentSize = high-low+1
            res = max(currentSize, res)
    return res

print(substringWithUnique(str,2))
