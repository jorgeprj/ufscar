import { Person } from "./person";

export class Professor extends Person{
    private specialty: string;
    private salary: number;

    constructor(name: string, age: number, gender: string, specialty: string, salary: number){
        super(name, age, gender);
        this.specialty = specialty;
        this.salary = salary;
    }

    public getSpecialty(): string{
        return this.specialty;
    }

    public setSpecialty(specialty: string): void{
        this.specialty = specialty;
    }

    public getSalary(): number{
        return this.salary;
    }

    public setSalary(salary: number): void{
        this.salary = salary;
    }

    public receiveSalaryIncrease(increasePercentage: number): void{
        const increase = this.salary * (increasePercentage / 100);
        console.log(`The salary of professor ${this.name} has been increased by ${increase} dollars.`);
        this.salary += increase;
    }
}