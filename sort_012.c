///DNF algorithm  have values in {0, 1, 2}
// in a single pass

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	while (mid <= hi) {
		switch (a[mid]) {
		case 0:
			swap(&a[lo++], &a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(&a[mid], &a[hi--]);
			break;
		}
	}
}

void printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
}
int main()
{
int arr[100],N;
scanf("%d",&N);
printf("arreay:");
 for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
    }


	sort012(arr, N);

	printArray(arr, N);
	getchar();
	return 0;
}
