class Pen2{
    public model: string;
    public color: string;
    private tip: number;
    protected charge: number = 100;
    protected capped: boolean = true; 

    public status(): void{
        console.log("Model: " + this.model);
        console.log("Color: " + this.color);
        console.log("Tip: " + this.tip);
        console.log("Charge: " + this.charge);
        console.log("Is it capped ?: " + this.capped);
    }

    public cap(): void{
        this.capped = true;
    }

    public uncap(): void{
        this.capped = false;
    }

    public write(): void{
        if(this.capped || this.charge <= 0){
            console.log("I can't write!");
        }else{
            console.log("Writing...")
        }
    }

    private paint(): void{
        if(this.capped || this.charge <= 0){
            console.log("I can't paint!");
        }else{
            console.log("Painting...")
        }
    }
}

const p1 = new Pen2();
p1.model = "Bic"
p1.color = "Black";
//p1.charge = 12; ////Can't be called because it is protected
p1.status();
p1.uncap();
//p1.paint(); //Can't be called because it is private

const p2 = new Pen2();
p2.status();
p1.model = "Bic Crystal"
p1.color = "Red";
//p1.tip = 0.5 //Can't be called because it is private
//p1.charge = 12; //Can't be called because it is protected
p2.status();

