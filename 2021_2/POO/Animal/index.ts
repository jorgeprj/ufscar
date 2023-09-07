import { Bird } from "./bird";
import { Fish } from "./fish";
import { Kangaroo } from "./kangaroo";
import { Mammal } from "./mammal";
import { Reptile } from "./reptile";

//const a = new Animal()
const m = new Mammal();
const k = new Kangaroo();
const r = new Reptile();
const f = new Fish();
const b = new Bird();

m.setName("Doug")
m.setWeight(85.3);
m.setAge(2);
m.setMembers(4);
m.move();
m.eat();
m.makeSound();

k.setName("Kang")
k.setWeight(134.3);
k.setAge(6);
k.setMembers(4);
k.move();
k.eat();
k.makeSound();
k.usePouch();

r.setName("Kobra")
r.setWeight(10.3);
r.setAge(8);
r.setMembers(4);
r.move();
r.eat();
r.makeSound();

f.setName("Nemo")
f.setWeight(0.35);
f.setAge(1);
f.setMembers(0);
f.move();
f.eat();
f.makeSound();
f.blowBubbles();

b.setName("Rio")
b.setWeight(0.89);
b.setAge(2);
b.setMembers(2);
b.move();
b.eat();
b.makeSound();
b.nest();