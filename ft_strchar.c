char    *ft_strchr(const char *str, int c)
{
    if (str == c)
        return(char *)str;
    while (str++)
    {
        if (str == c)
        return(char *)str;
    }
    return(0);
}
