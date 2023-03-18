class Pen{
    model: string;
    color: string;
    tip: number;
    charge: number = 100; //every created pen starts with full charge
    capped: boolean = true; //every created pen starts capped

    status(): void{
        console.log("Model: " + this.model);
        console.log("Color: " + this.color);
        console.log("Tip: " + this.tip);
        console.log("Charge: " + this.charge);
        console.log("Is it capped ?: " + this.capped);
    }

    write(): void{
        if(this.capped || this.charge <= 0){
            console.log("I can't write!");
        }else{
            console.log("Writing...")
        }
    }

    cap(): void{
        this.capped = true;
    }

    uncap(): void{
        this.capped = false;
    }
}

const p1 = new Pen();
p1.color = "Blue"
p1.tip = 0.5;
p1.uncap();
p1.status();
p1.write();

const p2 = new Pen();
p2.model = "BIC"
p2.model = "Black"
p2.charge = 0;
p2.uncap();
p2.status();
p2.write();