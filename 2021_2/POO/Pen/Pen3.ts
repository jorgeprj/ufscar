class Pen3{
    private model: string;
    private color: string;
    private tip: number;
    private charge: number;
    private isCapped: boolean;

    constructor(model: string, color: string, tip: number){
        this.model = model;
        this.color = color;
        this.tip = tip;
        this.charge = 100;
        this.isCapped = true;
    }

    public getModel(): string{
        return this.model;
    }

    public setModel(model: string): void{
        this.model = model;
    }

    public getColor(): string{
        return this.color;
    }

    public setColor(color: string): void{
        this.color = color;
    }

    public getTip(): number{
        return this.tip;
    }

    public setTip(tip: number): void{
        this.tip = tip;
    }

    public getCharge(): number{
        return this.charge;
    }

    public setCharge(charge: number): void{
        this.charge = charge;
    }

    public getIsCapped(): boolean{
        return this.isCapped;
    }

    public setIsCapped(capped: boolean): void{
        this.isCapped = capped;
    }

    public status(): void{
        console.log("Model: " + this.model);
        console.log("Color: " + this.color);
        console.log("Tip: " + this.tip);
        console.log("Charge: " + this.charge);
        console.log("Is it capped ?: " + this.isCapped);
    }

    public write(): void{
        if(this.isCapped || this.charge <= 0){
            console.log("I can't write!");
        }else{
            console.log("Writing...")
        }
    }

    public paint(): void{
        if(this.isCapped || this.charge <= 0){
            console.log("I can't paint!");
        }else{
            console.log("Painting...")
        }
    }
}

const p1 = new Pen3("BIC Special","White",0.7);
p1.status();
p1.write();
p1.setModel("BIC");
p1.setTip(0.7);
p1.setIsCapped(false);
p1.write();
p1.status();
console.log(p1.getModel())
console.log(p1.getTip())