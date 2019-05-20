int ft_strcmp(char *str1, char *str2)
{
    int cont;

    cont = ft_strlen(str2) - ft_strlen(str1);
    return (cont);
}
