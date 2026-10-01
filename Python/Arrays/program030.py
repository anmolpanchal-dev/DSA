# longest substring with no duplicate

str = "aaaaaaaaaaaazabcdefghij"
def substringWithUnique(str):
    low = 0
    high = 0
    freq = {}
    maxLength = 0
    while high < len(str):
        freq[str[high]] = freq.get(str[high], 0) + 1
        while len(freq) < high-low+1:
            freq[str[low]]-=1
            if freq[str[low]] == 0:
                del freq[str[low]]
            low+=1
        maxLength = max(maxLength, high-low+1)
        high += 1
    return maxLength

print(substringWithUnique(str))
