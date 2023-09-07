import { Fighter } from "./fighter";

export class Fight{
    private challenged: Fighter;
    private challenger: Fighter;
    private winner: Fighter | null;
    private approved: boolean;

    public getChallenged(): Fighter{
        return this.challenged;
    }

    public setChallenged(challenged: Fighter): void{
        this.challenged = challenged;
    }

    public getChallenger(): Fighter {
        return this.challenger;
    }

    public setChallenger(challenger: Fighter): void{
        this.challenger = challenger;
    }

    public getWinner(): Fighter | null{
        return this.winner;
    }

    public setWinner(winner: Fighter): void{
        this.winner = winner;
    }

    private isApproved(): boolean{
        return this.approved;
    }

    private setApproved(approved: boolean): void{
        this.approved = approved;
    }

    public scheduleFight(challenged: Fighter, challenger: Fighter): void{
        if(challenged.getDivision() != challenger.getDivision())
            console.log("This fight cannot be scheduled. Check the fighter categories.");
        if(challenged.getName() == challenger.getName())
            console.log("This fight cannot be scheduled. Check the fighters.");
        else{
            this.setApproved(true);
            this.setChallenged(challenged);
            this.setChallenger(challenger);
        }
    }
  
    public simulateFight(){
        if(!this.isApproved())
            console.log("This fight can't happen.");
        else{
            console.log(`${this.challenged.getName()} x ${this.challenger.getName()} `)
            const challengedScore = this.challenged.getWinPercentage() + this.challenged.getAttributes().getSkill();
            const challengerScore = this.challenger.getWinPercentage() + this.challenger.getAttributes().getSkill();
  
            const totalScore = challengedScore + challengerScore;
            const winningOdds = Math.random() * totalScore;
  
            if(winningOdds <= challengedScore){
                this.winner = this.challenged;
                this.challenged.getRecord().winFight();
                this.challenger.getRecord().loseFight();
            }else{
                this.winner = this.challenger;
                this.challenger.getRecord().winFight();
                this.challenged.getRecord().loseFight();
            }
            
            console.log(`${this.winner.getName()} wins!`);
            return this.winner;
        }
    }
}