def next_permutation(nums):
  i = len(nums) - 2
  while i >= 0 and nums[i] >= nums[i + 1]:
    i -= 1

  if i < 0:
    return nums[::-1]

  j = len(nums) - 1
  while nums[i] >= nums[j]:
    j -= 1

  nums[i], nums[j] = nums[j], nums[i]
  nums[i + 1:] = nums[i + 1:][::-1]
  return nums

def previous_permutation(nums):
  i = len(nums) - 2
  while i >= 0 and nums[i] <= nums[i + 1]:
    i -= 1

  if i < 0:
    return nums[::-1]

  j = len(nums) - 1
  while nums[i] <= nums[j]:
    j -= 1

  nums[i], nums[j] = nums[j], nums[i]
  nums[i + 1:] = nums[i + 1:][::-1]
  return nums

nums = list(map(int, input().split()))
print("next: "+ str(next_permutation(nums)))
print("prev: "+ str(previous_permutation(nums)))