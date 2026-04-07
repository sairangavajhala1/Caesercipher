# Caesercipher
# 🔐 Caesar Cipher in C++ (With Brute Force Attack)

## 📌 Overview
This project implements the **Caesar Cipher algorithm** in C++ to perform:
- Encryption
- Decryption
- Brute-force cryptanalysis

The Caesar Cipher is a simple encryption technique where each letter in a message is shifted by a fixed number of positions in the alphabet.

---

## 🚀 Features
- 🔒 Encrypt text using a shift key  
- 🔓 Decrypt text back to original  
- 🔍 Brute-force attack (tries all possible keys from 1–25)  
- 🧠 Handles uppercase, lowercase, spaces, and symbols  

---

## ⚙️ How It Works
- Each character is shifted using ASCII values  
- Modulo operation (`% 26`) ensures wrapping from Z → A  
- Decryption is done using reverse shift  
- Brute force tries all possible shifts to recover original message  

---

## 💻 Example

### Input
Enter message: hello
Enter shift value: 3

### Output
Encrypted Text: khoor
Decrypted Text: hello
