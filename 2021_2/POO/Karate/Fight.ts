import { Fighter } from "./Fighter";

export class Fight{
    private challenged: Fighter;
    private challenger: Fighter;
    private rounds: number;
    private approved: boolean;

    private getChallenged(): Fighter{
        return this.challenged;
    }

    private setChallenged(challenged: Fighter): void{
        this.challenged = challenged;
    }

    private getChallenger(): Fighter {
        return this.challenger;
    }

    private setChallenger(challenger: Fighter): void{
        this.challenger = challenger;
    }

    private getRounds(): number {
        return this.rounds;
    }

    private setRounds(rounds: number): void{
        this.rounds = rounds;
    }

    private isApproved(): boolean{
        return this.approved;
    }

    private setApproved(approved: boolean): void{
        this.approved = approved;
    }

    public scheduleFight(challenged: Fighter, challenger: Fighter): void{
        if(challenged.getCategory() != challenger.getCategory())
            console.log("This fight cannot be scheduled. Check the fighter categories.");
        if(challenged.name == challenger.name)
            console.log("This fight cannot be scheduled. Check the fighters.");
        else{
            this.setApproved(true);
            this.setChallenged(challenged);
            this.setChallenger(challenger);
        }
    }
    public fight(): void{
        if(!this.isApproved())
            console.log("This fight can't happen.");
        else{
            this.challenged.introduce();
            this.challenger.introduce();
            let winner = Math.floor(Math.random() * (2 - 0 + 1) + 0)
            switch(winner){
                case 0: //draw
                    console.log("Draw!");
                    this.challenged.drawFight();
                    this.challenger.drawFight();
                    break;
                case 1: //challenged wins
                    console.log(this.challenged.getName() + " wins!")
                    this.challenged.winFight();
                    this.challenger.loseFight();
                    break;

                case 2: //challenger wins
                    console.log(this.challenger.getName() + " wins!")
                    this.challenger.winFight();
                    this.challenged.loseFight();
                    break;
            }
        }
    }
}