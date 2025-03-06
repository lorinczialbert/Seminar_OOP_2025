//
// Created by 33alb on 3/6/2025.
//

#include <iostream>

class Dog {
  public:
    bool eat() {
      std::cout<<"Dog a mancat";
      return true;
    }
  int setAge(int newAge) {
      age = newAge;
      return age;
    }
  int getAge() {
      return age;
    }
  private:
    int age;
};
int main(){
  Dog dog;
  dog.eat();
  Dog dog1 = dog;
  dog1.setAge(10);
  dog1.getAge();
  // dog1.age = 10;
  // dog1.getAge();
  std::cout<<dog1.getAge();
  return 0;
}