struct stu
{
	char name[20];
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test1()
{
	float f[] = { 4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}
int cmp_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age > ((struct stu*)e2)->age;
}
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test2()
{
	struct stu s[3] = { {"SB",20},{"LS",30},{"shudiu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",s[i].age);
	}
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}