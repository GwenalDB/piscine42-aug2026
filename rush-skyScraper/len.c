
int len_str(char *str){
    if (*str == '\0')
        return 0;
    return len_str(str + 1) + 1;
}