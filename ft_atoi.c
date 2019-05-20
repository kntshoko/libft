int ft_atoi(const char *str)
{
    int op;
    int cont;

    op = 0;
    cont = 0;
    while (str[cont] != '\0')
    {
        op = op *10 +str[cont] - '0';
        cont ++;
    }
    return(op);
}
