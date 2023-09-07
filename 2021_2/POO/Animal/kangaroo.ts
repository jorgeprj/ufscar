import { Mammal } from "./mammal";

export class Kangaroo extends Mammal{

    public usePouch(): void{
        console.log(`${this.name}is using its pouch...`);
    }

    public override move(): void{
        console.log(`${this.name} is jumping...`);
    }
}