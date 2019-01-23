#include<iostream>
#include"Rectangle.h"

using namespace std;


ostream& operator<<( ostream& os,const Rectangle& b )
{
   os<<'('<<b.x<<','<<b.y<<')'<<'-'<<'<'<<b.width<<','<<b.height<<'>';

   return os;
}
istream& operator>>( istream& is,Rectangle& b )
{
   is>>b.x;
   is>>b.y;
   is>>b.width;
   is>>b.height;

   return is;
}
int Rectangle::operator&( Rectangle b )
{
 
   int left,right,bottom,top;
   int r1_left,r2_left,r1_right,r2_right,r1_bottom,r2_bottom,r1_top,r2_top;
   int intersection_x,intersection_y;
   int int_area=0,min_x,min_y;
   int check1=0,check2=0;

   if( this->x < b.x )
  {
     min_x=this->x;
     if( min_x+this->width>=b.x )check1=1;
  }
  else
  {
     min_x=b.x;
     if( min_x+b.width>=this->x )check1=1;
  }

  if( this->y < b.y )
  {
     min_y=this->y;
     if( min_y+this->height>=b.y )check2=1;
  }
  else
  {
     min_y=b.y;
     if( min_y+b.height>=this->y )check2=1;
  }

if( check1==0 || check2==0 )return 0;
else
{
   
   r1_left=this->x;
   r1_right=(this->x)+this->width;

   r2_left=b.x;
   r2_right=b.x+b.width;

   r1_top=this->y;
   r1_bottom=this->y+this->height;

   r2_top=b.y;
   r2_bottom=b.y+b.height;

   if( r1_right < r2_right ){ right=r1_right; }else{ right=r2_right; }
   if( r1_left > r2_left ){ left=r1_left; }else{ left=r2_left; }
   if( r1_bottom < r2_bottom ){ bottom=r1_bottom; }else{ bottom=r2_bottom; }
   if( r1_top > r2_top ){ top=r1_top; }else{ top=r2_top; }
      
   intersection_x=right-left;
   intersection_y=bottom-top;

    
   int_area=intersection_x*intersection_y;
   
   return int_area;
}
} 
int Rectangle::operator|( Rectangle b )
{

  int union_area=0,r1_area,r2_area;
  int left,right,bottom,top;
   int r1_left,r2_left,r1_right,r2_right,r1_bottom,r2_bottom,r1_top,r2_top;
   int intersection_x,intersection_y;
   int int_area=0,min_x,min_y;
   int check1=0,check2=0;

  r1_area=(this->width)*(this->height);

  r2_area=b.width*b.height;

if( this->x < b.x )
  {
     min_x=this->x;
     if( min_x+this->width>=b.x )check1=1;
  }
  else
  {
     min_x=b.x;
     if( min_x+b.width>=this->x )check1=1;
  }

  if( this->y < b.y )
  {
     min_y=this->y;
     if( min_y+this->height>=b.y )check2=1;
  }
  else
  {
     min_y=b.y;
     if( min_y+b.height>=this->y )check2=1;
  }

if( check1==0 || check2==0 ) int_area=0;
else
{
   
   r1_left=this->x;
   r1_right=(this->x)+this->width;

   r2_left=b.x;
   r2_right=b.x+b.width;

   r1_top=this->y;
   r1_bottom=this->y+this->height;

   r2_top=b.y;
   r2_bottom=b.y+b.height;

   if( r1_right < r2_right ){ right=r1_right; }else{ right=r2_right; }
   if( r1_left > r2_left ){ left=r1_left; }else{ left=r2_left; }
   if( r1_bottom < r2_bottom ){ bottom=r1_bottom; }else{ bottom=r2_bottom; }
   if( r1_top > r2_top ){ top=r1_top; }else{ top=r2_top; }
      
   intersection_x=right-left;
   intersection_y=bottom-top;

    
   int_area=intersection_x*intersection_y;
   
  
}
       
  
union_area=r1_area+r2_area-int_area;

return union_area;
}


int Rectangle::operator^( Rectangle b )
{
   int left,right,bottom,top;
   int r1_left,r2_left,r1_right,r2_right,r1_bottom,r2_bottom,r1_top,r2_top;
   int bounding_area;

   r1_left=this->x;
   r1_right=(this->x)+this->width;

   r2_left=b.x;
   r2_right=b.x+b.width;

   r1_top=this->y;
   r1_bottom=this->y+this->height;

   r2_top=b.y;
   r2_bottom=b.y+b.height;

   if( r1_right > r2_right ){ right=r1_right; }else{ right=r2_right; }
   if( r1_left < r2_left ){ left=r1_left; }else{ left=r2_left; }
   if( r1_bottom > r2_bottom ){ bottom=r1_bottom; }else{ bottom=r2_bottom; }
   if( r1_top < r2_top ){ top=r1_top; }else{ top=r2_top; }

   bounding_area=(right-left)*(bottom-top);

   return bounding_area;

}
  
