# 🛒 RFID Smart Billing System

An Embedded Systems project that automates the shopping and billing process using **RFID technology**. Customers can add products to their cart by scanning RFID tags, while managers can manage stock using a separate RFID card.

## 📌 Project Overview

The RFID Smart Billing System reduces billing time in supermarkets by automatically identifying products using RFID tags. The system supports both **Customer Mode** and **Manager Mode** for billing and inventory management.

## ✨ Features

### Customer
- Scan RFID-tagged products
- Add products to shopping cart
- View cart details
- Delete items from cart
- Generate bill
- Bank payment verification

### Manager
- Login using Manager RFID card
- Add new products
- Update product quantity
- Delete products
- Manage inventory

## 🛠️ Technologies Used

- Embedded C
- C Programming
- RFID
- UART Serial Communication
- Linux
- File Handling
- LPC2148 (ARM7) Microcontroller
- Keil µVision

## 📂 Project Structure

```
major_project/
│── cart.c/
│   ├── cart.c
│   ├── cart.h
│   ├── stock.c
│   ├── stock.h
│   ├── bank.c
│   ├── bank.h
│   ├── stock.txt
│   └── bank.txt
│
├── Startup.s
├── linux_uart.c
├── smart_billing.uvproj
├── smart_billing.uvopt
└── ...
```

## ⚙️ How It Works

1. Customer scans an RFID tag.
2. The system reads the tag through UART.
3. Product information is fetched from the stock database.
4. Items are added to the shopping cart.
5. Customer reviews the cart and proceeds to payment.
6. Payment is verified using bank details.
7. Inventory is updated automatically.

## 📁 Database Files

### `stock.txt`
Stores product details.

Example:

```
Product Name | RFID | Quantity | Price
```

### `bank.txt`
Stores customer bank information.

Example:

```
Place | IFSC | Bank | Account Number | Balance | PIN
```

## 💻 Requirements

- Keil µVision
- Embedded C Compiler
- LPC2148 Development Board (optional)
- RFID Reader & RFID Tags
- UART Interface
- Linux (for UART communication)

## 🚀 Future Enhancements

- LCD Display Integration
- QR Code Support
- Online Payment Gateway
- Cloud Database
- Mobile Application
- Real-time Inventory Monitoring

## 👩‍💻 Author

**Indhu Thanneeru**
