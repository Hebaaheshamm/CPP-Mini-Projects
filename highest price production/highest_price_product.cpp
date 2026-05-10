#include<iostream>
#include<string>
using namespace std;


struct Product {
    string name;
    int price;
    int stock;
};


Product highprice(Product products[], int numProducts) {
    Product highest = products[0];  
    for (int i = 1; i < numProducts; i++) {
        if (products[i].price > highest.price) {
            highest = products[i];  
        }
    }
    return highest;
}

int main() {
    int num;


    cout << "Enter number of products: ";
    cin >> num;

    Product products[10];  


    for (int i = 0; i < num; i++) {
        cout << "Product " << i + 1 << " Name: ";
        cin >> products[i].name;

        cout << "Product " << i + 1 << " Price: "<<endl;
        cin >> products[i].price;

        cout << "Product " << i + 1 << " Stock: "<<endl;
        cin >> products[i].stock;

    }

 
    Product mostExpensive = highprice(products, num);

   
    cout << "\nProduct with the highest price:" << endl;
    cout << "Name: " << mostExpensive.name << endl;
    cout << "Price: $" << mostExpensive.price << endl;
    cout << "Stock: " << mostExpensive.stock << endl;

    return 0;
}

