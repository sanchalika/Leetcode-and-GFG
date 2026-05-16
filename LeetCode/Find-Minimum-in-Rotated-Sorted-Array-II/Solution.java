def findMin(self, nums):

    n = len(nums)

    left = 0
    right = n - 1

    while True:

        while left < n - 1 and nums[left] == nums[left + 1]:
            left += 1

        while right > 1 and nums[right - 1] == nums[right]:
            right -= 1

        if left >= right:
            break

        mid = (left + right) // 2

        if nums[mid] <= nums[right]:
            right = mid

        else:
            left = mid + 1

    return nums[left]