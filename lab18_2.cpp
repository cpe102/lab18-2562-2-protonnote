//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R,Rect *Q){
	double a_x,b_x,ho,a_y,b_y,ver;
	a_x = R->x + R->w;
	b_x = Q->x + Q->w;
	ho = min(a_x,b_x) - max(R->x,Q->x);
	a_y = R->y - R->h;
	b_y = Q->y - Q->h;
	ver = min(R->y,Q->y) - max(a_y,b_y);
	if (ver*ho < 0) return 0;
	else return ver*ho;
}

int main(){
	Rect R,Q;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> R.x >> R.y >> R.w >> R.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> Q.x >> Q.y >> Q.w >> Q.h;
	cout << "Overlap area = " << overlap(&R,&Q) ;	
	return 0;
}
