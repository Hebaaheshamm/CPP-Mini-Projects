#include <iostream>
#include <stack>
using namespace std;

void getGoldPrices(stack<int> s, int prices[], int &size) {
    stack<int> temp;
    size = 0;

   
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty()) {
        prices[size] = temp.top();
        size++;
        s.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> goldPrices;
    goldPrices.push(199); 
    goldPrices.push(200);
    goldPrices.push(202); 

    int prices[MAX];
    int size;

    getGoldPrices(goldPrices, prices, size);

    cout << "Gold prices: ";
    for (int i = 0; i < size; i++) {
        cout << prices[i] << " ";
    }
    cout << endl;

    return 0;
}

