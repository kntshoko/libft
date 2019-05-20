int ft_strncmp(char *str1, char *str2, int n)
{
    int cont;

    if (n > ft_strlen(str1))
        return(NULL);
    cont = ft_strlen(str2) - n;
    return (cont);
}
