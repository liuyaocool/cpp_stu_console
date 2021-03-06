﻿#include <iostream>
using namespace std;
#include <string> // 使用c++ 风格字符串 必须引入头文件
#include "func.h"
#include "core1.h"


// 函数声明 提前告诉编译器函数存在 
// 可声明多次 但定义只一次
int add(int n1, int n2);

int main()
{
	// 进度： https://www.bilibili.com/video/BV1et411b73Z?p=127

	//mainHello();

	//testPointer();

	//testStruct();

	// 全局区
	//testGlobal();
	//栈区
	//testStack();
	// 堆区
	//testHeap();

	// 引用
	//testRelative();

	// 函数参数
	//testDefParam();

	//函数重载
	//testFuncRepeat();

	//类
	//testClass();

	// 运算符重载
	testYunSuanFu();


	int sum = add(12, 25);

	system("pause");
	return 0;

}

//函数定义
/**
 *	值传递 实参不会改变
 *	原理 形参重新分配内存，进行赋值
 */
int add(int n1, int n2)
{
	int sum = n1 + n2;
	cout << "sum = " << sum << endl;
	return sum;
}