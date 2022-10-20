export class Person{
    public firstName: string;
    public lastName: string;
    private age: number;
    protected cpf: string;

    constructor(firstName: string, lastName: string, age: number, cpf: string){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.cpf = cpf;
    }

    getAge(): number{ // Encapsulation
        return this.age;
    }

    getCpf(): string{
        return this.cpf;
    }

    getName(): string{
        return "Person name: "+ this.firstName + " " + this.lastName;
    }
}

export class Student extends Person{ // Inheritance
    private classroom: string;

    constructor(firstName: string, lastName: string, age: number, cpf: string, classroom: string){
        super(firstName,lastName,age,cpf);
        this.classroom = classroom;
    }

    getName(): string{ // Polymorphism
        return "Student name: "+ this.firstName + " " + this.lastName;
    }
}
export class Client extends Person{
    getName(): string{ // Polymorphism
        return "Client name: "+ this.firstName + " " + this.lastName;
    }
}

const person = new Person("Kevin","Nascimento",24,"000000000-00");
const student = new Student("Igor","Guilherme",25,"000000000-00", "0004");
const client = new Client("Jorge","Pires",20,"000000000-00");

console.log(person.getName());
console.log(student.getName());
console.log(client.getName());
