#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    deque<int> numbers = {12,50,86,61,66,18,73,18,100,100,33,41,19,55,26};

    int number;

    cout << "Enter a number: ";
    cin >> number;

    auto iter = numbers.begin();
    while (iter != numbers.end()) {
        if(*iter == number) {
            numbers.erase(iter);
            continue;
        }
        iter++;
    }

    numbers.push_front(number);

    for (auto num : numbers) cout << num << endl;

    return 0;
}
