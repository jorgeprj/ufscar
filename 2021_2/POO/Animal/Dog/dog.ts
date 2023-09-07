import { Wolf } from "./wolf";

export class Dog extends Wolf{
    public override makeSound(): void{
        console.log(`${this.name} is barking!!`);
    }

    public react(phrase: string): void{
        if(phrase == "Take food" || phrase == "Hi!")
            console.log(`${this.name} is wagging and barking!!`);
        else
            console.log(`${this.name} is growling...`);
        
    }

    public react(hour: number, min: number): void{
        if(hour<12)
            console.log(`${this.name} is wagging!!`);
        else if(hour>=18)
            console.log(`${this.name} is sleeping...`);
        else
            console.log(`${this.name} is wagging and barking!!`);
    }

    public react(owner: boolean): void{
        if(owner)
            console.log(`${this.name} is wagging!!`);
        else
            console.log(`${this.name} is is growling...`);
    }

}

const d = new Dog();
d.react("Hi!"); // is wagging and barking!!
d.react("Bad dog!"); // is growling...
d.react(14, 23); // is wagging and barking!!
d.react(true); // is wagging!!