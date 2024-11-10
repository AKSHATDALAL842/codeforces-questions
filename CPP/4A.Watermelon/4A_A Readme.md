# Approach:

    1.	Input: Read an integer w, which represents the weight.
    2.	Subtract 2: We subtract 2 from w to check if the remaining weight (sum) can be evenly divided between two parts greater than 1.
    3.	Check if sum is divisible by 2:
    •	If sum is greater than 1 and is even (sum % 2 == 0), output “YES” (indicating the weight can be split into two even, non-zero weights).
    •	If sum is odd or sum <= 1, output “NO”.
    4.	Output: “YES” if the weight can be evenly divided, otherwise “NO”.

# Complexity Analysis:

    •	Time Complexity: O(1)
    •	This solution involves only a few arithmetic operations and a modulus check, all of which are constant-time operations.
    •	Space Complexity: O(1)
    •	Only a few integer variables are used, so the space complexity is constant.

# Edge Cases:

    1.	Minimum Even Weight (w = 2):
    •	Expected Output: “NO” because 2 cannot be divided into two parts that are both greater than 1.
    2.	Odd Weight (w = 3, w = 5, etc.):
    •	Expected Output: “NO” since any odd weight cannot be split into two even parts.
    3.	Small Even Weights (w = 4):
    •	Expected Output: “YES” because 4 can be divided into two parts of weight 2 each.
    4.	Large Even Weight:
    •	For any large even value of w (e.g., 100, 200), the output should be “YES” as they can be divided into two even parts greater than 1.

# Flowchart:

                +-----------------+
                |      Start      |
                +-----------------+
                        |
                        v
                +-------------------+
                |  Input integer w  |
                +-------------------+
                        |
                        v
                +----------------+
                |  sum = w - 2   |
                +----------------+
                        |
                        v
                +----------------+
                |  Is sum > 1?   |
                +----------------+
                    /         \
                  Yes          No
                 /              \
                v                v
    +-------------------+   +-------------+
    | Is sum % 2 == 0?  |   | Print "NO"  |
    +-------------------+   +-------------+
        /         \
       Yes          No
      /              \
     v                v

+-------------+ +------------+
| Print "YES" | | Print "NO" |
+-------------+ +------------+

+-----+
| END |
+-----+
