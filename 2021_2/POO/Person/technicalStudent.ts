import { Student2 } from "./student2";

export class TechnicalStudent extends Student2{
    private technicalRegistration: number;
  
    constructor(name: string, age: number, gender: string, registration: number, course: string, technicalRegistration: number) {
        super(name, age, gender, registration, course);
        this.technicalRegistration = technicalRegistration;
    }
  
    public getTechnicalRegistration(): number{
        return this.technicalRegistration;
    }
  
    public setTechnicalRegistration(technicalRegistration: number): void{
        this.technicalRegistration = technicalRegistration;
    }

    public practice(): void{
        console.log("The student is practicing...")
    }
}