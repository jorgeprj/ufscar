import { Student2 } from "./student2";

export class ScholarshipStudent extends Student2{
    private scholarship: number;
  
    constructor(name: string, age: number, gender: string, registration: number, course: string, scholarship: number) {
        super(name, age, gender, registration, course);
        this.scholarship = scholarship;
    }

    public getScholarship(): number{
        return this.scholarship;
    }
  
    public setScholarship(scholarship: number): void{
        this.scholarship = scholarship;
    }
  
    public renewScholarship(): void{
        console.log(`Scholarship of student ${this.name} has been renewed.`);
    }

    //Overrides Student2's method
    public override payMonthlyFee(): void{
        console.log(`Monthly fee of scholarship student ${this.name} has been paid.`);
    }
}
  

const p1 = new ScholarshipStudent("Joe",40,"Male",12129,"Performing Arts",2000)
p1.payMonthlyFee()