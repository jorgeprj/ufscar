export abstract class Animal{
    protected name: string;
    protected weight: number;
    protected age: number;
    protected members: number;

    public getName(): string{
        return this.name
    }
    
    public setName(name: string): void{
        this.name = name;
    }

    public getWeight(): number{
        return this.weight
    }
    
    public setWeight(weight: number): void{
        this.weight = weight;
    }

    public getAge(): number{
        return this.age
    }
    
    public setAge(age: number): void{
        this.age = age;
    }

    public getMembers(): number{
        return this.members
    }
    
    public setMembers(members: number): void{
        this.members = members;
    }

    public abstract move(): void;
    public abstract eat(): void;
    public abstract makeSound(): void;
}