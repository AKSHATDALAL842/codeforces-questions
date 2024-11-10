# Approach:

    1.	Input: Read the integer w, which represents the weight.
    2.	Check Divisibility and Positivity:
    •	First, we subtract 2 from w and check if the result is greater than 0.
    •	Then, we check if (w - 2) % 2 == 0, which verifies that the remaining weight can be evenly divided into two positive even numbers.
    3.	Output:
    •	If both conditions are met, output “YES” (indicating that the weight can be split into two even parts).
    •	Otherwise, output “NO”.

# Complexity Analysis:

    •	Time Complexity: O(1)
    •	Space Complexity: O(1)

# Edge Cases:

    1.	Minimum Even Weight (w = 2):
    •	Expected Output: “NO” because 2 cannot be divided into two parts that are both greater than 1.
    2.	Odd Weights (w = 3, w = 5, etc.):
    •	Expected Output: “NO” since an odd weight cannot be split into two even parts.
    3.	Small Even Weight (w = 4):
    •	Expected Output: “YES” because 4 can be divided into two parts of weight 2 each.
    4.	Large Even Weights (e.g., w = 100):
    •	Expected Output: “YES” because large even weights can be divided into two positive even parts.

# Flowchart:

    +----------------+
    |      Start     |
    +----------------+
            |
            v
    +-----------------+
    | Input integer w |
    +-----------------+
            |
            v
    +-------------------+
    |  Check:           |
    |  (w - 2) % 2 == 0 |
    |  AND (w - 2 > 0)  |
    +-------------------+
            /        \
         Yes          No
         /              \
        v                v

+-------------+ +------------+
| Print "YES" | | Print "NO" |
+-------------+ +------------+

+-----+
| End |
+-----+
