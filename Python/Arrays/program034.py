# longest Substring with k time replacement

str = "AABABBA"

def longestSubstringReplacement(str,k):
    low = 0
    freq = {}
    res = 0
    maxFreq = 0
    for high in range(len(str)):
        freq[str[high]] = freq.get(str[high],0) + 1
        maxFreq = max(maxFreq, freq[str[high]])
        while (high-low+1) - maxFreq > k:
            freq[str[low]] -= 1
            if freq[str[low]] == 0:
                del freq[str[low]]
            low += 1
        currentWindow = high-low+1
        res = max(currentWindow, res)
    return res
print(longestSubstringReplacement(str, 1))