
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char st[] = "";
	int n = ft_str_is_lowercase(st);
	printf("%d\n" ,n);
}*/
