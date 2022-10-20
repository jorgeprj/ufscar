class Character {
    public name: string;
    public damage: number;
  
    constructor(name: string, damage: number) {
      this.name = name;
      this.damage = damage;
    }
  
    public talk(): void {
      console.log('Says something ...');
    }
  
    public attack(): void {
      console.log(`Attacks his target with his fists.`);
    }
  }
  
  class Orc extends Character {
    public weapon: string;
  
    constructor(name: string, damage: number, weapon: string) {
      super(name, damage);
  
      this.weapon = weapon;
    }
  
    public talk(): void {
      console.log('Says something but in orcish ...');
    }
  
    public attack(): void {
      console.log(`Attacks his target with his ${this.weapon}.`);
    }
  }