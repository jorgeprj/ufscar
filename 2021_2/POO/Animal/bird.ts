import { Animal } from "./animal";

export class Bird extends Animal{
    private featherColor: string;

    public getFeatherColor(): string{
        return this.featherColor
    }
    
    public setFeatherColor(featherColor: string): void{
        this.featherColor = featherColor;
    }

    public override move(): void{
        console.log(`${this.name} is flying...`);
    }

    public override eat(): void{
        console.log(`${this.name} is eating fruits...`);
    }

    public override makeSound(): void{
        console.log(`${this.name} is making bird's sound...`);
    }

    public nest(): void{
        console.log(`${this.name} built a nest...`)
    }
}