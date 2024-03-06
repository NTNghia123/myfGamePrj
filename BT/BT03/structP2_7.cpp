#include <iostream>
using namespace std;

struct Rect {
  int xR, yR, wR, hR ;
  void getPos(){
      cout << "nhap vao lan luot x,y,w,r: ";
      cin >> xR >> yR >> wR >> hR;
  }
};

struct Ship{
  Rect rect;
  string id;
  int dx, dy;

  void getIn4(){
      cout << "nhap vao ID cua con tau: " ;
        cin >> ws;
        getline(cin,id);
      cout  << "nhap vao toc do cua con tau truc x: " ;
      cin >> dx ;
      cout  << "nhap vao toc do cua con tau truc y: " ;
      cin >> dy ;

  }

  void move(){
    rect.xR += dx;
    rect.yR += dy;
  }
  void so_lan_move(){
      int so_lan;
      cout << "nhap vao so lan move: ";
      cin >> so_lan;
      for ( int i = 0 ; i < so_lan; i++){
          move();
      }
  }
};

void display(const Ship& ship){
    //hien thi so hieu va toa do
    cout << "Con tau "<< ship.id << " co toa do la: (" << ship.rect.xR << "," << ship.rect.yR<< ")" << endl ;
}


int main()
{
    Ship ship1, ship2;

    ship1.getIn4();
    ship1.rect.getPos();
cout << endl;
    ship2.getIn4();
    ship2.rect.getPos();

    for (int i = 0 ; i < 10; i++){
        ship1.move();
        ship2.move();

        display(ship1);
        display(ship2);
        cout << endl;
    }
    return 0;
}
