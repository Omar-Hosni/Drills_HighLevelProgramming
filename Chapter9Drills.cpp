#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

class Name_pairs
{
public:
	vector<string> names;
	vector<double> ages;

	void read_names()
	{
		int size;
		cout << "how many names you want to input: ";
		cin >> size;

		names.resize(size);

		for (int i = 0; i < size; i++)
		{
			cout << "enter name " << i + 1 << ": ";
			cin >> names[i];
		}
	}

	vector<string> get_names()
	{
		return names;
	}

	int get_names_size()
	{
		return names.size();
	}

	void read_ages()
	{
		int size = get_names_size();
		vector<string> n = get_names();

		ages.resize(size);

		cout << "you have " << size << " names, you'll enter age for each\n";

		for (int i = 0; i < size; i++)
		{
			cout << n[i] << " age: ";
			cin >> ages[i];
		}
	}

	vector<double> get_ages()
	{
		return ages;
	}

	void pair_and_sort_and_print()
	{
		std::map<string, int> myMap;
		
		//assigning key-value pairs in a map
		for (int i = 0; i < names.size(); i++)
		{
			myMap[names[i]] = ages[i];

		}

		//sorting a map
		vector<std::pair<string, int>> v;

		for (auto& it : v)
		{
			v.push_back(it);
		}

		sort(v.begin(), v.end());

		//printing values
		auto it = myMap.begin();
		while (it != myMap.end())
		{
			cout << it->first << " " << it->second << endl;
				it++;
		}
	}


};

int main()
{
	Name_pairs np;
	np.read_names();
	np.read_ages();
	np.pair_and_sort_and_print();

}



