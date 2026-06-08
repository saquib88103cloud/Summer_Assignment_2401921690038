int firstUniqChar(char* s) {
    int len = strlen(s);
    for (int i = 0; i  < len; i++){
        int found = 0;
        for (int j = 0; j < len; j++) {
            if (i != j && s[i] == s[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) return i;
    }
    return -1;
}
