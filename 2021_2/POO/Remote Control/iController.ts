export interface iController{
    turnOn(): void;
    turnOff(): void;
    openMenu(): void;
    closeMenu(): void;
    turnUpVolume(): void;
    turnDownVolume(): void;
    turnOnMute(): void;
    turnOffMute(): void;
    play(): void;
    pause(): void;
}