import { Animal } from "./animal";

export class Reptile extends Animal{
    private scaleColor: string;

    public getScaleColor(): string{
        return this.scaleColor
    }
    
    public setScaleColor(scaleColor: string): void{
        this.scaleColor = scaleColor;
    }

    public override move(): void{
        console.log(`${this.name} is crawling...`);
    }

    public override eat(): void{
        console.log(`${this.name} is eating vegetables...`);
    }

    public override makeSound(): void{
        console.log(`${this.name} is making reptile's sound...`);
    }
}