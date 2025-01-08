""" Check there are two element's within a window of size k that are equal """

"""
---------------------------------- Brute Forces----------------------------------

            # Time complexity : O(N*K)
            if k == n then it might be O(N^2)

"""

def TwoDuplicates(nums,k):
    for left in range(len(nums)):
        for right in range(left + 1, min(len(nums),left+k)):
            if nums[left] == nums[right]:
                return True
    return False


"""
---------------------------------- Hash Set ----------------------------------
            
            # Time complexity : O(N)
"""
def TwoDuplicates(nums,k):
    window = set()
    left = 0
    
    for right in range(len(nums)):
        if right - left + 1 > k:
            window.remove(nums[left])
            left += 1
        if nums[right] in window:
            return True
        window.add(nums[right])
    return False


def main():
    nums = [1,2,3,2,3,3]
    k = input(k)
    result = TwoDuplicates(nums,k)
    print(result)

if __name__ == "__main__":
    main()
    