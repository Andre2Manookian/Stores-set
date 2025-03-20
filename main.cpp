#include <iostream>
#include <set>
using namespace std;



/// 1) Write a program that reads N integers from the user and stores them in a set<int>. Print the elements in sorted order.


int main() {
    int N, num;
    set<int> numbers;

    cout << "Enter the number of elements: ";
    cin >> N;

    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> num;
        numbers.insert(num);
    }

    cout << "Sorted unique elements: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
