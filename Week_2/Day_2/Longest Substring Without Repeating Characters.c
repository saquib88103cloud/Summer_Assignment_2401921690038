int lengthOfLongestSubstring(char* s) {
    int maxLen = 0;
    int left = 0;
    int right = 0;
    while (s[right] != '\0') {
        int k = left;
        while (k < right) {
            if (s[k] == s[right]) {
                left = k + 1;
                break;
            }
            k++;
        int len = right - left + 1;
        if (len > maxLen) {
            maxLen = len;
        }
        right++;
    }
    return maxLen;
}
