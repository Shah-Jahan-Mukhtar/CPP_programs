#include<iostream>
 using namespace std;
class Shape {
	   protected:
      int width;
      int height;
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      

};

class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main() {
   Rectangle R;
 
   R.setWidth(45);
   R.setHeight(6);
   cout << "Total area: " << R.getArea()<<"M"<< endl;

   return 0;
}
