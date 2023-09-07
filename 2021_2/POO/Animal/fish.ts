import { Animal } from "./animal";

export class Fish extends Animal{
    private scaleColor: string;

    public getScaleColor(): string{
        return this.scaleColor
    }
    
    public setScaleColor(scaleColor: string): void{
        this.scaleColor = scaleColor;
    }

    public override move(): void{
        console.log(`${this.name} is swimming...`);
    }

    public override eat(): void{
        console.log(`${this.name} is eating substances...`);
    }

    public override makeSound(): void{
        console.log(`${this.name} no making sounds...`);
    }

    public blowBubbles(): void{
        console.log(`${this.name} is blowing bubbles...`)
    }
}