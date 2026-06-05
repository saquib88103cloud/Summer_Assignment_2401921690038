void reverseString(char* s, int sSize) {
    int i = 0, j = sSize-1, temp = 0;
    while (i < j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++; j--;
    }
    return;
}
