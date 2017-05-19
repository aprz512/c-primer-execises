#include <iostream>
#include <vector>

using std::vector;

class NoDefault {
public:
	NoDefault(int i) {}
};

class C {
public:
	C () : noDefault(0) {}

private:
	NoDefault noDefault;
};

int main()
{
	NoDefault bd = 3;
	//vector<NoDefault> ndvec(10);
	vector<C> cvec(10);
	
	return 0;
}
