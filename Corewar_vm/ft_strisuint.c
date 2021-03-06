#include "corewar.h"

static int		dont_overflow(char *arg)
{
	long unsigned int	nb;
	int					sign;

	sign = 1;
	nb = 0;
	while (ft_isspace(*arg))
		arg++;
	while (*arg && nb * sign <= UINT_MAX)
	{
		nb = nb * 10 + *arg - '0';
		arg++;
	}
	return (nb * sign <= UINT_MAX);
}

int				ft_strisuint(char *arg)
{
	int i;

	i = 0;
	if (!arg[i])
		return (0);
	while (ft_isspace(arg[i]))
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (dont_overflow(arg));
}
