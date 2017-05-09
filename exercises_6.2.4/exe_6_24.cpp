应该将形参改为引用

void print (const int (&ia)[10])
{
	for (int i : ia)
	{
		//....
	}
}
