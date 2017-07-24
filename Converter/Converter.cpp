
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <math.h>
#include<conio.h>
#include <string>
#include <inttypes.h>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 
#include <sstream>
#include <bitset>
#include <stdexcept>


//Tikrinau ar teisingai suprogramavau pagal http://www.exploringbinary.com/base-converter/
//Konvertuoju sveikuosius ir realiuosius teigiamus skaicius

/*
tik, nedariau jokiu ivesties patikrinimu. 
Jeigu pasirenk binarine reiksme, o ivedi ne binarine, programa yra vykdoma.
*/


using namespace std;

class CONVERTER{
			
	public:
		CONVERTER();
		void DecToBin(double);
		void FloatToDec();
		void DecToOct(double);
		void DecToHex(double);
		
		double BinToDec(double);
		double BinToOct(double);
		double BinToHex(double);
		
		double OctToBin(double);
		double OctToDec(double);
		double OctToHex(double);
		
		double HexToBin(double);
		double HexToOct(double);
		double HexToDec(double);
		
	
		double toDec(double, int s);
		double partOfTask(double, int, double, int, int);
		
		int residinDec(int, int);
		void task(bool);
};


CONVERTER::CONVERTER(){} 

//--------------------------
void CONVERTER::DecToBin(double impValue){

	bool t = true;
	
	int aF = (int)impValue;
	double bF = impValue - aF;
	
	if (bF==0){
		
		t = false;
		
	}
	
	int zx = 0, dx = 0;
	
	int binary[100];
	int binaryPoints[100];
	
	binaryPoints[0] = -1;
	
	
		
	while(aF>0){
		
		
		if (aF!=0){
	    	
	    	
	    	 if ( aF % 2 == 0){
	    	 	
	    		binary[zx] = 0;	    		
			}
		        
		    else{
		    	
		    	binary[zx] = 1;
		    	
			}
			
			
			zx++;
	    	
		}
	   
		
		aF = aF / 2;
	   	
	};
	
	

		
	do{
		
		bF = bF * 2;
					
		binaryPoints[dx] = (int)bF;			
	
		if (bF>=1){
			
			bF = bF - 1;
			
		}
		
		dx++;
		
	}while(bF!=0);
	

	
	
	
	cout<<"Binary value: ";
	

	for (int i=zx-1; i>-1;i--){
		
		cout<<binary[i];
		
	}
	
	
	
	if (t==true){
		
		cout<<".";	
		

		for(int i = 0; i<dx;i++){
			
			cout<<binaryPoints[i];		
	
		}
		
		
	}


		
	cout<<endl;


}
//-----------------------------
void CONVERTER::DecToOct(double impValue){
	
	long int decnum, rem, quot;
	int i=1, j, octnum[100];
	
	int intpart = (int)impValue;
	double decpart = impValue - intpart;
	
	quot=intpart;
	
	
	while(quot!=0)
	{
		octnum[i++]=quot%8;
		quot=quot/8;
	}
	
	
	int aa[100];
	aa[0] = -1;
	
	int it=0;
	
	
	while(decpart!=0){
		
		decpart = decpart * 8;
		
		if (decpart>0){
			
			aa[it] = (int)decpart;
			
			decpart = decpart - aa[it];
			
			it++;
			
		}
		else{	
		
			
			aa[it] = (int)decpart;
			it++;
			
			
		}
		
		
	}
	
	
	
	cout<<"Octal value: ";
	
	for(j=i-1; j>0; j--)
	{
		
		cout<<octnum[j];
		
	}
	
	if (aa[0]!=-1){
		
		cout<<".";
	
		for (i=0;i<it;i++){
			
			cout<<aa[i];
			
		}
		
		
	} 

	
	cout<<endl;
	
}
//-----------------------------
void CONVERTER::DecToHex(double impValue){
	
	
	long int decnum, rem, quot;
	char hexdecnum[100];
	int i=1, j, temp;
	
	int intpart = (int)impValue;
	double decpart = impValue - intpart;
	
	quot=intpart;
	
	while(quot!=0)
	{
		temp=quot%16;
		
		if(temp<10)
		{
			temp=temp+48;
		}
		else
		{
			temp=temp+55;
		}
		
		hexdecnum[i++]=temp;
		quot=quot/16;
	}
	
	
	int aa[100];
	aa[0] = -1;
	int it=0;
	
	
	while(decpart!=0){
		
		decpart = decpart * 16;
		
		if (decpart>0){
			
			aa[it] = (int)decpart;			
			decpart = decpart - aa[it];
			
		}
		else{
			
			aa[it] = (int)decpart;	
			
		}
		
		it++;
		
	}

	cout<<"Hexadecimal value: ";
		
	for(j=i-1; j>0; j--)
	{
		cout<<hexdecnum[j];
	}
	

	if (aa[0]!=-1){
		
		cout<<".";	
		
		
		for(int i=0; i<it;i++){
		
		
			if (aa[i]<10){
				
				cout<<aa[i];
				
			}
			else{
				
				if (aa[i]==10){
					cout<<"A";
				}
				else if (aa[i]==11){
					cout<<"B";
				}
				else if (aa[i]==12){
					cout<<"C";
				}
				else if (aa[i]==13){
					
					cout<<"D";
				}
				else if (aa[i]==14){
					cout<<"E";
				}
				else if (aa[i]==15){
					cout<<"F";
				}
					
				
			}
		
	
		}
		
		
	}

	cout<<endl;
	
}

//-----------------------------
double CONVERTER::BinToDec(double impValue){
	
	double g = toDec(impValue, 2);
	bool fl = false;

	std::ostringstream os;
	os << g;
	string str = os.str();
	
	for (int i=0;i<str.length();i++){
		
		if (str[i]=='.'){
			fl=true;
		}
	}
	
	if (fl){
		
		cout <<"Decimal value: "<<setprecision(4) << g << '\n';
		return 0;	
	}
	
	cout <<"Decimal value: "<<setprecision(0)<< g << '\n';
	
}
//-----------------------------
double CONVERTER::BinToOct(double impValue){
	
	
	double h = toDec(impValue, 2);
	DecToOct(h);	
	
}
//-----------------------------
double CONVERTER::BinToHex(double impValue){
	
	
	double h = toDec(impValue, 2);
	DecToHex(h);	
	
}
//-----------------------------
double CONVERTER::OctToBin(double impValue){
	
	
	double h = toDec(impValue, 8);
	DecToBin(h);
	
	
}
//-----------------------------
double CONVERTER::OctToHex(double bin){
	
	double h = toDec(bin, 8);
	DecToHex(h);
	
}
//-----------------------------
double CONVERTER::OctToDec(double impValue){
	
	double h = toDec(impValue, 8);
	bool fl = false;

	std::ostringstream os;
	os << h;
	string str = os.str();
	
	for (int i=0;i<str.length();i++){
		
		if (str[i]=='.'){
			fl = true;
		}
		
	}
	
	if (fl){
		
		cout <<"Decimal value: "<<setprecision(4) << h << '\n';
		return 0;
		
	}
	
	cout <<"Decimal value: "<<setprecision(0) << h << '\n';
			
}
//-----------------------------
int CONVERTER::residinDec(int n, int m){
	
	int intPart, residPart;
	
	intPart=n/m;
	residPart = n%m;

	return residPart;
			
}
//-----------------------------
double CONVERTER::toDec(double v, int s){
	
	
	double ans,frac,fun=0.0,a;
	int sum=0,dec,i=0,rem,b,j=1;
	dec=v;
	frac=v-dec;
	while(dec!=0){
		
		rem=dec%10;
		dec=dec/10;
		sum=sum+(rem*pow(s,(i++)));
	}
	while(frac!=0.000){
		
		a=10*frac;
		b=a;
		fun=fun+(b*(1/pow(s,(j++))));
		frac=a-b;		
	}

	ans=sum+fun;

	return ans;
	
}
//-----------------------------
double CONVERTER::HexToBin(double impValue){
	
	double h = toDec(impValue, 16);
	DecToBin(h);
}
//-----------------------------
double CONVERTER::HexToOct(double impValue){
	
	double g = toDec(impValue, 16);	
	DecToOct(g);
}
//-----------------------------
double CONVERTER::HexToDec(double impValue){
	
	double g = toDec(impValue, 16);	
	double fl = false;
	
	std::ostringstream os;
	os << g;
	string str = os.str();
	
	for (int i = 0;i<str.length();i++){
		
		if (str[i]=='.'){
			fl=true;
		}
	}
	
	if (fl){
		
		cout <<"Decimal value: "<<setprecision(4) << g << '\n';

	}
	else{
		
		cout <<"Decimal value: "<<setprecision(0) << g << '\n';
		
	}
	

}
//-----------------------------

double CONVERTER::partOfTask(double inp, int prt, double splt, int sp, int dal){
	
	int tmpValue = inp;
	int tmpRes = inp;
	
	string one;
	string finOne;

	int it = 0;
	
	int n;
	int n1[100];
	
	do{
		
		
		tmpValue = tmpValue / 10;
		it++;
		
		if (tmpValue==0){
			
			for (int i=it-1;i>-1;i--){
			
			
				n1[i] = residinDec(tmpRes%dal, prt);
				
				tmpRes = tmpRes/dal;
				
			}
	
			
		}
	
	}while(tmpValue>0);
	
	
	cout<<endl<<endl;
	
	int num = 0;


	for (int i = 0; i < it; i++) {
	    num *= 10;
	    num += n1[i];
	}
	
	cout <<"Initial: "<<num<<endl;
	
	double final = num / splt;
	
	cout<<"Fraction: "<<setprecision(sp)<<final<<endl;
	
	return final;
	
}

void CONVERTER::task(bool k){
	
	
	int inp;
	
	if (k==true){
		
		cout<<"Enter your year. Format YYYYMMDD (e.g.: 19800501)"<<endl;
		cin>>inp;
		
	}
	else{
		
		inp = 19860625;
		cout<<"VALUE: "<<inp;
			
	}
	
	
	
	cout<<endl<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"PART 1: Gauta skaiciu paverskite i 2-e, 8-e ir 16-e sistema."<<endl<<endl;

	cout<<"Result:"<<endl;
	DecToBin(double(inp));
	DecToOct(double(inp));
	DecToHex(double(inp));
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 2: Gauta skaiciu padalinkite is 3 ir rezultata paverskite i 2-e, 8-e ir 16-e sistema."<<endl<<endl;	
	

	double a = (double)inp / (double)3;
	
	cout<<"Operation: "<<endl;
	cout<<inp<<"/3 = "<<a<<" ("<<fixed<<a<<") "<<endl<<endl;
	
	
	cout<<"Result: "<<endl;
	
	DecToBin(a);
	DecToOct(a);
	DecToHex(a);
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 3: Gauta skaiciu padalinkite is 7 ir rezultata paverskite i 2-e, 8-e ir 16-e sistema."<<endl<<endl;	
	

	double b = (double)inp / (double)7;
	
	cout<<"Operation: "<<endl;
	cout<<inp<<"/7 = "<<b<<endl<<endl;
	
	
	cout<<"Result: "<<endl;
	
	DecToBin(b);
	DecToOct(b);
	DecToHex(b);
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 4: Gauta skaiciu padalinkite is 4 ir rezultata paverskite i 2-e, 8-e ir 16-e sistema."<<endl<<endl;	
	

	double c = (double)inp / (double)4;
	
	cout<<"Operation: "<<endl;
	cout<<inp<<"/4 = "<<c<<endl<<endl;
	
	
	cout<<"Result: "<<endl;
	
	DecToBin(c);
	DecToOct(c);
	DecToHex(c);
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 5: Gauta skaiciu padalinkite is 2 ir rezultata paverskite i 2-e, 8-e ir 16-e sistema."<<endl<<endl;	
	

	double d = (double)inp / (double)2;
	
	cout<<"Operation: "<<endl;
	cout<<inp<<"/2 = "<<d<<endl<<endl;
	
	
	cout<<"Result: "<<endl;
	
	DecToBin(d);
	DecToOct(d);
	DecToHex(d);
	
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 6: Gauta skaiciu sukonvertuokite i nauja pavidala: vietoj kiekvieno";
	cout<< "skaitmens parasykite liekana padalinus ji is 2, pvz. 1 9 8 0 0 5 0 1 ";
	cout<<"bus 11000.101 (dvejetainis skaicius). Dvejetaini skaiciu paverskite i";
	cout<<"10-e, 8-e ir 16-e sistema."<<endl;	
	
	double final = partOfTask(inp, 2, 1000.0, 3, 10);
	
	BinToOct(final);
	BinToDec(final);
	BinToHex(final);
		
	
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	cout<<"PART 7: Gauta skaiciu sukonvertuokite i nauja pavidala: vietoj kiekvieno skaitmens parasykite liekana ";
	cout<< "Gauta skaiciu sukonvertuokite i nauja pavidala: vietoj kiekvieno skaitmens parasykite liekana padalinus ji is 8 ";
	cout<<"pvz. 1 9 8 0 0 5 0 1 - bus 1100.0501 (astuntainis skaicius). ";
	cout<<"Astuntaini skaiciu paverskite i 2-e, 10-e ir 16-e sistema."<<endl;	
	
	double final8 = partOfTask(inp, 8, 10000.0, 4, 10);
	
	OctToBin(final8);
	OctToDec(final8);
	OctToHex(final8);
		
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<"PART 8: Gauta skaiciu sukonvertuokite i nauja pavidala: vietoj kiekvienu dveju skaitmenu parasykite liekana padalinus ";
	cout<< "skaiciu is 16, pvz. 19 80 05 01 - bus 3051 (sesioliktainis skaicius). Sesioliktaini skaiciu paverskite i 2-e, 8-e ir 10-e sistema."<<endl;
	
	double final16 = partOfTask(inp, 16, 1, 0, 100);

	HexToBin(final16);
	HexToOct(final16);
	HexToDec(final16);
	
	
	cout<<endl<<endl;

	cout<<"<<<<<<<<<<<<<<<"<<endl;
	
	cout<<"TASK WAS COMPLETED WITH "<<inp<<" DECIMAL VALUE. READ RESULTS ABOVE."<<endl;
	cout<<"Press [t] key to complete task with another value"<<endl;
	
	cout<<">>>>>>>>>>>>>>>"<<endl;
	
	cout<<endl<<endl;
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	
	
}
//-----------------------------

int main(int argc, char *argv[])
{
	
	CONVERTER c;	
	char e;
	double imp; 
	
	c.task(false);
	
	//reiktu menu perkelti i viena funkcija
	
	mainmenu:
	repeat:
	
	cout<<"MAIN MENU:"<<endl;
	
	cout<<"---------------------------------------------------"<<endl;
	cout<<"[d] key to convert DECIMAL value"<<endl;
	cout<<"[b] key to convert BINARY value"<<endl;
	cout<<"[o] key to convert OCTAL value"<<endl;
	cout<<"[h] key to convert HEXADECIMAL value"<<endl;
		
	cout<<"---------------------------------------------------"<<endl;
	cout<<"[r] key to calculation residue"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"[t] key to start task"<<endl;
	cout<<"---------------------------------------------------"<<endl<<endl;
	
	cout<<"[e] key to exit from program"<<endl;
	
	cout<<endl;
	
	cin>>e;
	
	
	switch(e) {
		
		case 'd' :
			
			rep:
			
			cout<<"---------------------------------------------------"<<endl<<endl;
			
			cout<<"[b] dec >> bin"<<endl;
			cout<<"[o] dec >> oct"<<endl;
			cout<<"[h] dec >> hex"<<endl;
			
			cout<<"[m] to enter main menu"<<endl;
			
			char l;
			
			cout<<"Choose: ";
			cin>>l;
			cout<<"Enter decimal value (e.g.: XXX.XXX >> [possible with fraction]): "<<endl;

			double val; 
			
			if (l=='b'){
				
				cin>>val;
				c.DecToBin(val);
				goto rep;
				
			}
			else if (l == 'o'){
				
				cin>>val;
				c.DecToOct(val);
				goto rep;
				
			}
			else if (l=='h'){
				
				cin>>val;
				c.DecToHex(val);
				goto rep;
				
			}
			else if (l=='m'){
				
				goto mainmenu;
				
			}
			else{
				
				cout<<"Incorrect value "<<val<<" was entered"<<endl;
				goto rep;
			}
	
			
			goto repeat;
			
		case 'b' :
			
	
			repB:
			
			cout<<"---------------------------------------------------"<<endl<<endl;
			
			cout<<"[d] bin >> dec"<<endl;
			cout<<"[o] bin >> oct"<<endl;
			cout<<"[h] bin >> hex"<<endl;
			
			cout<<"[m] to enter main menu"<<endl;
			
			char lB;
			
			cout<<"Choose: ";
			cin>>lB;
			
			cout<<"Enter binary value (e.g.: XXX.XXX >> [possible with fraction]): "<<endl;
			
			double valB; 
			
			if (lB=='d'){
				
				cin>>valB;
				c.BinToDec(valB);
				goto repB;
				
			}
			else if (lB == 'o'){
				
				cin>>valB;
				c.BinToOct(valB);
				goto repB;
				
			}
			else if (lB=='h'){
				
				cin>>valB;
				c.BinToHex(valB);
				goto repB;
				
			}
			else if (lB=='m'){
				
				goto mainmenu;
				
			}
			else{
				
				cout<<"Incorrect value was entered"<<endl;;
				goto repB;
			}
	
			
			goto repeat;
			
			
		case 'o' :
			
	
			repO:
			
			cout<<"---------------------------------------------------"<<endl<<endl;
			
			cout<<"[b] oct >> bin"<<endl;
			cout<<"[d] oct >> dec"<<endl;
			cout<<"[h] oct >> hex"<<endl;
			
			cout<<"[m] to enter main menu"<<endl;
			
			char lo;
			
			cout<<"Choose: ";
			cin>>lo;
			
			cout<<"Enter octal value (e.g.: XXX.XXX >> [possible with fraction]): "<<endl;

			double valO; 
			
			if (lo=='b'){
				
				cin>>valO;
				c.OctToBin(valO);
				goto repO;
				
			}
			else if (lo == 'd'){
				
				cin>>valO;
		
				c.OctToDec(valO);
				goto repO;
				
			}
			else if (lo=='h'){
				
				cin>>valO;
				c.OctToHex(valO);
				goto repO;
				
			}
			else if (lo=='m'){
				
				goto mainmenu;
				
			}
			else{
				
				cout<<"Incorrect value was entered"<<endl;
				goto repO;
			}
	
			
			goto repeat;
			
			
			
		case 'h' :
			
			repH:
			
			cout<<"---------------------------------------------------"<<endl<<endl;
			
			cout<<"[b] Hex >> Bin"<<endl;
			cout<<"[o] Hex >> Oct"<<endl;
			cout<<"[d] Hex >> Dec"<<endl;
			
			cout<<"[m] to enter main menu"<<endl;
			
			char lH;
			
			cout<<"Choose: ";
			cin>>lH;
						
			cout<<"Enter hexadecimal value (e.g.: XXX.XXX >> [possible with fraction]): "<<endl;
			
			double valH; 
			
			if (lH=='b'){
				
				cin>>valH;
				c.HexToBin(valH);
				goto repH;
				
			}
			else if (lH == 'o'){
				
				cin>>valH;
				c.HexToOct(valH);
				goto repH;
				
			}
			else if (lH=='d'){
				
				cin>>valH;
				c.HexToDec(valH);
				goto repH;
				
			}
			else if (lH=='m'){
				
				goto mainmenu;
				
			}
			else{
				
				cout<<"Incorrect value was entered"<<endl;
				goto repH;
			}
	
			
			goto repeat;
			
		case 'r' :

			int m, n;
			
			cout<<"Enter decimal value: "<<endl;
			cin>>m;
			cout<<"% "<<endl;
			cin>>n;
			
			cout<<"Residue: "<<c.residinDec(m,n)<<endl;
			
			goto repeat;
		
		
		case 't':
			c.task(true);
			goto repeat;
			
			
		case 'e' :
			break;
			
		 
		default :
			cout<<"incorrect value was entered."<<endl<<endl;
			goto repeat;
			
	}
	


	
	system("pause");
    return EXIT_SUCCESS;
}



