#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v(10);
	
	for (int i = 0; i < 10; i ++) {
		v[i] = i + 1;
	}

	cout << endl;

	v.push_back(27);
	
	v.insert(v.begin()+4, 13);
	v.erase(v.begin()+3);
	
	// v.begin() - итератор на первый элемент вектора
	// v.end() - итератор на адрес после последнего элемента вектора
	
	for (int i = 0 ; i < v.size(); i ++) {
		cout << v.at(i) << "\t";
	}
	cout << endl;

	v.clear(); // удаление всех элементов в контейнере

	if (v.empty())
		cout << "!" << endl;

	return 0;
}
