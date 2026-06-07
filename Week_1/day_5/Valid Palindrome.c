bool isPalindrome(char* s) {
    int len = strlen(s);
    int i = 0, j = len-1;
    while (j > i){
        if (s[i] == s[j] || tolower(s[i]) == tolower(s[j])){
            i++; j--;
        }
        else if (s[i] == ' ' || !isalnum(s[i])) i++;
        else if (s[j] == ' ' || !isalnum(s[j])) j--;
        else return false;
    }
    return true;
}
