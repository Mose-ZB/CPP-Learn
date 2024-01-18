#pragma once
// 类和结构体的区别就是类的成员默认是private的，而结构体的成员默认是public的

// 1. 结构体的定义
struct Person {
	char name[20];
	int age;
	float height;
};
