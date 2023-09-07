export class Fighter{
    public name: string;
    public nationality: string;
    public age: number;
    public affiliation: string;
    public style: string;
    public category: string;
    public wins: number;
    public loses: number;
    public draws: number;

    constructor(name: string, nationality: string, age: number, affiliation: string, style: string, wins: number, loses: number, draws: number){
        this.name = name;
        this.nationality = nationality;
        this.setAge(age);
        this.affiliation = affiliation;
        this.style = style;
        this.wins = wins;
        this.loses = loses;
        this.draws = draws;
    }

    public getName(): string{
        return this.name;
    }

    public setName(name: string): void{
        this.name = name;
    }

    public getNationality(): string{
        return this.nationality;
    }

    public setNationality(nationality: string): void{
        this.nationality = nationality;
    }

    public getAge(): number{
        return this.age;
    }

    public setAge(age: number): void{
        this.age = age;
        this.setCategory();
    }

    public getAffiliation(): string{
        return this.affiliation;
    }

    public setAffiliation(affiliation: string): void{
        this.affiliation = affiliation;
    }

    public getStyle(): string{
        return this.style;
    }

    public setStyle(style: string): void{
        this.style = style;
    }

    public getCategory(): string{
        return this.category;
    }

    public setCategory(): void{
        if(this.getAge() < 15)
            this.category = "Under 15"
        else if(this.getAge() < 18)
            this.category = "Under 18"
        else 
            this.category = "Legend"
    }

    public getWins(): number{
        return this.wins;
    }

    public setWins(wins: number): void{
        this.wins = wins;
    }

    public getLoses(): number{
        return this.loses;
    }

    public setLoses(loses: number): void{
        this.loses = loses;
    }

    public getDraws(): number{
        return this.draws;
    }

    public setDraws(draws: number): void{
        this.draws = draws;
    }

    public introduce(): void{
        console.log("Name: " + this.getName());
        console.log("Nationality: " + this.getNationality());
        console.log("Affiliation: " + this.getAffiliation());
        console.log("Style: " + this.getStyle());
        console.log("Age: " + this.getAge());
        console.log("Category: " + this.getCategory());
        console.log("Wins: " + this.getWins());
        console.log("Loses: " + this.getLoses());
        console.log("draws: " + this.getDraws());
    }

    public status(): void{
        console.log("Name: " + this.getName());
        console.log("Affiliation: " + this.getAffiliation());
        console.log("Wins: " + this.getWins());
        console.log("Loses: " + this.getLoses());
        console.log("draws: " + this.getDraws());
    }

    public winFight(): void{
        this.setWins(this.getWins() + 1);
    }

    public loseFight(): void{
        this.setLoses(this.getLoses() + 1);
    }

    public drawFight(): void{
        this.setDraws(this.getDraws() + 1);
    }
}