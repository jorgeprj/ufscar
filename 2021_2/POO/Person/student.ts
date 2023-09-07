import { Person } from "./person";

export class Student extends Person{
    private registration: number;
    private course: string;
  
    constructor(name: string, age: number, gender: string, registration: number, course: string){
        super(name, age, gender);
        this.registration = registration;
        this.course = course;
    }
  
    public getRegistration(): number{
        return this.registration;
    }
  
    public setRegistration(registration: number): void{
        this.registration = registration;
    }
  
    public getCourse(): string{
        return this.course;
    }
  
    public setCourse(course: string): void{
        this.course = course;
    }
  
    public cancelRegistration(): void{
        console.log(`The registration of student ${this.name} in the course ${this.course} has been canceled.`);
        this.registration = 0;
    }
}