bool readFile(const string &fileName, Vector<string> &fvec)
{
	ifstream fis(fileName);
	if (!fis)
	{
		return false;
	}
	string line;
	while(getline(fis, line))
	{
		fcve.push_back(line);
	}

	return true;
}
