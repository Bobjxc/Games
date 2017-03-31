#include<iostream>
#include<conio.h>
#include<queue>
#include<ctime>
#include<cstdlib>
using namespace std;
const int x=20,y=20,freshtime=50;
bool map[x+1][y+1];
int score=0;
int dirx,diry,numx,numy,prex,prey;
bool isgameover=0;
struct point{
	int x,y;
};
queue<point> dl;
void delay(int x){
	int t=clock();
	while(clock()-t<=x);
}
void random(){
	numx=rand()%x+1;
	numy=rand()%y+1;
	while(map[numx][numy]){
		numx=rand()%x+1;
		numy=rand()%y+1;
	}
}
void print(){
	system("cls");
	cout<<"score:"<<score<<endl;
	cout<<"o ";
	for(int i=1;i<=x;i++) cout<<"- ";
	cout<<"o\n";
	for(int i=1;i<=x;i++){
		cout<<"| ";
		for(int j=1;j<=y;j++)
			if(i==dl.back().x&&j==dl.back().y){
				if(dirx==0){
					if(diry==1) cout<<"> ";
					else cout<<"< ";
				}else if(dirx==1) cout<<"v ";
				else cout<<"^ ";
			}
			else if(map[i][j]) cout<<"O ";
			else if(i==numx&&j==numy) cout<<"* ";
			else cout<<"  ";
		cout<<"|\n";
	}
	cout<<"o ";
	for(int i=1;i<=x;i++) cout<<"- ";
	cout<<"o\n";
}
void csh(){
	point p;
	p.x=x/2; p.y=y/2+1;
	map[p.x][p.y]=1;
	dl.push(p);
	point pp;
	pp.x=x/2; pp.y=y/2;
	map[pp.x][pp.y]=1;
	dl.push(pp);
	dirx=0; diry=-1;
	prex=0; prey=-1;
	random();
}
void move(){
	point p=dl.front();
	map[p.x][p.y]=0;
	point pp=dl.back();
	pp.x+=dirx; pp.y+=diry;
	if(pp.x==numx&&pp.y==numy){
		random();
		score++;
	}else if(pp.x<=0||pp.x>x||pp.y<=0||pp.y>y||map[pp.x][pp.y]){
		isgameover=1;
		return;
	}
	else dl.pop();
	map[pp.x][pp.y]=1;
	dl.push(pp);
}

int main(){
	csh();
	print();
	while(1){
		int t=clock();
		while(clock()-t<=freshtime){
			if(kbhit()){
				int t=getch();
				if(t=='w'&&prex!=1){
					dirx=-1;
					diry=0;
					print();
				}else if(t=='s'&&prex!=-1){
					dirx=1;
					diry=0;
					print();
				}else if(t=='a'&&prey!=1){
					dirx=0;
					diry=-1;
					print();
				}else if(t=='d'&&prey!=-1){
					dirx=0;
					diry=1;
					print();
				}
			}
		}
		prex=dirx;
		prey=diry;
		move();
		if(isgameover){
			cout<<"gameover!";
			delay(3000);
			return 0;
		}
		print();
	}
} 
