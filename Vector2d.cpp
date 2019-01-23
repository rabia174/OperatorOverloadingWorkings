#include<iostream>
#include"Vector2d.h"

using namespace std;

Vector2d::Vector2d( int x1,int y1 ): x( x1 ),y( y1 ) {}
Vector2d::Vector2d( const Vector2d& b )
{
  x=b.x;
  y=b.y;
}
Vector2d& Vector2d::operator=( const Vector2d& b )
{
  if( this !=&b )
 {
  x=b.x;
  y=b.y;
 }

 return *this;
}
Vector2d& Vector2d::operator+=( Vector2d b )
{
   (this->x)+=b.x;
   (this->y)+=b.y;
   
   return *this;
}
Vector2d  Vector2d::operator/( int b  )
{
   Vector2d r;
   
   r.x=(this->x)/b;
   r.y=(this->y)/b;

   return r;
}
Vector2d  Vector2d::operator*( int b  )
{
   Vector2d r;
   
   r.x=(this->x)*b;
   r.y=(this->y)*b;

   return r;
}
Vector2d operator*( int c,Vector2d b )
{
  Vector2d r;

  r=b*c;

  return r;
}
Vector2d  Vector2d::operator-()
{
  Vector2d r;

  r.x=-this->x;
  r.y=-this->y;

  return r;
}
Vector2d  Vector2d::operator++( int c)
{
  Vector2d r;

  r.x=(this->x)+5;
  r.y=(this->y)+5;

  return r;
}

ostream& operator<<(ostream& os,Vector2d& b)
{
  os<<"<"<<b.x<<","<<b.y<<">";
  return os;
}
