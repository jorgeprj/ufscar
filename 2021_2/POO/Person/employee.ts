import { Person } from "./person";

export class Employee extends Person{
    private sector: string;
    private working: boolean;
  
    constructor(name: string, age: number, gender: string, sector: string, working: boolean){
        super(name, age, gender);
        this.sector = sector;
        this.working = working;
    }
  
    public getSector(): string{
        return this.sector;
    }
  
    public setSector(sector: string): void{
        this.sector = sector;
    }
  
    public getWorking(): boolean{
        return this.working;
    }
  
    public setWorking(working: boolean): void{
        this.working = working;
    }
  
    public changeJob(newSector: string): void{
        console.log(`The employee ${this.name} is now working in the ${newSector} sector.`);
        this.sector = newSector;
    }
}