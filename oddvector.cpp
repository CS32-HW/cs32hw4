void removeOdd(vector<int>& v)
{
	vector<int>::iterator it = v.begin();
	while (it != v.end()) {
		if (*it % 2 == 0)
			it++;
		else
			it = v.erase(it);
	}
}
