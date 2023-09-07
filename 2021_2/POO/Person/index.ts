import { Employee } from "./employee";
import { Person } from "./person";
import { Professor } from "./professor";
import { Student } from "./student";

const p1 = new Person("Peter",43,"Male");
const p2 = new Student("Mary",20,"Female",12345,"Computer Science");
const p3 = new Professor("Bob",54,"Male","Javascript",5000);
const p4 = new Employee("Alex",27,"Female","Cleaning",true);

p1.birthday();
p2.birthday();
p3.birthday();
p4.birthday();

p2.cancelRegistration();
p3.receiveSalaryIncrease(45);
p4.changeJob("Inspector");