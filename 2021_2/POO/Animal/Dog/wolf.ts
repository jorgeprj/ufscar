import { Mammal } from "./mammal";

export class Wolf extends Mammal{
    public override makeSound(): void{
        console.log(`${this.name} is howling...`);
    }
}