void listAll(string path, const Domain* d) // two-parameter overload
{
	vector<Domain*> subdomains = d->subdomains();

	// would prefer not making assumptions like this
	// but i can't change the other code
	bool start = path == d->label();
	bool root = path == "";
	path = d->label() + (root || start ? "" : "." + path);

	if (subdomains.size() == 0) {
		cout << path << endl;
		return;
	}

	for (size_t i = 0; i < subdomains.size(); i++) {
		listAll(path, subdomains[i]);
	}
}
