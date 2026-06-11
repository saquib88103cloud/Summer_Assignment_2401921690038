char* reverseWords(char* s) {
    int start = 0;
    int sl = strlen(s);
    for (int j = 0; j <= sl; j++) {
        if (s[j] == ' ' || s[j] == '\0') {
            int left = start;
            int right = j - 1;
            char temp;
            while (left < right) {
                temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            start = j + 1;
        }
    }
    return s;
}
