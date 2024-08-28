#include <stdio.h>

extern int *sort(int *tab, size_t n);

void sort2D(int (*tab)[3], size_t m, size_t n)
{
	int tmp[m*n];
	for(size_t i = 0; i < m; i++)
		for(size_t j = 0; j < n; j++)
			tmp[i*m + j] = tab[i][j];

	sort(tmp, m*n);

	for(size_t i = 0; i < m*n; i++)
		tab[i / m][i - (i / m) * m] = tmp[i];

	return tab;
}

/*int main(void)
{
	int tab[3][3] = {{5,18,90}, {85, 45, 3}, {25, 40, 8}};
	sort2D(tab, 3,3);
	for(size_t i = 0; i < 3; i++)
	 	for(size_t j = 0; j < 3; j++)
			printf("tab[%zu][%zu] = %d\n", i, j, tab[i][j]);
	return 0;
}*/
