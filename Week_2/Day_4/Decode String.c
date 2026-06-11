char* helper(char* s, int* pos);
char* decodeString(char* s) {
    int pos = 0;
    return helper(s, &pos);
}
char* helper(char* s, int* pos) {
    char* result = (char*)malloc(10000);
    result[0] = '\0';
    while (s[*pos] != '\0' && s[*pos] != ']') {
        if (isdigit(s[*pos])) {
            int num = 0
            while (isdigit(s[*pos])) {
                num = num * 10 + (s[*pos] - '0');
                (*pos)++;
            }
            (*pos)++; // skip '['
            char* part = helper(s, pos);
            for (int i = 0; i < num; i++) {
                strcat(result, part);
            }
            free(part);
        }
        else {
            int len = strlen(result);
            result[len] = s[*pos];
            result[len + 1] = '\0';
            (*pos)++;
        }
    }
    if (s[*pos] == ']') {
        (*pos)++;
    }
    return result;
}
