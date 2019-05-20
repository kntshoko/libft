char    *ft_strcpy(char *str1, char *str2)
{
    int cont;

    cont = 0;
    while (str2[cont])
    {
        str1[cont] = str2[cont];
        cont++;
    }
    return (str1);
}
