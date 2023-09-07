import { Fight } from "./Fight";
import { Fighter } from "./Fighter";

const f = new Array();
f[0] = new Fighter("Terry Silver", "USA", 73, "Cobra Kai Team", "Tang Soo Do", 61, 23, 8);
f[1] = new Fighter("John Kreese", "USA", 71, "EX Cobra Kai Team", "Tang Soo Do", 54, 25, 9);
f[2] = new Fighter("Daniel LaRusso", "USA", 53, "Eagle Fang Karate", "Gōjū-ryū", 40, 20, 2);
f[3] = new Fighter("Johnny Lawrence", "USA", 52, "Eagle Fang Karate", "Tang Soo Do + Gōjū-ryū", 44, 28, 1);
f[4] = new Fighter("Eli Hawk Moskowitz", "USA", 17, "Eagle Fang Karate", "Tang Soo Do + Gōjū-ryū", 7, 1, 0);
f[5] = new Fighter("Robby Keene", "USA", 17, "Eagle Fang Karate", "Gōjū-ryū", 6, 2, 0);
f[6] = new Fighter("Miguel Diaz", "USA", 17, "Eagle Fang Karate", "Tang Soo Do + Gōjū-ryū", 6, 1, 0);
f[7] = new Fighter("Kenny Payne", "USA", 14, "Cobra Kai Team", "Tang Soo Do", 2, 1, 0);
f[8] = new Fighter("Devon Lee", "USA", 14, "Cobra Kai Team", "Tang Soo Do", 3, 1, 0);

const k01 = new Fight();
k01.scheduleFight(f[0], f[1]);
k01.fight();

const k02 = new Fight();
k02.scheduleFight(f[2], f[6]);

const k03 = new Fight();
k03.scheduleFight(f[6], f[6]);
