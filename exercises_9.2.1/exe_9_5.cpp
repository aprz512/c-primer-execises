vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
	while (begin != end)
	{
		if (*begin == value)
		{
			return begin;
		}
		++begin;
	}
	
	return end;
}
