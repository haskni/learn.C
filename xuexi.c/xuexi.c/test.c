#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	printf("hello world!\n");
//		return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 23, 32 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����С��������һ��������С���õ��������
//}
//{
//	int a = (int)3.14;
//	/*int b = ~a;*/
//	//int b = a++;//����++����ʹ�ã��ټӼ�
//	//int b = ++a;//ǰ��++����++����ʹ��
//	/*int b = a--;*/
//	/*int b = --a;*/
//	/*printf("%d,%d\n",a,b );*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//����������
//	    //��Ч�� if (a>b)
//	    //max = a;
//		//else
//		///max=b;
//	printf("%d\n", max);
//	return 0;
//}


//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	//static�����ξֲ��������ֲ��������������ڱ䳤
            //����ȫ�ֱ������þ�̬����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	a++;
//	printf("a=%d\n", a);//��ӡ�����2,3,4,5,6
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;//extern:�����ⲿ���ŵ�
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* b = &a;
//	printf("%p\n", &a);
//	printf("%p\n", b);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//���뺯��,�Զ�������
//	switch (day)//switch��Ϊһ���жϣ�case��Ϊһ����ڽ�ȥ
//	{
//    case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)//switch����Ƕ��ʹ��
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d\n", m, n);
//	return 0;
//}//��ӡ���ǣ�m=5��n=3

#include<stdio.h>
int main()
{
	int i = 1;
	while (i<= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;
}
