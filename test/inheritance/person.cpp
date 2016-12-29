#include <iostream>
#include <string>

class MITPerson {
public:
  MITPerson(int id, std::string name, std::string address): 
                id(id), name(name), address(address) {}
  virtual ~MITPerson() {}
  virtual void displayProfile();
  virtual void changeAddress(std::string newAddress) {}

protected:
  int id;
  std::string name;
  std::string address;
};

void MITPerson::displayProfile()
{
  std::cout << "_______________________\n\n";
  std::cout << "Name: " << name << " ID: " << id
            << " Address: " << address << "\n";
  std::cout << "_______________________\n";
}

class Student: public MITPerson {
public:
  Student(int id, std::string name, std::string address,
          int course, int year): MITPerson(id, name, address),
                                  course(course), year(year) {}
  void displayProfile() override;
  void changeCourse(int newCourse);

private:
  int course;
  int year;
};

void Student::displayProfile()
{
  std::cout << "_______________________\n\n";
  std::cout << "Name: " << name << " ID: " << id
            << " Address: " << address << "\n";
  std::cout << "Course: " << course << "\n";
  std::cout << "Year: " << year << "\n";
  std::cout << "_______________________\n";
}

int main(int argc, char const *argv[])
{
  MITPerson *john = new MITPerson(901289, "John Doe", "500 Massachusetts Ave.");
  Student *james = new Student(971232, "James Lee", "32 Vassar St", 6, 2);
  MITPerson *steve = new Student(911923, "Steve", "99 Cambridge St." , 18, 3);

  john->displayProfile();
  james->displayProfile();
  steve->displayProfile();

  return 0;
}