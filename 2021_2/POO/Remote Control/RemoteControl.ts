import { iController } from "./iController";

class RemoteControl implements iController{
    private volume: number;
    private on: boolean;
    private playing: boolean;

    constructor(){
        this.volume = 50;
        this.on = false;
        this.playing = false;
    }

    private getVolume(): number{
        return this.volume;
    }

    private setVolume(volume: number): void{
        this.volume = volume;
    }

    private getOn(): boolean{
        return this.on;
    }

    private setOn(on: boolean): void{
        this.on = on;
    }

    private getPlaying(): boolean{
        return this.playing;
    }

    private setPlaying(playing: boolean): void{
        this.playing = playing;
    }

    public turnOn(): void{
        this.setOn(true);
    }

    public turnOff(): void{
        this.setOn(false);
    }

    public openMenu(): void{
        console.log(this.getOn())
        console.log(this.getVolume())
        console.log(this.getPlaying())
    }

    public closeMenu(): void{
        console.log("Closing menu...")
    }

    public turnUpVolume(): void{
        if(this.getOn())
            this.setVolume(this.getVolume() + 5);
    }

    public turnDownVolume(): void{
        if(this.getOn())
            this.setVolume(this.getVolume() - 5);
    }

    public turnOnMute(): void{
        if(this.getOn() && this.getVolume() > 0)
            this.setVolume(0);
    }

    public turnOffMute(): void{
        if(this.getOn() && this.getVolume() == 0)
            this.setVolume(50);
    }

    public play(): void{
        if(this.getOn() && !this.getPlaying())
            this.setPlaying(true);
    }

    public pause(): void{
        if(this.getOn() && this.getPlaying())
            this.setPlaying(false);
    }
}

const c1 = new RemoteControl();
c1.turnOn()
c1.openMenu()
c1.closeMenu()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.turnUpVolume()
c1.play()
c1.openMenu()
c1.closeMenu()
c1.turnOnMute()
c1.openMenu()