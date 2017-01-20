#include <iostream>

using namespace::std;

// Person Class
class Person{
  private:
    int cur_id;
  public:
    string name;
    int age;
    virtual void getdata(void){ };
    virtual void putdata(void){ };
    void setCurid(int id){ cur_id = id;}
    int getCurid(void){ return cur_id;}
};

// Professor Class
class Professor: public Person{
  private:
    int publications;

  public:
    static int cur_id;
    void getdata(void);
    void putdata(void);
    // Constructor
    Professor();
};

int Professor::cur_id = 0;

// Default Constructor
Professor::Professor(void){
  Professor::cur_id++;
  Professor::setCurid(Professor::cur_id);
}

void Professor::getdata(void){
  // scanf("%s %d %d", &name, &age, &publications);
  cin >> name >> age >> publications;
}

void Professor::putdata(void){
  // printf("%s %d %d %d \n",name.c_str(), age, publications, cur_id);
  cout << name << " " << age << " " << publications << " " << Professor::getCurid() << endl;
}

// Student Class
class Student: public Person{
  private:
    int marks[6];

  public:
    static int cur_id;
    void getdata(void);
    void putdata(void);
    // Constructor
    Student();
};

int Student::cur_id = 0;

Student::Student(void){
  Student::cur_id++;
  Student::setCurid(Student::cur_id);
}

void Student::getdata(void){
  cin >> name >> age ;
  for(int i = 0; i < 6 ; i++){
    cin >> marks[i];
  }
}

void Student::putdata(void){

  int total = 0;

  for(int i = 0; i < 6 ; i++){
    total += marks[i];
  }
  cout << name << " " << age <<  " " << total << " " << Student::getCurid() <<endl;
}


int main(){
  int personCount, personType;
  
  cin >> personCount;
  Person *p[personCount];

  for(int i = 0; i < personCount; i++){
    // Input person type - 1. Professor 2. Student
    cout << "Enter Person type: ";
    cin >> personType;
    if(personType == 1){
      p[i] = new Professor();
      cout << "Enter Professor Data: ";
    }
    else if(personType == 2){
      p[i] = new Student();
      cout << "Enter Student Data: ";
    }
    else{
      cout << "Invalid input";
      break;
    }
    p[i]->getdata();
  }

  // Print details of all professors
  for( int i = 0; i < personCount; i++){
    p[i]->putdata();
  }
}