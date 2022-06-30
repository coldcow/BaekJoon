//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int input[1000000];
//
//void quick_sort(int arr[], int n, int L, int R);
//
//int main(void)
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &input[i]);
//	}
//
//	quick_sort(input, n, 0, n - 1);
//
//	for (int j = 0; j < n; j++)
//		printf("%d\n", input[j]);
//
//	return 0;
//}
//
//void quick_sort(int arr[], int n, int L, int R) {
//	int temp, left, right, pivot;
//	left = L;
//	right = R;
//	pivot = arr[(L + R) / 2];
//
//	do {
//		while (arr[left] < pivot)
//			left++;
//		while (arr[right] > pivot)
//			right--;
//		if (left <= right) {
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	} while (left <= right);
//
//	if (L < right)
//		quick_sort(arr, n, L, right);
//	if (left < R)
//		quick_sort(arr, n, left, R);
//}

#include <stdio.h>

void merge(int a[], int low, int mid, int hight)    //�и��� �迭 ���� �� ���� �Լ�
{
	int b[1000000];
	int i = low;        //���� ����
	int j = mid + 1;    //������ ����
	int k = 0;          //�迭 b�� �ε��� ��

	while (i <= mid && j <= hight)
	{
		if (a[i] <= a[j])        //�и��� ���� �迭�� ������ �迭 ��
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	while (i <= mid)             //������ ���� ���� �迭�� �ִٸ� �迭 b�� ���� ä���
		b[k++] = a[i++];
	while (j <= hight)           //������ ���� ������ �迭�� �ִٸ� �迭 b�� ���� ä���
		b[k++] = a[j++];
	k--;

	while (k >= 0)               //�迭 b ������ �迭 a ���뿡 �����
	{
		a[low + k] = b[k];
		k--;
	}
}
void mergeSort(int a[], int low, int hight)    //�迭�� ��Ҹ� �����ϴ� �Լ�
{

	int mid;
	if (low < hight)
	{
		mid = (low + hight) / 2;
		mergeSort(a, low, mid);            //���� �迭�� ��� �и�
		mergeSort(a, mid + 1, hight);      //������ �迭�� ��� �и�
		merge(a, low, mid, hight);         //�и��� �迭 ���� �� ���� �Լ�
	}
}
int main(void)
{
	int arr[1000000];
	int i, cnt;        //cnt : �Է� Ƚ��

	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, cnt - 1);    //�迭�� ��Ҹ� �����ϴ� �Լ�

	for (i = 0; i < cnt; i++)
		printf("%d ", arr[i]);
}