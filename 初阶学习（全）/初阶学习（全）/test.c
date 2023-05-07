#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<math.h>
#include<assert.h>

//1.求两个数较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;
//	printf("max=%d\n", max);
//	return 0;
//}

//2.输出1 - 100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//3.判断工作日、休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	return 0;
//}

//4.输入密码并确认
//int main()
//{
//	char password[20];
//	char ret = 0;
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("\n请确认密码（Y/N）:>");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	scanf("%c", &ret);
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//5.只打印数字，不打印字母
//int main()
//{
//	char input[20] = { 0 };
//	scanf("%s", input);
//	int i = 0;
//	int sz = sizeof(input) / sizeof(input[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (input[i] > '9')
//		{
//			continue;
//		}
//		printf("%c", input[i]);
//	}
//	return 0;
//}

//6.输入输出出生年月
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

//7.输入10个数求最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//8.求球体的体积
//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	double vol = (4.0 / 3) * 3.1415 * r * r * r;
//	printf("%lf", vol);
//	return 0;
//}

//9.计算阶乘（非递归、递归）
//递归：
//int fib(int n)
//{
//	if (n >= 2)
//	{
//		return n * fib(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",fib(n));
//	return 0;
//}
//非递归
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//10.有序数组中寻找数字
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			return 0;
//		}
//	}
//	printf("输入错误，找不到\n");
//	return 0;
//}

//11.计算阶乘和
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//12.多个字符数组从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "hello george";
//	char arr2[] = "************";
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	for (; left < right; left++, right--)
//	{
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//	}
//	return 0;
//}

//13.模拟用户登录（假设密码是abcde）
//int main()
//{
//	char password[20] = "abcde";
//	printf("请输入密码:>");
//	char input[20] = "";
//	scanf("%s", input);
//	if (strcmp(input, password) == 0)
//	{
//		printf("log in\n");
//	}
//	else
//	{
//		printf("error\n");
//	}
//	return 0;
//}

//14.猜数字游戏
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.paly 0.exit***\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int n = 0;
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &n);
//		if (n > ret)
//		{
//			printf("猜大了！\n");
//		}
//		else if (n < ret)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("\n请输入序号:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//}

//15.关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (strcmp(input, "我是猪") != 0)
//	{
//		printf("你的电脑将在60s后关机，输入“我是猪”可以解除命令\n");
//		scanf("%s", input);
//	}
//	system("shutdown -a");
//	return 0;
//}

//16.交换两个整型变量的值
// 法一
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
// 法二
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//	return 0;
//}
// 法三
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a - b;
//	b = a + b;
//	a = b - a;
//	printf("%d %d ", a, b);
//	return 0;
//}

//17.打印100 - 200之间的素数
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//18.打印1000 - 2000之间的闰年
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400) == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//19.每调用一次函数，num的值 + 1
//void fun(char* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	fun(&num);
//	printf("%d\n", num);
//	fun(&num);
//	printf("%d\n", num);
//	fun(&num);
//	printf("%d\n", num);
//	return 0;
//}

//20.按顺序打印每一位数字
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//21.求字符串长度（非递归、递归、指针 - 指针）
//非递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "sweet";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
// 递归
//int my_strlen(char* str)
//{
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "sweet";
//	int len=my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
// 指针-指针
//int my_strlen(char* str)
//{
//	char* end = str;
//	while(*end)
//		end++;
//	return end - str;
//}
//int main()
//{
//	char arr[] = "sweet";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//22.求第n个斐波那契数（递归、非递归）
//递归
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
// 非递归
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n >= 3)
//	{
//		while (n >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = a + b;
//			n--;
//		}
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}


//23.将三个整数从大到小输出
//void swap(char* s, char* p)
//{
//	int tmp = *s;
//	*s = *p;
//	*p = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//24.求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp % b;
//	}
//	printf("%d", b);
//  return 0;
//}

//25.求最小公倍数（两种方法）
//法一：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a > b ? a : b;
//	while ((c%a)||(c%b))
//	{
//		c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//法二：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	printf("%d",a*i);
//	return 0;
//}

//26.打印1 - 100之间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//27.计算1 - 100的数里有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//十位：
//		if (i / 10 == 9)
//			count++;
//		//个位：
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//28.求1 + 1 / 2 - 1 / 3 + 1 / 4 + …… + 1 / 100
//int main()
//{
//	int i = 0;
//	int flag = -1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("%lf", sum);
//}

//29.输出乘法口诀表（函数）
//void print_table(int i, int n)
//{
//	int j = 0;
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d*%d=%-2d ", i,j,i * j);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		print_table(i, n);
//		printf("\n");
//	}
//	return 0;
//}

//30.字符串数组逆序（递归 * 2、非递归）
// 非递归
//void reverse(char arr[], int sz)
//{
//	int left = 0;
//	int right = 0;
//	for (left = 0, right = sz - 1; left < right; left++, right--)
//	{
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//int main()
//{
//	char arr[20]="";
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}
//递归一：
//void reverse(char arr[], int left, int right)
//{
//	if (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[20]="";
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	reverse(arr, left,right);
//	printf("%s", arr);
//	return 0;
//}
// 递归二：
//void reverse(char arr[])
//{
//	char tmp = arr[0];
//	int right = strlen(arr) - 1;
//	arr[0] = arr[right];
//	arr[right] = '\0';
//	if (strlen(arr)>1)
//	{
//		reverse(arr+1);
//	}
//	arr[right] = tmp;
//}
//int main()
//{
//	char arr[20]="";
//	scanf("%s", arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//31.计算一个数的每位之和（递归）
//int digit_sum(int n)
//{
//	if (n > 9)
//		return n % 10 + digit_sum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", digit_sum(n));
//	return 0;
//}

//32.计算n的k次方（递归）
//dounle my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return 1.0 /( n * my_pow(n, -k + 1));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d", my_pow(n, k));
//}

//33.冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,7,8,3,4,6,10,11,12,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//34.三子棋
//35.扫雷（基础功能、拓展功能）
//36.不创建临时变量，使两数交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//37.写一个函数返回参数二进制中1的个数（三种方法）
// 法一：
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",count_num_of_1(n));
//  return 0;
//}
//法二：
//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", count_num_of_1(n));
//  return 0;
//}
// 法三：
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", count_num_of_1(n));
//  return 0;
//}
//38.两个32位整数m和n的二进制表达中，有多少位不同（两种方法）
//法一：
//int count_different_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i)&1) != ((n >> i)&1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	printf("%d",count_different_bit(m, n));
//  return 0;
//}
//法二：
//int count_different_bit(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i&=(i - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = m ^ n;
//	printf("%d", count_different_bit(i));
//  return 0;
//}

//39.获取一个整数二进制序列中所有的偶数位和奇数位，分别打印二进制序列
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//偶数位：
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d ", (m>>i)&1);
//	}
//	printf("\n");
//	//奇数数位：
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

//40.小乐乐走台阶，求有多少种走法
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else if (n <=2)
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

//41.删除整数序列中指定的某个整数（未被删除数字的前后位置没有发生改变），输出删除数字之后的序列
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int del = 0;
//	scanf("%d%d", &n,&del);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//42.输入n个成绩，换行输出n个成绩中最高分和最低分的差（成绩范围：0 - 100）（输入后判断、输入时判断）
//输入后判断：
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("max=%d,min=%d\n", max, min);
//	return 0;
//}
// 输入时判断
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("max=%d,min=%d\n", max, min);
//	return 0;
//}

//43.多组输入，每行输入一个字母，针对每组输入，输出单独占一行。输入是大写字母，输出是小写；是小写字母则输出大写（有无getchar两种方法 + 库函数）
//法一：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >='A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else
//		{
//			printf("%c\n", ch - 32);
//		}
//		getchar();
//	}
//	return 0;
//}
//法二：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if(ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//	}
//	return 0;
//}
// 法三：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//		else if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//	}
//	return 0;
//}

//44.多组输入，每行输入一个字符。针对每组输入，判断输入字符是否为字母（有无getchar两种方法 + 库函数）
//法一：
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("It is an alpharic.\n");
//		}
//		else
//		{
//			printf("not\n");
//		}
//	}
//	return 0;
//}
// 法二：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (('a' <= ch && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("It is an alpharic.\n");
//		}
//		else
//		{
//			printf("not\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//法三：
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) != EOF)
//	{
//		if (('a' <= ch && ch >= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("It is an alpharic.\n");
//		}
//		else
//		{
//			printf("not\n");
//		}
//	}
//	return 0;
//}

//45.变种水仙花：把任意的数字从中间拆分成两个数字，若所有拆分后的乘积之和等于自身则是一个Lily Number（例如：1461 = 1 * 461 + 14 * 61 + 146 * 1）。求五位数中的所有Lily Number。
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j < 5; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//  return 0;
//}

//46.多组输入，一个整数（2~20），针对每行输入，输出用“ * ”组成的X形图案（整数表示输出的行数，也表示组成“X”的反斜线和正斜线的长度）。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if ((i == j) || (i + j == n-1))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//47.多组输入，计算这一年这个月有多少天
//int is_leapyear(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400) == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%4d %2d", &year,&month);
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (is_leapyear(year) && month == 2)
//		printf("%d", days[2]+1);
//	else
//		printf("%d", days[month]);
//	return 0;
//}

//48.多组输入，一行输入三个a, b, c（0，1000）作为三角形三条边，判断其类型
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) ==3)
//	{
//		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
//		{
//			if (a == b && b == c)
//				printf("等边三角形\n");
//			else if (((a == b) && (b != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b)))
//				printf("等腰三角形\n");
//			else
//				printf("普通三角形\n");
//		}
//		else
//			printf("不是三角形\n");
//	}
//	return 0;
//}

//49.结构体成员包含其他结构体
//struct Peo
//{
//	char name[20];
//	char sex[5];
//	double high;
//};
//struct Stu
//{
//	struct Peo p;
//	char num[20];
//	int code;
//};
//void print(struct Stu* ps)
//{
//	printf("%s %s %lf %s %d\n", (ps->p).name, (ps->p).sex, (ps->p).high, ps->num, ps->code);
//}
//int main()
//{
//	struct Stu s = { {"zhangsan","male",1.6},"12345678",01};
//	printf("%s %s %lf %s %d\n", s.p.name, s.p.sex, s.p.high, s.num, s.code);
//	print(&s);
//	return 0;
//}

//50.模拟实现strcpy(法一、法二、法三assert、法四const、法五链式访问 + 打印)
//法一
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "sweet";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//法二
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++=*src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "sweet";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//法三
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "sweet";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//法四
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "sweet";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//法五
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "sweet";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//51.模拟实现strlen（优化）
//int my_strlen(const char* str)
//{
//	assert(str);
//	char* end = str;
//	while (*end)
//	{
//		end++;
//	}
//	return (end -str);
//}
//int main()
//{
//	char arr[20] = {0};
//	scanf("%s", arr);
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//52.输出逆序的字符串（长度范围：1~10000），其中可能包含空格
//void reverse(char* left,char*right)
//{
//	if (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		reverse(left + 1,right - 1);
//	}
//}
//int main()
//{
//	char arr[20] = {0};
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr,arr+len-1);
//	printf("%s", arr);
//	return 0;
//}

//53.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字。
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret*10+a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//54.求出0~100000之间的所有“水仙花数”并输出。“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//获得n位：
//		int n = 1;
//		int m = i;
//		while (m/=10)
//		{
//			n++;
//		}
//		//获得每位数的n次方之和
//		int j = 0;
//		int sum = 0;
//		m = i;
//		for (j = 0; j < n; j++)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//55.喝汽水，一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元可以买多少汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty % 2 + empty / 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//56.输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int arr1[20] = { 0 };
//	int arr2[20] = { 0 };
//	int arr3[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	int r = 0;
//	while ((j != m) && (k != n))
//	{
//		if (arr1[j] > arr2[k])
//		{
//			arr3[r++] = arr2[k++];
//		}
//		else
//		{
//			arr3[r++] = arr1[j++];
//		}
//	}
//	if (j == m)
//	{
//		for (; k <= n; k++)
//		{
//			arr3[r++] = arr2[k];
//		}
//	}
//	else
//	{
//		for (; j <= m; j++)
//		{
//			arr3[r++] = arr1[j];
//		}
//	}
//	for (i = 0; i < r; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

//57.输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0)
//		{
//			if (arr[right] % 2 == 1)
//			{
//				int tmp = arr[left];
//				arr[left] = arr[right];
//				arr[right] = tmp;
//			}
//			else
//			{
//				right--;
//			}
//		}
//		else
//		{
//			left++;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,4,7,9,10,13,17,19,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_odd_even(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//58.倒置字符串（例：I like Beijing.—Beijing.like I
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = "";
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr,arr+len-1);
//	char* start = arr;
//	char* end = start;
//	while (*end)
//	{
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if (*end != '\0')
//		{
//			end++;
//			start = end;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}