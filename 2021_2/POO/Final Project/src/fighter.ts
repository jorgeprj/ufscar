export class Fighter{
    private name: string;
    private age: number;
    private nationality: string;
    private record: FighterRecord;
    private attributes: FighterAttributes;
    private division: string;

    constructor(name: string, age: number, record: FighterRecord, attributes: FighterAttributes){
        this.name = name;
        this.age = age;
        this.record = record;
        this.attributes = attributes;
        this.setDivision();
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

    public getNationality(): string{
        return this.nationality;
    }

    public setNationality(nation: string): void{
        this.nationality = nation;
    }

    public getRecord(): FighterRecord{
        return this.record;
    }

    public setFighterRecord(record: FighterRecord): void{
        this.record = record;
    }

    public getAttributes(): FighterAttributes{
        return this.attributes;
    }

    public setAttributes(attributes: FighterAttributes): void{
        this.attributes = attributes;
    }

    public getDivision(): string{
        return this.division;
    }

    public setDivision(): void{
        if(this.attributes.getWeight() <= 125)
            this.division = "Flyweight";
        else if(this.attributes.getWeight() <= 135)
            this.division = "Bantamweight";
        else if(this.attributes.getWeight() <= 155)
            this.division = "Lightweight";
        else if(this.attributes.getWeight() <= 185)
            this.division = "Middleweight";
        else
            this.division = "Heavyweight";
    }

    public getWinPercentage(){
        const totalFights = this.record.getWins() + this.record.getLosses() + this.record.getDraws();
        return (this.record.getWins() / totalFights) * 100;
    }

    public introduce(){
        console.log(`Name: ${this.name}`);
        console.log(`Age: ${this.age}`);
        console.log(`Nationality: ${this.nationality}`);
        console.log(`Division: ${this.division}`);
        this.attributes.introduce();
        this.record.introduce();
    }
}

class FighterRecord{
    private wins: number;
    private losses: number;
    private draws: number;

    constructor(wins: number, losses: number, draws: number){
        this.wins = wins;
        this.losses = losses;
        this.draws = draws;
    }

    public getWins(): number{
        return this.wins;
    }

    public setWins(wins: number): void{
        this.wins = wins;
    }

    public winFight(): void{
        this.wins++;
    }

    public getLosses(): number{
        return this.losses;
    }

    public setLosses(losses: number): void{
        this.losses = losses;
    }

    public loseFight(): void{
        this.losses++;
    }

    public getDraws(): number{
        return this.draws;
    }

    public setDraws(draws: number): void{
        this.draws = draws;
    }

    public drawFight(): void{
        this.draws++;
    }

    public introduce(): void{
        console.log(`Record: ${this.wins} - ${this.losses} - ${this.draws}`);
    }
}
  
class FighterAttributes{
    private height: number;
    private weight: number;
    private reach: number;
    private skill: number;

    constructor(height: number, weight: number, reach: number, skill: number){
        this.height = height;
        this.weight = weight;
        this.reach = reach;
        this.skill = skill;
    }

    public getHeight(): number{
        return this.height;
    }

    public setHeight(height: number): void{
        this.height = height;
    }

    public getWeight(): number{
        return this.weight;
    }

    public setWeight(weight: number): void{
        this.weight = weight;
    }

    public getReach(): number{
        return this.reach;
    }

    public setReach(reach: number): void{
        this.reach = reach;
    }

    public getSkill(): number{
        return this.skill;
    }

    public setSkill(skill: number): void{
        this.skill = skill;
    }

    public introduce(): void{
        console.log(`Height: ${this.height}`);
        console.log(`Weight: ${this.weight}`);
        console.log(`Reach: ${this.reach}`);
        console.log(`Skill: ${this.skill}`);
    }

}