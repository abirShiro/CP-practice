#include<stdio.h>
int main()
{
	int n, w;
	scanf("%d%d", &n, &w);
	int tw[n], tp[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &tp[i], &tw[i]);
	}
	int ans = 0;
	while (w > 0)
	{
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			if (tw[i] == 0)
				continue;
			int cr = tp[j] / tw[j];
			int nw = tp[i] / tw[i];
 
			if (nw > cr)
			{
				j = i;
			}
		}
		printf("Element %d\n", j);
		if (tw[j] <= w)
		{
			ans += tp[j];
			w -= tw[j];
			tw[j] = 0;
		}
		else
		{
			ans += w * (tp[j] / tw[j]);
			tw[j] -= w;
			w = 0;
		}
	}
	printf("%d\n", ans);
	return 0;
}