#include<iostream>

using namespace std;

class Rectangle
{
  int x,y;
  int height,width;
  public:

  int operator&( Rectangle );
  int operator|( Rectangle );
  int operator^( Rectangle );
  friend ostream& operator<<( ostream& os,const Rectangle& b );
  friend istream& operator>>( istream& is,Rectangle& b);

};
