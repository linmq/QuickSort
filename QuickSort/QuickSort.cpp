// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void quickSort(int *arr, int l, int r);

int main()
{
	int numArr[5] = { 3,6,0,9,4 };
	quickSort02(numArr, 0, 4);
	for (int i = 0; i < 5; i++) 
	{
		printf("%d ", numArr[i]);
	}

    return 0;
}

void quickSort(int *arr, int l, int r)
{
	//������ָ����ȵ�ʱ��ֱ�ӷ��أ�  
	if (l < r) 
	{
		//��ʱ��x���ǻ�׼ֵ��  
		int i = l, j = r, x = arr[l];

		//�����whileѭ����ʾһ�η��Σ�Ҳ���ǽ���һ������  
		while (i < j) 
		{
			//�ȴӻ�׼ֵ�Ҳ��ҳ�С�ڻ�׼��ֵ��  
			while (i < j && arr[j] >= x) 
			{
				j--;
			}
			if (i < j) 
			{
				//����˳��i++��  
				arr[i++] = arr[j];
			}

			//�ӻ�׼ֵ����ҳ����ڻ�׼��ֵ��  
			while (i < j && arr[i] < x) 
			{
				i++;
			}
			if (i < j) 
			{
				//����˳��j--;  
				arr[j--] = arr[i];
			}
		}
		//�ѻ�׼ֵ����arr[i]λ�ã�  
		arr[i] = x;
		//�ݹ飬��������ֱ���п��ţ�  
		quickSort(arr, l, i - 1);
		quickSort(arr, i + 1, r);
	}
}
