#include<iostream>
using namespace std;

class Rectangle{
private:
    double length, width;
public:
    void setValues(double, double);
    double getArea(){return length*width;}
    double getPerimeter(){return 2*length + 2*width;}
};

void Rectangle::setValues(double l, double w){
    length = l;
    width = w;
}

int main(int argc, char const *argv[]) {
  Rectangle r;
  double l, w;
  cout << "Enter length >> ";
  cin >> l ;
  cout << "Enter width >> ";
  cin >> w ;
  r.setValues(l,w);
  cout << "Area is " << r.getArea() << " : " << "Perimeter is " << r.getPerimeter();
  return 0;
}
