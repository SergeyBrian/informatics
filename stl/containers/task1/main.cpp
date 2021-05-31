#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    char resp;
    int in_number;
    cout << "Do you want to enter a number? [y/n]: ";
    cin >> resp;
    if (resp != 'y') return 0;
    cout << "Enter a number: ";
    cin >> in_number;

    if (in_number < 200 || in_number > 300) return 0;

    vector<int> numbers;

    ifstream file("file.txt");

    string line;
    while(getline(file, line)) {
        if (line.empty()) continue;
        numbers.push_back(stoi(line));
    }

    file.close();

    auto iter = numbers.begin() + (numbers.size()/2);
    auto begin = numbers.begin();
    auto end = numbers.end() - 1;

    while (true) {
        if (iter == begin || iter == end) {
            numbers.pop_back();
            numbers.insert(iter, in_number);
            break;
        }
        if (*(iter+1) <= in_number && *(iter-1) >= in_number) {
            numbers.insert(iter+1, in_number);
            numbers.pop_back();
            break;
        }
        if (*(iter+1)>in_number && *(iter-1)>in_number) {
            begin = iter;
            iter = iter + (end-begin)/2;
        } else {
            end = iter;
            iter = begin + distance(begin, end)/2;
        }
    }

    for (auto num : numbers) cout << num << endl;

    return 0;
}
