import { Employee } from "./employee";
import { Person2 } from "./person2";
import { Professor } from "./professor";
import { ScholarshipStudent } from "./scholarshipStudent";
import { Student2 } from "./student2";
import { TechnicalStudent } from "./technicalStudent";

//const p1 = new Person2("Peter",43,"Male");
const p2 = new Student2("Mary",20,"Female",12345,"Computer Science");
const p3 = new Professor("Bob",54,"Male","Javascript",5000);
const p4 = new Employee("Alex",27,"Female","Cleaning",true);
const p5 = new TechnicalStudent("Jorge",21,"Male",77777,"Computer Science",12345);
const p6 = new ScholarshipStudent("Gabb",30,"Female",66621,"Medicine",5000)

//p1.birthday();
p2.birthday();
p3.birthday();
p4.birthday();
p5.birthday();
p6.birthday();

p2.cancelRegistration();
p3.receiveSalaryIncrease(45);
p4.changeJob("Inspector");


p5.payMonthlyFee()
p6.payMonthlyFee();

p5.practice();
p6.renewScholarship();