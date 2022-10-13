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
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组大小除以数组一个变量大小，得到数组个数
//}
//{
//	int a = (int)3.14;
//	/*int b = ~a;*/
//	//int b = a++;//后置++，先使用，再加加
//	//int b = ++a;//前置++，先++，再使用
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
//	max = (a > b ? a : b);//条件操作符
//	    //等效于 if (a>b)
//	    //max = a;
//		//else
//		///max=b;
//	printf("%d\n", max);
//	return 0;
//}


//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	//static：修饰局部变量，局部变量的生命周期变长
            //修饰全局变量，让静态变量只能在自己所在的源文件内部使用
//	a++;
//	printf("a=%d\n", a);//打印结果：2,3,4,5,6
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
//	extern int g_val;//extern:声明外部符号的
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
//	scanf("%d", &day);//输入函数,自定义数字
//	switch (day)//switch作为一个判断，case作为一个入口进去
//	{
//    case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误！\n");
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
//		switch (n)//switch允许嵌套使用
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
//}//打印的是：m=5，n=3

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
