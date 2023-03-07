int	ft_size_ptr(unsigned long long int n)
{
	int	size;

	size = (n == 0);
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size);
}