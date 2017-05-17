int add(int, int);

int sub(int, int);

int mul(int, int);

int div(int, int);

using PARITH = int(*)(int, int);

vector<PARITH> pvec;

pvec.push_back(add);
pvec.push_back(sub);
pvec.push_back(mul);
pvec.push_back(div);
