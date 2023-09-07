import { Animal } from "./animal";

export class Mammal extends Animal{
    private furColor: string;

    public getFurColor(): string{
        return this.furColor
    }
    
    public setFurColor(furColor: string): void{
        this.furColor = furColor;
    }

    public override makeSound(): void{
        console.log(`${this.name} is making mammal's sound...`);
    }
}