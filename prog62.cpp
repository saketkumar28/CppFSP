#include <bits/stdc++.h>
using namespace std;

class Point {
  int x,y;
public:
  Point(int a,int b){
    x=a;
    y=b;
  }
  bool operator==(const Point &p) const {
    return (x==p.x && y==p.y);
  }
};

int main(){
  Point p1(3,6);
  Point p2(3,5);
  if (p1==p2){
    cout<<"Equal"<<endl;
  }
  else{
    cout<<"Not equal...";
  }
}