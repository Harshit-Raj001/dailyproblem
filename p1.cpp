#include <iostream>
using namespace std;

int main()
{
	int n, k, i;
	printf("Enter value of k: ");
	scanf("%d", &k);
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	int nList[100];
	printf("\nEnter positive values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nList[i]);
		if (nList[i] < 0 || nList[i] > k)
			i--;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (nList[i] + nList[j] == k)
				printf("\n%d, %d", nList[i], nList[j]);
		}
	}
	cin>>n;
	return 0;
}
