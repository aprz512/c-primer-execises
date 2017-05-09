int sum(initializer_list<int> list)
{

	int sum = 0;
	for (auto i : list)
		sum += i;
		
	return sum;
}
