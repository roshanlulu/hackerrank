#include <iostream>
#include <exception>

using namespace::std;

// Definition of new exception derived from default exception class
class BadLengthException : public exception {
  public:
    int n;
    // Parameterized constructer
    BadLengthException(int exceptionvalue);
    //  over-ride existing method what
    const char* what() const throw() {
      return to_string(n).c_str();
  }
};

BadLengthException::BadLengthException(int exceptionvalue){
  BadLengthException::n = exceptionvalue;
}

int main () {
  int numtestcase, usernamelen;
  string username;

  cin >> username;
  usernamelen = username.length();
  try{
    if (usernamelen < 5){
      throw BadLengthException(usernamelen);
    }
    else if(usernamelen == 5){
      throw "Five";
    }
    else
    {
      cout << "Valid! Username : " <<username << endl;
    }
  }
  catch(const char* e){
    cout << " String exception: " << e << endl;
  }
  catch(BadLengthException e){
    cout << "Too short: " << e.what() << endl;
  }
  return 0;
}