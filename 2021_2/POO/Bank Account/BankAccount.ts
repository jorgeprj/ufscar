class BankAccount{
    public accountNumber: number;
    protected type: string;
    private ownerName: string;
    private balance: number;
    private status: boolean;

    constructor(accountNumber: number, ownerName: string){
        this.accountNumber = accountNumber;
        this.ownerName = ownerName;
        this.balance = 0;
        this.status = false;
    }

    private getAccountNumber(): number{
        return this.accountNumber;
    }

    private setAccountNumber(accountNumber: number): void{
        this.accountNumber = accountNumber;
    }

    private getType(): string{
        return this.type;
    }

    private setType(type: string): void{
        this.type = type;
    }

    private getOwnerName(): string{
        return this.ownerName;
    }

    private setOwnerName(name: string): void{
        this.ownerName = name;
    }

    private getBalance(): number{
        return this.balance;
    }

    private setBalance(balance: number): void{
        this.balance = balance;
    }

    private getStatus(): boolean{
        return this.status;
    }

    private setStatus(status: boolean): void{
        this.status = status;
    }

    public getAccount(): void{
        console.log("----------------------------------------")
        console.log("Account number: " + this.getAccountNumber())
        console.log("Account type: " + this.getType())
        console.log("Owner name: " + this.getOwnerName())
        console.log("Balance: " + this.getBalance())
        console.log("Status: " + this.getStatus())
        console.log("----------------------------------------")
    }

    public openAccount(type: string): void{
        if(this.getStatus())
            console.log("This account is already open");
        else{
            this.setType(type);
            this.setStatus(true);
            console.log(`The ${this.getAccountNumber()} account has been opened!`);
    
            if(type == "Checking")
                this.setBalance(50);
    
            else if(type == "Savings")
                this.setBalance(150);
        }

    }

    public closeAccount(): void{
        if(this.getBalance() > 0)
            console.log("It's not possible to close the account. The account has a balance.");
        else if(this.getBalance() < 0)
            console.log("It's not possible to close the account. The account has debts.");
        else{
            this.setStatus(false);
            console.log(`The ${this.getAccountNumber()} account has been closed!`);
        }
    }

    public deposit(value: number): void{
        if(!this.getStatus())
            console.log("It's not possible to perform the operation. Check account status.");
        else{
            this.setBalance(this.getBalance() + value);
            console.log("Your current balance is: " + this.getBalance());
        }
            
    }

    public withdraw(value: number): void{
        if(!this.getStatus())
            console.log("It's not possible to perform the operation. Check account status.")
        else if(this.getBalance() < value)
            console.log("It's not possible to perform the operation. Check account balance.")
        else{
            this.setBalance(this.getBalance() - value)
            console.log("Your current balance is: " + this.getBalance());
        }
    }

    public payMonthlyFee(): void{
        if(!this.getStatus())
            console.log("It's not possible to perform the operation. Check account status.")
        else if(this.getType() == "Checking"){
            this.setBalance(this.getBalance() - 12)
        }
            
        else if(this.getType() == "Savings")
            this.setBalance(this.getBalance() - 20)
    }
}

const a1 = new BankAccount(12345, "Jorge");
a1.deposit(50);
a1.openAccount("Checking")
a1.withdraw(121)
a1.withdraw(10)
a1.payMonthlyFee()
a1.closeAccount()

a1.getAccount()

const a2 = new BankAccount(54654, "Bob");
a2.withdraw(120);
a2.openAccount("Savings")
a2.deposit(10)
a2.withdraw(150)
a2.payMonthlyFee()
a2.closeAccount()
a2.deposit(10)
a2.closeAccount()

a2.getAccount()