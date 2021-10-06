int	ft_iterative_factorial(int nb)
{
	int i;
	int orig;

	i = 0;
	orig = nb;
	if(nb < 0)	return 0;
	nb = 0;
	while(orig > i)
	{
		nb = orig + nb;
		i++;
	}
	return nb;
}
