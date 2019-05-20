int ft_touper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c + 26;
    }
    return(c);
}
