#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
string name[50], customer;
float price[50], total = 0, discount, tax, finalBill;
float minBill, discountPercent, taxPercent;
int stock[50], cart[50] = {0};
int n, choice, item, qty;
int billNo = 1001;

cout << "========================================\n";
cout << "       SHOPPING AND BILLING SYSTEM\n";
cout << "========================================\n";
cout << "Enter customer name: ";
getline(cin, customer);
// MODULE 1: Manage Product Catalogue
cout << "\nEnter number of products (1-50): ";
cin >> n;
if (n < 1 || n > 50) {
    cout << "Invalid number of products!\n";
    return 0;
}
for (int i = 0; i < n; i++) {
    cout << "\nProduct " << i + 1 << endl;
    cout << "Enter product name: ";
    cin >> ws;
    getline(cin, name[i]);
    cout << "Enter price: Rs. ";
    cin >> price[i];
    cout << "Enter available stock: ";
    cin >> stock[i];
    if (price[i] < 0 || stock[i] < 0) {
        cout << "Invalid price or stock!\n";
        return 0;
    }
}
do {
    cout << "\n============= PRODUCT CATALOGUE =============\n";
    cout << left << setw(5) << "No."
         << setw(22) << "Product"
         << setw(12) << "Price" << "Stock\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << i + 1
             << setw(22) << name[i]
             << setw(12) << fixed << setprecision(2)
             << price[i] << stock[i] << endl;
    }
    // MODULE 2: Add and Remove Items from Cart
    cout << "\n=============== MAIN MENU ===============\n";
    cout << "1. Add item to cart\n";
    cout << "2. Remove item from cart\n";
    cout << "3. View cart\n";
    cout << "4. Checkout\n";
    cout << "5. Exit without billing\n";
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter product number: ";
        cin >> item;
        if (item < 1 || item > n) {
            cout << "Invalid product number!\n";
            continue;
        }
        cout << "Enter quantity: ";
        cin >> qty;
        if (qty <= 0 || qty > stock[item - 1] - cart[item - 1]) {
            cout << "Invalid quantity or insufficient stock!\n";
        } else {
            cart[item - 1] += qty;
            cout << "Item added to cart successfully!\n";
        }
    }
    else if (choice == 2) {
        cout << "Enter product number: ";
        cin >> item;
        if (item < 1 || item > n || cart[item - 1] == 0) {
            cout << "Product not found in cart!\n";
            continue;
        }
        cout << "Enter quantity to remove: ";
        cin >> qty;
        if (qty <= 0 || qty > cart[item - 1]) {
            cout << "Invalid quantity!\n";
        } else {
            cart[item - 1] -= qty;
            cout << "Item removed successfully!\n";
        }
    }
    else if (choice == 3) {
        cout << "\n=============== YOUR CART ===============\n";
        total = 0;
        for (int i = 0; i < n; i++) {
            if (cart[i] > 0) {
                float amount = price[i] * cart[i];
                cout << name[i] << " x " << cart[i]
                     << " = Rs. " << fixed << setprecision(2)
                     << amount << endl;
                total += amount;
            }
        }
        cout << "Cart Total: Rs. " << total << endl;
    }
    else if (choice == 4) {
        cout << "Confirm purchase? (1 = Yes, 0 = No): ";
        int confirm;
        cin >> confirm;
        if (confirm != 1) {
            choice = 0;
            cout << "Checkout cancelled. Returning to menu.\n";
        }
    }
    else if (choice != 5) {
        cout << "Invalid choice! Try again.\n";
    }
} while (choice != 4 && choice != 5);
if (choice == 5) {
    cout << "\nShopping cancelled. Thank you!\n";
    return 0;
}
// MODULE 3: Calculate Custom Discount, Tax and Total Bill
total = 0;
for (int i = 0; i < n; i++) {
    total += price[i] * cart[i];
}
if (total == 0) {
    cout << "\nYour cart is empty. No invoice generated.\n";
    return 0;
}
cout << "\n========== BILL SETTINGS ==========\n";
cout << "Enter minimum bill for discount (Rs.): ";
cin >> minBill;
cout << "Enter discount percentage (0-100): ";
cin >> discountPercent;
cout << "Enter tax percentage (0-100): ";
cin >> taxPercent;
if (minBill < 0 || discountPercent < 0 ||
    discountPercent > 100 || taxPercent < 0 ||
    taxPercent > 100) {
    cout << "Invalid discount or tax settings!\n";
    return 0;
}
if (total >= minBill) {
    discount = total * discountPercent / 100;
} else {
    discount = 0;
}
tax = (total - discount) * taxPercent / 100;
finalBill = total - discount + tax;
// MODULE 4: Generate and Print Invoice
cout << fixed << setprecision(2);
cout << "\n===============================================\n";
cout << "                 FINAL INVOICE\n";
cout << "===============================================\n";
cout << "Bill Number : " << billNo << endl;
cout << "Customer    : " << customer << endl;
cout << "-----------------------------------------------\n";
cout << left << setw(18) << "Product"
     << right << setw(9) << "Price"
     << setw(7) << "Qty"
     << setw(12) << "Amount\n";
cout << "-----------------------------------------------\n";
for (int i = 0; i < n; i++) {
    if (cart[i] > 0) {
        cout << left << setw(18) << name[i]
             << right << setw(9) << price[i]
             << setw(7) << cart[i]
             << setw(12) << price[i] * cart[i] << endl;
        stock[i] -= cart[i];
    }
}
cout << "-----------------------------------------------\n";
cout << left << setw(30) << "Subtotal:"
     << right << "Rs. " << total << endl;
cout << left << setw(30) << "Discount:"
     << right << "Rs. " << discount << endl;
cout << left << setw(30) << "Tax:"
     << right << "Rs. " << tax << endl;
cout << "-----------------------------------------------\n";
cout << left << setw(30) << "FINAL AMOUNT:"
     << right << "Rs. " << finalBill << endl;
cout << "===============================================\n";
cout << "          Thank you for shopping!\n";
cout << "===============================================\n";
return 0;

}