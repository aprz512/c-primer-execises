NoDefault(int i) {}

class C {
public:
	C () : noDefault(0) {}

private:
	NoDefault noDefault;
};
