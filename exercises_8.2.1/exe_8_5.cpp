bool readFile(const string &fileName, Vector<string> &fvec)
{
	ifstream fis(fileName);
	if (!fis)
	{
		return false;
	}
	string line;
	while(fis >> line)
	{
		fcve.push_back(line);
	}

	return true;
}
