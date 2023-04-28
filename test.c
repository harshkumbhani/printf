
#include	<unistd.h>
#include 	<string.h>
int main(int c, char**v)
{
	int p = 0;
	for (int i = 1; i < c; i++)
	{
		p =0;
		while (v[i][p] != 0)
		{
			write(1,&v[i][p],1);
			p++;
		}
	}
	return(0);
}


int main(int c, char**v)
{
	int p = 0;
	for (int i = 2; i < c; i++)
	{
			write(1,v[i],strlen(v[i]));
			p++;
	}
	return(0);
}