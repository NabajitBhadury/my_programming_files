#include <iostream>
#include <ostream>
#include <string>

class Person
{
private:
  std::string name;
  float height;
  int weight;
  bool is_good;

public:
  void print_info()
  {
    std::cout << "Name:: " << name << std::endl
              << "Height:: " << height << std::endl
              << "Weight:: " << weight
              << std::endl; // In Class method declaration
  }

  Person(std::string name_in, float height_in, int weight_in)

  { // constructor
    name = name_in;
    height = height_in;
    weight = weight_in;
  }

  Person(std::string name_in, float height_in)
  {
    name = name_in;
    height = height_in;
    weight = 65;
  }

  void print_name();
};

void Person::print_name()
{
  std::cout << "Name:: " << name
            << std::endl; // Out of class method declaration
}

class Student : Person
{

  int id;

  // public:
};

int main()
{
  Person kaushik = Person("Kaushik", 5.4);

  kaushik.print_info();
  return 0;
}
