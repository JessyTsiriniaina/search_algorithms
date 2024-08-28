#include <stdio.h>

int *sort(int *tab, size_t n) 
{
	int inOrder = 0;
	while(!inOrder) 
	{
		inOrder = 1;
		for(size_t i = 0; i <  n - 1; i++) //n --> n - 1
		{
			if (tab[i] > tab[i+1]) {
				int tmp = tab[i];
				tab[i] = tab[i+1];
				tab[i+1] = tmp;
				inOrder = 0;
			}
		}
		n--;
	}
	return tab;
}


/*int main(void) 
{
	int tab[] = {2,6,3,8,5,4,3,9,24,15};
	sort(tab, 10);
	for (size_t i = 0; i < 10; i++) {
		printf("tab[%zu]: %d\n", i, tab[i]); 
	}
	return 0;
}*/
