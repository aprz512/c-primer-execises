typedef string Type;
Type initVal();
class Exercise {
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
private:
	int val;
};
Type Exercise::setVal(Type parm) {
	val = parm + initVal();
	return val;
}

// setVal 除了返回值以外，都属于class的作用域
// initVal() 是使用的类成员函数
// 返回值Type使用的是外面定义的，其他位置的Type是类中定义的
