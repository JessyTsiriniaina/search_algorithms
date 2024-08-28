#include <stdio.h>

extern int *sort(int *tab, size_t n);

int bin_search(int e, int *tab, size_t n)
{
	int start = 0;
	int end = n - 1;
	int mid;
	
	while(start <= end) //!found --> actual condition
	{
		mid = start + (end - start) / 2;

		if(e == tab[mid]) return mid;
		else if(e < tab[mid]) end = mid - 1;
		else start = mid + 1;
	}

	return -1;
}

void search_2D(int e, int (*tab)[3], size_t m, size_t n)
{
	int tmp[m*n];

	for(size_t i = 0; i < m; i++)
		for(size_t j = 0; j < n; j++)
			tmp[i*m + j] = tab[i][j];
	
	sort(tmp, m*n);

	int k = bin_search(e, tmp, m*n);

	if(k == -1) printf("Not found\n");
	else printf("Found at [%zu][%zu]\n", k / m, k - (k / m) * m);
}

int main(void) 
{
	int tab[3][3] = {{5,18,90}, {85, 45, 3}, {25, 40, 8}};
	search_2D(90, tab, 3, 3);
	return 0;
}
