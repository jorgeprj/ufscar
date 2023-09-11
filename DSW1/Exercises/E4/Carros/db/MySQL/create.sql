drop database if exists Carros;

create database Carros;

use Carros;

create table Marca(id bigint not null auto_increment, nome varchar(256) not null, origem varchar(256) not null, primary key (id));

create table Carro(id bigint not null auto_increment, modelo varchar(256) not null, cor varchar(256) not null, ano integer not null, preco float not null, Marca_id bigint not null, primary key (id), foreign key (Marca_id) references Marca(id));

insert into Marca(origem, nome) values  ('Italia', 'Fiat');

insert into Marca(origem, nome) values ('Estados Unidos', 'Chevrolet');

insert into Marca(origem, nome) values ('Franca', 'Renault');

insert into Carro(modelo, cor, ano, preco, Marca_id) values ('Uno', 'Vermelho', 2023, 84990.00, 1);

insert into Carro(modelo, cor, ano, preco, Marca_id) values  ('Onix', 'Prata', 2019, 79900.9, 2);

insert into Carro(modelo, cor, ano, preco, Marca_id) values ('Logan', 'Preto', 2008, 19980.00, 3);
