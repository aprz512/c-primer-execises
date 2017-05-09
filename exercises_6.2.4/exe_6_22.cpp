void exchange_point(int *&p1, int *&p2)
{
	auto p = p1;
	p1 = p2;
	p2 = p;
}
