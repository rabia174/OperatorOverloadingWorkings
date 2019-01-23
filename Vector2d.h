#include<iostream>

using namespace std;

class Vector2d{

 int x,y;

 public:

 Vector2d( int=0,int=0 );
 Vector2d( const Vector2d& );
 Vector2d& operator=( const Vector2d& );
 Vector2d& operator+=( Vector2d );
 Vector2d  operator/( int );
 Vector2d  operator*( int );
 Vector2d  operator-();
 Vector2d  operator++(int);
 friend ostream& operator<<(ostream& os,Vector2d& b);

};

Vector2d operator*( int c, Vector2d b);
