int strStr(char* haystack, char* needle) {
    int h = strlen(haystack);
    int n = strlen(needle);
    if (n == 0)
        return 0;
    int i = 0;
    int j = 0;
    int temp = 0;
    while (i < h) {
        if (haystack[i] == needle[j]) {
            if (j == 0)
                temp = i;
            i++;
            j++;
            if (j == n)
                return temp;
        }
        else {

            if (j > 0) {
                i = temp + 1;
                j = 0;
            }
            else {
                i++;
            }
        }
    }
    return -1;
}
