char    *ft_strncat(char *str1, char *str2, int n)
{
    int cont;
    int len;

    len = ft_strlen(str1);
    cont = 0;
    if (n > ft_strlen(str2))
    {
        return(NULL);
    }
    while (cont <= n)
    {
        str1[len] = str2[cont];
        len ++;
        cont ++;
    }
    return (str1);
}
