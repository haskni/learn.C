#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//		int i = 0;
//		int ret = 1;
//		int sum = 0;
//		int n = 0;
//		for (n = 1; n <=3; n++)
//		{
//			for (i = 1,ret=1; i <= n; i++)
//			{
//				ret *= i;
//			}
//			sum += ret;
//		}
//		printf("sum=%d\n", sum);
//		return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i= 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("ret=%d\n", ret);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int i = 0;
//	int k =10;
//	int sz = sizeof(arr) / sizeof (arr[0]);//�����������迼��\0�����⣬�����ַ�������Ҫ����\0�Ƿ�������±��1
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (right - left) / 2;
//		if (arr[mid]>k)
//		{
//			right  -= 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left  -= 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left>right)
//		{
//			printf("�Ҳ���\n");
//			break;
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof (arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);//��Ϣ1s,������Ҫ����<windows.h>
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i <3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if(strcmp (password, "123456")==0)//==���������Ƚ��ַ����Ƿ���ȣ�Ӧ����ʹ��һ���⺯��-strcmp
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3������������˳�\n");
//	}
//	return 0;
//}