char    *ft_strcat(char *str1, char *str2)
{
    int cont;
    int len;

    len = ft_strlen(str1);
    cont = 0;
    while (str2[cont])
    {
        str1[len] = str2[cont];
        len ++;
        cont++;
    }
    return(str1);
}
