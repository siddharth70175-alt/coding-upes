/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int lastIndex[256]; // For all ASCII characters
    int maxLen = 0;
    int start = 0;

    // Initialize all indices to -1 (character not seen yet)
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    for (int end = 0; end < n; end++) {
        // If the character was seen before, move the start position
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;
        // Update last seen index for current character
        lastIndex[(unsigned char)s[end]] = end;
        // Calculate max length of current window
        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }
    return maxLen;
}

int main() {
    // Sample Test Case 1
    char s1[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s1));  // Output: 3
    // Sample Test Case 2
    char s2[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(s2));  // Output: 1
    // Sample Test Case 3
    char s3[] = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s3));  // Output: 3
    return 0;
}
