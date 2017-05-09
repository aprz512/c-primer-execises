bool contain_capital_letter(const string &s)
{
	for (auto c : s)
	{
		if (isupper(s))
		{
			return true;
		}
	}
	
	return false;
}

void tolower(string &s)
{
	for(auto &c : s)
	{
		c = tolower(c)
	}
}
