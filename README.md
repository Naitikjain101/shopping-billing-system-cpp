<div align="center">
<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=700&size=28&pause=1000&color=36BCF7&center=true&vCenter=true&width=650&lines=Shopping+%26+Billing+System;Built+with+C%2B%2B;Simple.+Smart.+Efficient." alt="Animated Typing Header" />
<p>
  <b>A C++ College Project</b><br>
  A simple, menu-driven shopping and billing application built using fundamental C++ concepts.
</p>
<p>
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/Project-College%20Project-8A2BE2?style=for-the-badge" alt="College Project">
  <img src="https://img.shields.io/badge/Status-Completed-2ea44f?style=for-the-badge" alt="Project Status">
</p>
<img src="https://capsule-render.vercel.app/api?type=rect&color=0:0F2027,50:203A43,100:2C5364&height=3" width="100%" alt="Divider">
</div>

✨ About the Project

The Shopping and Billing System is a beginner-friendly C++ application developed as a college project. It helps manage a product catalogue, maintain a shopping cart, calculate discounts and taxes, and generate a formatted invoice.

The program uses simple programming concepts such as arrays, loops, conditional statements, input validation, and formatted output.

🎯 Project Objectives

* Simplify basic shopping and billing operations.
* Manage products, prices, and available stock.
* Allow customers to add and remove items from their cart.
* Calculate customizable discounts, taxes, and the final bill.
* Generate a clear and organized invoice.

⸻

🚀 Features

<table>
<tr>
<td width="50%">

🛍️ Product Catalogue

* Add product details
* Set product prices
* Manage available stock
* Display products in a table

</td>
<td width="50%">

🛒 Shopping Cart

* Add items to the cart
* Remove items from the cart
* View selected products
* Validate quantities against stock

</td>
</tr>
<tr>
<td width="50%">

💰 Smart Billing

* Customizable discount threshold
* Adjustable discount percentage
* Customizable tax percentage
* Automatic total calculation

</td>
<td width="50%">

🧾 Invoice Generation

* Customer information
* Bill number
* Product-wise amounts
* Subtotal, discount, tax, and final amount

</td>
</tr>
</table>

⸻

🧩 Project Modules

The project is divided into four main modules.

Module	Name	Description
01	Manage Product Catalogue	Enter product names, prices, and available stock.
02	Shopping Cart Management	Add items, remove quantities, and view the cart.
03	Discount, Tax & Billing	Set the discount threshold and percentages, then calculate the final bill.
04	Invoice Generation	Display the customer details and a formatted final invoice.

⸻

⚙️ Technology Stack

<div align="center">
<img src="https://skillicons.dev/icons?i=cpp,vscode,git,github" alt="C++, VS Code, Git and GitHub" />
</div>

Technology	Purpose
C++	Core programming language
Arrays	Store product details and cart quantities
Loops	Process products and display menus
Conditional Statements	Validate input and manage operations
Functions and Templates	Validate numeric input
Git	Version control
GitHub	Source code hosting

⸻

💻 Getting Started

Follow these steps to run the project locally.

Prerequisites

You need:

* A C++ compiler such as g++
* Terminal on macOS/Linux or a compatible terminal on Windows
* Git (optional, for cloning the repository)

1. Clone the Repository

git clone https://github.com/YOUR-USERNAME/shopping-billing-system-cpp.git

Replace YOUR-USERNAME with your GitHub username.

2. Open the Project Directory

cd shopping-billing-system-cpp

3. Compile the Program

g++ -std=c++17 shopping.cpp -o shopping

4. Run the Program

macOS / Linux:

./shopping

Windows:

shopping.exe

⸻

🖥️ How It Works

The application follows a simple workflow:

       ┌──────────────────────┐
       │        START         │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Enter Customer Name  │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Create Product       │
       │ Catalogue            │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Display Main Menu    │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Add / Remove / View  │
       │ Cart Items           │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Confirm Checkout     │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Set Discount & Tax   │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Calculate Final Bill │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │ Generate Invoice     │
       └──────────┬───────────┘
                  │
                  ▼
       ┌──────────────────────┐
       │         END          │
       └──────────────────────┘

⸻

🧮 Billing Formula

The system uses the following formulas:

1. Subtotal

Subtotal = Sum of (Product Price × Quantity)

2. Discount

The discount is applied when the subtotal reaches the minimum bill amount set by the user.

Discount = Subtotal × Discount Percentage / 100

3. Tax

Tax is calculated on the subtotal after deducting the discount.

Tax = (Subtotal − Discount) × Tax Percentage / 100

4. Final Bill

Final Bill = Subtotal − Discount + Tax

Example

Description	Amount
Subtotal	₹2,000.00
Discount (15%)	−₹300.00
Tax (5%)	+₹85.00
Final Bill	₹1,785.00

Example rates are configurable inputs for demonstration purposes.

⸻

🛡️ Input Validation

The application includes validation to improve reliability.

* Rejects non-numeric input in numeric fields.
* Restricts the product count to 1–50.
* Prevents negative product prices and stock quantities.
* Rejects invalid product numbers.
* Prevents adding quantities beyond available stock.
* Validates discount and tax percentages between 0 and 100.
* Allows checkout cancellation.

⸻

📚 C++ Concepts Demonstrated

This project demonstrates practical applications of:

* Variables and data types
* Arrays and strings
* for and while loops
* if-else statements
* do-while loops
* Templates
* Input validation
* Formatted output using iomanip
* Basic arithmetic and percentage calculations

It is suitable for beginners learning C++ and students preparing for a programming lab demonstration or viva.

⸻

🔮 Future Improvements

Potential enhancements include:

* Save product details to a file.
* Store invoices permanently.
* Generate unique bill numbers across multiple runs.
* Add product search and editing.
* Add date and time to invoices.
* Introduce a graphical user interface.
* Add customer purchase history.

⸻

🎓 Project Information

Detail	Information
Project Name	Shopping and Billing System
Language	C++
Project Type	College Project
Application Type	Console-Based Application
Difficulty	Beginner
Primary Purpose	Learning and demonstration

⸻

🤝 Contributing

Suggestions and improvements are welcome!

1. Fork this repository.
2. Create a new branch.
3. Make your changes.
4. Submit a pull request.

⸻

📜 License

This project is intended for educational purposes. You may adapt it for learning, practice, and academic demonstrations.

⸻

<div align="center">
<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0F2027,50:203A43,100:2C5364&height=120&section=footer" width="100%" alt="Animated footer banner">

⭐ Thanks for visiting!

Built with C++ | Created as a College Project

<img src="https://komarev.com/ghpvc/?username=YOUR-USERNAME&label=Repository%20Visitors&color=36BCF7&style=flat" alt="Visitor counter">
</div>
