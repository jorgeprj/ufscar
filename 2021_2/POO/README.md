# Object-Oriented Programming (POO)

Repository created to store all code projects and works created during graduation. Unfortunately some projects were lost.

## Subject Description
Unfortunately, the content created for the subject taught by Professor [Renato Bueno](https://site.dc.ufscar.br/docente/5cefc9b548365a001679f76c) during the graduation period was lost.

So, the material contained here will be from the [Udemy course](https://www.udemy.com/course/curso-de-javascript-moderno-do-basico-ao-avancado/) and [Curso em Vídeo course](https://www.youtube.com/playlist?list=PLHz_AreHm4dkqe2aR0tQK74m8SFe-aGsY). The projects are very similar. However, the language changes.

### Professor
[![Otávio Miranda](https://img.shields.io/badge/Otávio_Miranda-%2300599C.svg?style=for-the-badge&logo=GoogleScholar&logoColor=white)](https://www.otaviomiranda.com.br)

[![Gustavo Guanabara](https://img.shields.io/badge/Gustavo_Guanabara-%2300599C.svg?style=for-the-badge&logo=GoogleScholar&logoColor=white)](https://www.linkedin.com/in/guanabara/?originalSubdomain=br)

### Language
![TypeScript](https://img.shields.io/badge/typescript-%23007ACC.svg?style=for-the-badge&logo=typescript&logoColor=white)

## Contents
This material was divided into some parts:

### First concepts

* **What's an object ?** First concepts.
  
    [Class Diagram](/2021_2/POO/Pen/Pen.drawio) | [Practice](/2021_2/POO/Pen/Pen.ts) 

* **Visibility** `Public`, `Private` and `Protected`.
  
    [Class Diagram](/2021_2/POO/Pen/Pen2.drawio) | [Practice](/2021_2/POO/Pen/Pen2.ts) 

* **Start of encapsulation** It is one of the elements that add security to the application in object-oriented programming by hiding the properties, creating a kind of black box. Most object-oriented languages ​​implement encapsulation based on private properties, linked to special methods called `getters` and `setters`, which will return and set the property's value, respectively.
  
    [Class Diagram](/2021_2/POO/Pen/Pen3.drawio) | [Practice](/2021_2/POO/Pen/Pen3.ts) 

* **First test** Create an object called Account Bank that makes it possible to open the account, close the account, deposit value to the balance, withdraw values ​​from the balance and pay the bank fee. Create the code and class diagram.
   
    OBS: Create at least one public, protected and private attribute.

    Specifications:
    - To open an account it is necessary to define the type of account: checking or savings.
    - New checking accounts start with a $50 in balance.
    - New savings accounts stat with $150 in balance.
    - It is only possible to close the account if the balance is equal to zero.
    - The monthly fee for the checking account will be $12
    - The monthly fee for the savings account will be $20
  

    [Class Diagram](/2021_2/POO/Bank%20Account/BankAccout.drawio) | [Practice](/2021_2/POO/Bank%20Account/BankAccount.ts) 

### Encapsulation

* **Interfaces** List of services provided by a component. It is the contact with the outside world that defines what can be done with an object of this class.
  
    [Class Diagram](/2021_2/POO/Remote%20Control/RemoteControl.drawio) | [Practice](/2021_2/POO/Remote%20Control/RemoteControl.ts)


* **Relationship between classes** How to implement the different types of relationships between classes. 
In this content module, the example given was karate fighting.One example is that the `aggregation` relationship can be seen between the [Fighter class](Karate/Fighter.ts) and the [Fight class](Karate/Fight.ts). 
    Below are some specifications:
    - A fight can only be scheduled between fighters of the same category.
    - Challenged and challenger must be different fighters
    - A fight can only happen if it is approved
    - A fight can only result in a victory for one of the fighters or a draw.
  
    [Class Diagram](Karate/Karate.drawio) | [Practice](Karate/Karate.ts)

### Inheritance

* **What's an inheritance ?** Inheritance makes it possible for classes to share their attributes, methods, and other class members with each other. For the link between classes, inheritance adopts a hierarchically schematized relationship.
  
    [Class Diagram](/2021_2/POO/Person/Person.drawio) | [Practice](/2021_2/POO/Person/index.ts) 


* **Tree, abstraction and override** The fact that derived classes inherit attributes from base classes ensures that object-oriented programs grow linearly and non-geometrically in complexity. Each new derived class has no unpredictable interactions with the rest of the system's code.
  
    [Class Diagram](/2021_2/POO/Person/Person2.drawio) | [Practice](/2021_2/POO/Person/index2.ts) 


### Polymorphism

* **What's an polymorphism ?** First concepts and *Override*. Overriding methods is a concept of polymorphism that allows us to rewrite a method, that is, we can rewrite in child classes methods initially created in the parent class, the methods that will be overridden.
  
    [Practice](/2021_2/POO/Animal/index.ts) 

* **Overload** Method overloading (overload) is a concept of polymorphism that basically consists of creating variations of the same method, that is, the creation of two or more methods with completely identical names in a class.

    Unfortunately the typescript does not support overloading.However, a demo was made.**(NOT WORKING)**
    
    [Practice](/2021_2/POO/Animal/Dog/dog.ts) 


### Final Project (UFC)

**Description** Here's a manual to guide students in creating their object-oriented programming projects in TypeScript:

1. **Project Theme:**

- Each student must choose a unique theme for their project, such as a task management application, a product sales system, or a simple game.

2. **Mandatory Concepts:**

- Each project must use the concepts learned during the semester, such as encapsulation, inheritance, and polymorphism.
- The project should be based on something that is easy to understand.
- The project must contain at least 3 different classes, each representing a different object-oriented programming concept.

3. **Documentation:**

- Each project must be documented with an English README, explaining what the project is, how to install and use it, as well as which object-oriented programming concepts were applied in its development.
- Include a class diagram representing the system's structure, showing the classes and their relationships, as well as their attributes and methods.
- The README should contain a demonstration of how the system should work, with everyday examples.

4. **Language:**

- The entire project must be developed in English, including the source code and documentation, in order to ensure that the project can be understood and used by a wider audience.

5. **Index.ts:**

- It is necessary to create an index.ts file that demonstrates the project's operation.
- The index.ts file should import the created classes and use their methods and attributes appropriately.

Make sure to follow all of these guidelines when creating your TypeScript project. Remember that documentation is just as important as code, so give special attention to creating clear and well-organized documentation. Use everyday examples to demonstrate how the system should work and make the project easier to understand and use. Good luck in developing your project!

[README](/2021_2/POO/Final%20Project/README.md) | [Class Diagram](/2021_2/POO/Final%20Project/project.drawio) | [Classes](/2021_2/POO/Final%20Project/src/classes)

  ##

<div> 
    <a href="https://github.com/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-Github-000?logo=github&style=for-the-badge&logoColor=white" alt="Badge Github" />
    </a>
    <a href="https://www.linkedin.com/in/jorgeprj" target="_blank">
        <img src="https://img.shields.io/badge/-LinkedIn-0077B5?logo=linkedin&style=for-the-badge&logoColor=white" alt="Badge LinkedIn" />
    </a>
    <a href="mailto:jorgeprj2020@gmail.com-">
        <img alt="eMail" src="https://img.shields.io/badge/jorgeprj2020@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white" />
    </a>
</p>