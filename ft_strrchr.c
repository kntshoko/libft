char    *(const char *str, int c)
{
    char *str2;

     if (str == c)
        str2 = (char *)str;
    while (str++)
    {
        if (str == c)
        str2 = (char *)str;
    }
    return(str2);
}
