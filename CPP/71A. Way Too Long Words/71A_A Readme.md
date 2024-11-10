# Approach:

    1.	Input:
        •	Read an integer t, which represents the number of test cases.
        •	For each test case, read a string a.
    2.	String Processing:
        •	If the length of a is less than 11 characters, output the string as-is.
        •	If the length of a is 11 characters or more:
        •	Print the first character of a.
        •	Print the number of characters between the first and last characters (a.length() - 2).
        •	Print the last character of a.
    3.	Output:
        •	For each string, print the modified or original version based on its length.

# Complexity Analysis:

    Time Complexity: O(n * m)
    •	n is the number of test cases.
    •	m is the average length of the string.
    Space Complexity: O(1) (excluding input/output storage)
    •	Only a few variables are used to store each string and integer t.

# Edge Cases:

    1.	Short Strings (< 11 characters):
        •	Strings like "hello" should be printed as it is.
    2.	Exactly 11 Characters:
        •	A string with exactly 11 characters should be shortened as a[0] + (a.length() - 2) + a[a.length() - 1].
    3.	Empty String:
        •	If a is an empty string (""), ensure it’s handled appropriately (although typically, a should have at least one character).
    4.	Very Large String:
        •	Extremely long strings (e.g., length 1000+) should be correctly shortened by the formula.

# Flowchart:

                +--------------------------+
                |          Start           |
                +--------------------------+
                        |
                        v
                +--------------------------+
                |     Input integer t      |
                +--------------------------+
                        |
                        v
                +--------------------------+
                |     Loop while t > 0     |
                +--------------------------+
                        |
                        v
                +--------------------------+
                |      Input string a      |
                +--------------------------+
                        |
                        v
                +--------------------------+
                |   Is a.length() < 11?    |
                +--------------------------+
                       /          \
                     Yes           No
                     /              \
                    v                v
    +----------------------+   +---------------------------+
    |  Print a as it is    |   | Print a[0], a.length()-2, |
    +----------------------+   | a[a.length()-1]           |
                    |          +---------------------------+
                    v                      |
            +--------------------------+   |
            |        End of Loop       | <-+
            +--------------------------+
                        |
                        v
            +--------------------------+
            |          End             |
            +--------------------------+
