类成员根据书写顺序初始化，改成如下方式：
struct X{
	X(int i, int j) : base(i), rem(i % j) {}
	int rem, base;
};
