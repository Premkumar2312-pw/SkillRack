class IntegerList:
    def __init__(self, nums):
        self.nums = nums

    def updateRange(self, left, right, val):
        for i in range(left - 1, right):
            self.nums[i] += val

    def getSum(self, left, right):
        return sum(self.nums[left - 1:right])