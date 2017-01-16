#include <iostream>

using namespace::std;

class Box {
  private:
    int l, b, h;
  public:
    // Default Constructor
    Box();
    // Parameterized constructor
    Box(int length, int breadth, int height);
    // Copy constructor
    Box(Box &B);

    int getLength(void);
    int getBreadth(void);
    int getHeight(void);
    long long CalculateVolume(void);

    // Operator overloading using "this"" operator
    bool operator<(const Box& B);

    // Operator overloading << usinf friend function
    friend ostream& operator<<(ostream& out, Box& B){
      out << B.l << B.b << B.h;
      return out;
    }
};

Box::Box() {
  Box::l = 0;
  Box::b = 0;
  Box::h = 0;
}

Box::Box(int length, int breadth, int height) {
  Box::l = length;
  Box::b = breadth;
  Box::h = height;
}

Box::Box(Box &B) {
  Box::l = B.l;
  Box::b = B.b;
  Box::h = B.h;
}

int Box::getLength(void) {
  return Box::l;
}
int Box::getBreadth(void) {
  return Box::b;
}
int Box::getHeight(void) {
  return Box::h;
}
long long Box::CalculateVolume(void) {
  return (long long)(Box::l) * Box::b * Box::h;
}

bool Box::operator<(const Box& B){
  Box box = *this;
  bool aIsLesser;

  if ((this->l < B.l) || 
      ((this->b < B.b) && (this->l == B.l)) || 
      ((this->h < B.h) && (this->b == B.b) && (this->l == B.l))) {
    aIsLesser = true;
  }
  else {
    aIsLesser = false;
  }
  return aIsLesser;
}




int main() {
  int l, b, h, l1, b1, h1;
  Box *copybox, *defaultbox, *opolbox, *friendbox;

  cin >> l >> b >> h;
  Box parambox(l, b, h);
  cout << parambox.CalculateVolume() << " " << parambox.getLength() << " " << parambox.getBreadth() << " " << parambox.getHeight() << endl;

  copybox = new Box(parambox);
  cout << copybox->CalculateVolume() << " " << copybox->getLength() << " " << copybox->getBreadth() << " " << copybox->getHeight() << endl;

  defaultbox = new Box();
  cout << defaultbox->CalculateVolume() << " " << defaultbox->getLength() << " " << defaultbox->getBreadth() << " " << defaultbox->getHeight() << endl;


  cin >> l1 >> b1 >> h1;
  opolbox = new Box(l1, b1, h1);
  if(defaultbox < opolbox)
  {
    cout << "Lesser";
  }
  else{
    cout << "Greater";
  }

  friendbox = new Box(l1, b1, h1);
  cout << *friendbox << endl;
  
}