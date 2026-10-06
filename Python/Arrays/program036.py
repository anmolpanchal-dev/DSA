# Minimum length substring that contain the secont string

str1 = "abacbsbcbabaaa"
str2 = "aaab"
def checkStringContaining(s,t):
    if len(t) < len(s):
        return ""
    