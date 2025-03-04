def kadane(arr: list) -> list:
    max_end = max_far = 0
    for item in arr:
        max_end = max(0, max_end + item)
        max_far = max(max_far, max_end)
    return max_far