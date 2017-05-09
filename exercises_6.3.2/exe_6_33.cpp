void print(vector<int>::iterator s, vector<int>::iterator e)
{	
	if (s == e)
		return;
		
	cout << *s << endl;
	print (next(s), e);
}
