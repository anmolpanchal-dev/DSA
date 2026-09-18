class Solution:
    def secondLargest(self, arr):
        largest = second = float('-inf')
        for num in arr:
            if num > largest:
                largest, second = num, largest
            elif num > second and num != largest:
                second = num

        return second
    
    def secondSmallest(self, arr):
        smallest = second = float('inf')
        for num in arr:
            if num < smallest:
                smallest, second = num, smallest
            elif num < second and num != smallest:
                second = num
        return second

    def secondSmallestLargest(self, arr):
        return self.secondLargest(arr), self.secondSmallest(arr)


obj = Solution()
arr = [10,20,30,40,50,60,20,40,90,70,80]
print(obj.secondSmallestLargest(arr))
print(obj.secondLargest(arr))
print(obj.secondSmallest(arr))
    