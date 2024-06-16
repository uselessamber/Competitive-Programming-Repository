class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        candidate = [-1e9-7, 0]
        for i in nums:
            if i != candidate[0]:
                candidate[1] -= 1
                if candidate[1] < 0:
                    candidate[1] += 2
                    candidate[0] = i
            else:
                candidate[1] += 1
        return candidate[0]