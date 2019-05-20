char    *ft_strncpy(char *str1, char *str2, int n)
{
    int cont;

    if (n > ft_strlen(str2))
        return (NULL);
    cont = 0;
    while (str2[cont] <= n))
    {
        str1[cont] = str2[cont];
        cont++;
    }
    str1[cont] = '\0';
    return(str1);
}
