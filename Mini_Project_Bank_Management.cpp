class BankAccount:
    def __init__(self, account_number, name, balance=0):
        self.account_number = account_number
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited: {amount}")
        else:
            print("Invalid amount")

    def withdraw(self, amount):
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            print(f"Withdrawn: {amount}")
        else:
            print("Insufficient balance or invalid amount")

    def check_balance(self):
        print(f"Current Balance: {self.balance}")

    def display_details(self):
        print("\nAccount Details")
        print(f"Account Number: {self.account_number}")
        print(f"Name: {self.name}")
        print(f"Balance: {self.balance}")


# Bank System
accounts = {}

def create_account():
    acc_no = input("Enter Account Number: ")
    name = input("Enter Name: ")
    if acc_no in accounts:
        print("Account already exists!")
    else:
        accounts[acc_no] = BankAccount(acc_no, name)
        print("Account created successfully!")

def deposit_money():
    acc_no = input("Enter Account Number: ")
    if acc_no in accounts:
        amount = float(input("Enter amount to deposit: "))
        accounts[acc_no].deposit(amount)
    else:
        print("Account not found!")

def withdraw_money():
    acc_no = input("Enter Account Number: ")
    if acc_no in accounts:
        amount = float(input("Enter amount to withdraw: "))
        accounts[acc_no].withdraw(amount)
    else:
        print("Account not found!")

def check_balance():
    acc_no = input("Enter Account Number: ")
    if acc_no in accounts:
        accounts[acc_no].check_balance()
    else:
        print("Account not found!")

def show_details():
    acc_no = input("Enter Account Number: ")
    if acc_no in accounts:
        accounts[acc_no].display_details()
    else:
        print("Account not found!")


# Main Menu
while True:
    print("\n--- Bank Management System ---")
    print("1. Create Account")
    print("2. Deposit Money")
    print("3. Withdraw Money")
    print("4. Check Balance")
    print("5. Display Account Details")
    print("6. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        create_account()
    elif choice == "2":
        deposit_money()
    elif choice == "3":
        withdraw_money()
    elif choice == "4":
        check_balance()
    elif choice == "5":
        show_details()
    elif choice == "6":
        print("Thank you for using the system!")
        break
    else:
        print("Invalid choice, try again!")
