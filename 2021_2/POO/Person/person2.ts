export abstract class Person2{
    name: string;
    age: number;
    gender: string;
  
    constructor(name: string, age: number, gender: string){
        this.name = name;
        this.age = age;
        this.gender = gender;
    }

    public getName(): string{
        return this.name;
    }

    public setName(name: string): void{
        this.name = name;
    }

    public getAge(): number{
        return this.age;
    }

    public setAge(age: number): void{
        this.age = age;
    }

    public getGender(): string{
        return this.gender;
    }

    public setGender(gender: string): void{
        this.gender = gender;
    }
  
    public birthday(): void{
        this.age++;
    }
}