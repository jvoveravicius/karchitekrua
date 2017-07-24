#include <cstdlib>
#include <inttypes.h>
#include <iostream>
#include <sstream>
#include <string>

//http://www.userbenchmark.com/

using namespace std;

//prototypes:

void print_array(string, int);
bool checkVal(int, int);

std::string chooseCPU();
std::string chooseMB(int);
std::string chooseDisks(char);
std::string chooseRAM(int);
std::string chooseGPU(int);
std::string choosePowSupply(int);
std::string Cases(int);
std::string chooseKeyboards(int);
std::string chooseMouse(int);
std::string monitors(int);


struct st;


struct st{
	
	int st_Cpu;
	int st_Mb;
	
	
}data;


bool checkVal(int val, int req){

	bool t;
	

	if (val<=req && val!=0){	
	
		t = false;
		
	}
	
	else{
		
		t = true;
		cout<<"Incorrect option ["<<val<<"] was entered."<<endl;
		cout<<"Available options are: ";
		
		for (int i=1;i<req+1;i++){
			
			cout<<i<<". "; 
		}
		
		
		cout<<endl<<endl;
		
	}
	
		


	
	return t;
	
}

void print_array(string a[], int size) {
   
    int i;
    
    for(i=0; i<size;i++){
    	
    	cout<<i+1<<". "<<a[i]<<endl;
    	
	}
	
}

string chooseCPU(){
	
	//6 skirtingi procesoriai (3 AMD ir 3 intel, skiriasi pagal prijungimo lizda).
	
	int choose;
	string cpu;
	

	string CPUs[] = {"Intel Core i7-7700K", "Intel Celeron G1850", "Intel Pentium G620", "AMD Ryzen 7 1700", "AMD Athlon II X4 860K", "AMD Athlon 64 X2 Dual Core 6000+"};
	
	rep:
	cout<<"Select CPU for your new PC: "<<endl;	
	print_array(CPUs, sizeof(CPUs)/sizeof(CPUs[0]));
	
	cout<<"Choose: ";
	cin>>choose;
	
	if (checkVal(choose, 6)){
		goto rep;
	}
	
	
	data.st_Cpu = choose;
	cpu = CPUs[choose - 1];
	
	system("cls");

	return cpu;
		
}



string chooseMB(int ch){
	


	//Kiekvienam procesoriui parinkti po 3 motinines plokštes. 
	
	//Intel Core i7-7700K
	//socket Socket LGA 1151
	string IntelCorei7_7700k[] = {"Asus MAXIMUS IX HERO", "MSI Z270 GAMING PRO CARBON", "Gigabyte G1.Sniper B7"};
	
	//Intel Celeron G1850
	//socket LGA 1150 socket
	string IntelCeleronG1850[] = {"Asus Motherboard B85M-G R2.0","MSI Motherboard H81M-P33","Biostar Motherboard Hi-Fi B85S3+"};
	
	//Intel Pentium G620
	//socket Sockel LGA 1155 
	string IntelPentiumG620[] = {"Intel DH61WW", "Asus P8H61-M LX","Gigabyte GA-H61M-DS2"};
	
	//AMD Ryzen 7 1700
	//Socket AM4
	string AMDRyzen71700[] = {"MSI Motherboard B350 TOMAHAWK", "Gigabyte Motherboard GA-AB350-Gaming 3-CF", "ASRock AB350M-HDV"};
	
	
	//AMD Athlon II X4 860K
	//Socket FM2+
	string AthlonIIX4860K[] = {"Gigabyte Motherboard GA-F2A68HM-HD2", "MSI Motherboard A68HM-E33 V2", "Asus Motherboard A88XM-A"};
	
	//AMD Athlon 64 X2 Dual Core 6000+
	//Socket AM2
	string AMDAthlon64X2[] = {"Asus M2N32-SLI DELUXE","MSI MS-7369","Gigabyte GA-M56S-S3"};
	
	
	cout<<"Select Motherboard for your new PC: "<<endl;
	
	
	rep:
	
	int choose;
	string MB;
	
	
	switch(ch) {
		
		
		case 1 :
			print_array(IntelCorei7_7700k, sizeof(IntelCorei7_7700k)/sizeof(IntelCorei7_7700k[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(IntelCorei7_7700k)/sizeof(IntelCorei7_7700k[0]))){
				goto rep;
			}
			
			MB= IntelCorei7_7700k[choose - 1];
			break;
		case 2 :
			
			print_array(IntelCeleronG1850, sizeof(IntelCeleronG1850)/sizeof(IntelCeleronG1850[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(IntelCeleronG1850)/sizeof(IntelCeleronG1850[0]))){
				goto rep;
			}
	
			MB = IntelCeleronG1850[choose - 1];
			break;
		case 3 :
			print_array(IntelPentiumG620, sizeof(IntelPentiumG620)/sizeof(IntelPentiumG620[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(IntelPentiumG620)/sizeof(IntelPentiumG620[0]))){
				goto rep;
			}
			
			MB = IntelPentiumG620[choose - 1];
			break;
		case 4 :
			print_array(AMDRyzen71700, sizeof(AMDRyzen71700)/sizeof(AMDRyzen71700[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(AMDRyzen71700)/sizeof(AMDRyzen71700[0]))){
				goto rep;
			}
			
			MB = AMDRyzen71700[choose- 1];
			break;
		case 5 :
			print_array(AthlonIIX4860K, sizeof(AthlonIIX4860K)/sizeof(AthlonIIX4860K[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(AthlonIIX4860K)/sizeof(AthlonIIX4860K[0]))){
				goto rep;
			}
			
			MB = AthlonIIX4860K[choose - 1];
			break;
		case 6 :
			print_array(AMDAthlon64X2, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]))){
				goto rep;
			}
			
			MB = AMDAthlon64X2[choose-1];
			break;
		
		}
		
	data.st_Mb = choose;
	
	system("cls");
	
	return MB;
	
}


string chooseDisks(char type){
	
	//Priklausomai nuo motininiu plokšciu parinkti po 3 komplektus tinkamu išoriniu duomenu saugijimo irenginiu (3xODD ir 3xHDD arba SSD).
	
	string result;
	int tmp;
	  
	string SSD[] = {"Intel 530 Series 120GB", "Samsung 850 Evo 250GB", "SanDisk Ultra II 240GB","Crucial BX100 500GB"};
 	string HDD[] = {"Seagate Barracuda 1TB", "Toshiba DT01ACA300 2TB", "Toshiba P300 3TB", "HGST Deskstar NAS 4TB"};
 	string ODD[] = {"BUFFALO 8x Ultra-Thin Portable USB2.0 DVD", "Samsung IDE 18X DVDRW DL", "Toshiba Satellite C850 SATA DVD-RW","ASUS 24X DRW-24D5MT OEM EDITION SATA"};
 	 
	//>>>>>>
	
	rep:
	
	if (type=='s'){
		
		cout<<"Choose SSD for new PC"<<endl;
		print_array(SSD, sizeof(SSD)/sizeof(SSD[0]));
		cout<<"Choose: ";
		cin>>tmp;
		
		if (checkVal(tmp, sizeof(SSD)/sizeof(SSD[0]))){
			goto rep;
		}
		
		system("cls");
		
		result = SSD[tmp];
		
	}
	else if(type=='h'){
		
		cout<<"Choose HDD for new PC"<<endl;
		print_array(HDD, sizeof(HDD)/sizeof(HDD[0]));
		cout<<"Choose: ";
		cin>>tmp;
		
		if (checkVal(tmp, sizeof(HDD)/sizeof(HDD[0]))){
			goto rep;
		}
		
		system("cls");
		
		result = HDD[tmp];
		
	}
	else if(type=='o'){
		
		cout<<"Choose ODD for new PC"<<endl;
		print_array(ODD, sizeof(ODD)/sizeof(ODD[0]));
		cout<<"Choose: ";
		cin>>tmp;
		
		if (checkVal(tmp, sizeof(ODD)/sizeof(ODD[0]))){
			goto rep;
		}
		
		system("cls");
		
		result = ODD[tmp];
		
	}
	
	system("cls");
	
	return result;
		
}


string chooseRAM(int ch){
	
	//Priklausomai nuo motininiu plokšciu parinkti po 3 komplektus jai tinkanciu atmintiniu (DDR).
	
	//socket Socket LGA 1151
	string SocketLGA1151[] = {"Corsair Vengeance LPX DDR4 3200 C16 2x8GB", "G.SKILL F4-3200C16D-16GTZR F4 DDR4 3200 C16 2x8GB", "HyperX Fury DDR4 2133 C14 2x8GB"};
	//socket LGA 1150 socket
	string SocketLGA1150[]={"Crucial Ballistix Sport DDR3 1600 C9 2x4GB","Kingston HyperX DDR3 1600 C10 1x8GB","Crucial CT102464BA160B.C16 1x8GB"};
	//socket SockelLGA1155
	string SockelLGA1155[]={"Crucial Ballistix Sport DDR3 1600 C9 2x4GB","Kingston HyperX DDR3 1600 C10 1x8GB","Crucial CT102464BA160B.C16 1x8GB"};
	//Socket AM4
	string SocketAM4[] = {"Corsair Vengeance LPX DDR4 3200 C16 2x8GB", "G.SKILL F4-3200C16D-16GTZR F4 DDR4 3200 C16 2x8GB", "HyperX Fury DDR4 2133 C14 2x8GB"};
	//Socket FM2+
	string SocketFM2[] = {"Crucial Ballistix Sport DDR3 1600 C9 2x4GB","Kingston HyperX DDR3 1600 C10 1x8GB","Crucial CT102464BA160B.C16 DDR3 1x8GB"};
	//Socket AM2
	string AMDAthlon64X2[] = {"Adata EXTREME DDR2 800+ 2x2GB","Kingston 2GB 2X 1GB DDR2M","Adata EXTREME DDR2 800+ 8GB"};
	
	rep:
	
	string RAM;
	int choose;
	
	cout<<"Select RAM for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(SocketLGA1151, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]))){
				goto rep;
			}
			
			RAM= SocketLGA1151[choose - 1];
			break;
		case 2 :
			print_array(SocketLGA1150, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]));
			cout<<"Choose: ";
			cin>>choose;
					
			if (checkVal(choose, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]))){
				goto rep;
			}
			
			RAM = SocketLGA1150[choose - 1];
			break;
		case 3 :
			print_array(SockelLGA1155, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]))){
				goto rep;
			}
			
			RAM = SockelLGA1155[choose - 1];
			break;
		case 4 :
			print_array(SocketAM4, sizeof(SocketAM4)/sizeof(SocketAM4[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(SocketAM4)/sizeof(SocketAM4[0]))){
				goto rep;
			}
			
			RAM = SocketAM4[choose- 1];
			break;
		case 5 :
			print_array(SocketFM2, sizeof(SocketFM2)/sizeof(SocketFM2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(SocketFM2)/sizeof(SocketFM2[0]))){
				goto rep;
			}
			
			RAM = SocketFM2[choose - 1];
			break;
		case 6 :
			print_array(AMDAthlon64X2, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]))){
				goto rep;
			}
			
			RAM = AMDAthlon64X2[choose-1];
			break;
		
		}
		
	system("cls");
		
	return RAM;
	
}

string chooseGPU(int ch){
	
	//Priklausomai nuo motininiu plokšciu parinkti po 3 komplektus jai tinkanciu atmintiniu (DDR).
	
	//socket Socket LGA 1151
	string SocketLGA1151[] = {"NVIDIA TITAN Xp", "Nvidia Quadro K6000", "AMD R9 270X"};
	//socket LGA 1150 socket
	string SocketLGA1150[]={"Radeon HD 6530D","GeForce GT625M","Radeon R7 A10 PRO-7850B"};
	//socket SockelLGA1155
	string SockelLGA1155[]={"Radeon E6760","GeForce GTX 650 Ti","GeForce GTX 460B"};
	//Socket AM4
	string SocketAM4[] = {"Radeon R9 Fury-X", "Radeon HD 7970", "Radeon R9 290X / 390X"};
	//Socket FM2+
	string SocketFM2[] = {"Radeon HD 7560D","GeForce GTX 780","GeForce GTX 1060"};
	//Socket AM2
	string AMDAthlon64X2[] = {"Radeon HD 8470D","GeForce GT625M","Radeon HD 6530D"};
	
	
	rep:
	string GPU;
	int choose;
	
	cout<<"Select GPU for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(SocketLGA1151, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]));
			cout<<"Choose: ";
			cin>>choose;
				
			if (checkVal(choose, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]))){
				goto rep;
			}
			
			GPU= SocketLGA1151[choose - 1];
			break;
		case 2 :
			print_array(SocketLGA1150, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]))){
				goto rep;
			}
			
			GPU = SocketLGA1150[choose - 1];
			break;
		case 3 :
			print_array(SockelLGA1155, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]))){
				goto rep;
			}
			
			GPU = SockelLGA1155[choose - 1];
			break;
		case 4 :
			print_array(SocketAM4, sizeof(SocketAM4)/sizeof(SocketAM4[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(SocketAM4)/sizeof(SocketAM4[0]))){
				goto rep;
			}
			
			GPU = SocketAM4[choose- 1];
			break;
		case 5 :
			print_array(SocketFM2, sizeof(SocketFM2)/sizeof(SocketFM2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(SocketFM2)/sizeof(SocketFM2[0]))){
				goto rep;
			}
			
			GPU = SocketFM2[choose - 1];
			break;
		case 6 :
			print_array(AMDAthlon64X2, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]))){
				goto rep;
			}
			
			GPU = AMDAthlon64X2[choose-1];
			break;
		
		}
		
	system("cls");
		
	return GPU;
	
	
}


string choosePowSupply(int ch){
	
	
	//socket Socket LGA 1151
	string SocketLGA1151[] = {"Ep-700Pm 700W 120 Mm Atx 12V V2.3", "APEVIA ATX-BT700W 700W ATX12V SLI CrossFire", "CORSAIR CX Series CX600 600W 80 PLUS BRONZE Active PFC ATX12V & EPS12V"};
	//socket LGA 1150 socket
	string SocketLGA1150[]={"Rosewill ARC Series 450W","EVGA 450 B1 100-B1-0450-K1 80+ BRONZE 450W","SeaSonic S12II 430B 430W ATX12V / EPS12V 80 PLUS"};
	//socket SockelLGA1155
	string SockelLGA1155[]={"Rosewill ARC Series 450W","EVGA 450 B1 100-B1-0450-K1 80+ BRONZE 450W","SeaSonic S12II 430B 430W ATX12V / EPS12V 80 PLUS"};
	//Socket AM4
	string SocketAM4[] = {"Ep-700Pm 700W 120 Mm Atx 12V V2.3", "APEVIA ATX-BT700W 700W ATX12V SLI CrossFire", "CORSAIR CX Series CX600 600W 80 PLUS BRONZE Active PFC ATX12V & EPS12V"};
	//Socket FM2+
	string SocketFM2[] = {"Rosewill ARC Series 450W","EVGA 450 B1 100-B1-0450-K1 80+ BRONZE 450W","SeaSonic S12II 430B 430W ATX12V / EPS12V 80 PLUS"};
	//Socket AM2
	string AMDAthlon64X2[] = {"Antec EarthWatts Green EA-380D Green 380W","SeaSonic SS-300ET Bronze 300W","SILVERSTONE SFX Series SST-ST30SF-V2 300W"};
	
	
	string PoweSupply;
	int choose;
	rep:
		
	cout<<"Select power supply for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(SocketLGA1151, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(SocketLGA1151)/sizeof(SocketLGA1151[0]))){
				goto rep;
			}
			
			PoweSupply= SocketLGA1151[choose - 1];
			break;
		case 2 :
			print_array(SocketLGA1150, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]));
			cout<<"Choose: ";
			cin>>choose;
					
			if (checkVal(choose, sizeof(SocketLGA1150)/sizeof(SocketLGA1150[0]))){
				goto rep;
			}
			
			PoweSupply = SocketLGA1150[choose - 1];
			break;
		case 3 :
			print_array(SockelLGA1155, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(SockelLGA1155)/sizeof(SockelLGA1155[0]))){
				goto rep;
			}
			
			PoweSupply = SockelLGA1155[choose - 1];
			break;
		case 4 :
			
			print_array(SocketAM4, sizeof(SocketAM4)/sizeof(SocketAM4[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(SocketAM4)/sizeof(SocketAM4[0]))){
				goto rep;
			}
			
			PoweSupply = SocketAM4[choose- 1];
			break;
		case 5 :
			print_array(SocketFM2, sizeof(SocketFM2)/sizeof(SocketFM2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(SocketFM2)/sizeof(SocketFM2[0]))){
				goto rep;
			}
			
			PoweSupply = SocketFM2[choose - 1];
			break;
		case 6 :
			print_array(AMDAthlon64X2, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(AMDAthlon64X2)/sizeof(AMDAthlon64X2[0]))){
				goto rep;
			}
			
			PoweSupply = AMDAthlon64X2[choose-1];
			break;
		
		}
		
	system("cls");
	
		
	return PoweSupply;
	
	
	
}


string Monitors(int ch){
	
	
	string gaming[] = {"Acer Predator XB271HK", "ViewSonic XG2700-4K", "Samsung LC27F591FDN"};
	string workStation[] = {"Samsung S24E390HL LED","LG 27MP59G GAMING LED","LG 19M38A-B"};
	
	
	string Tower;
	int choose;
	
	rep:
		
	cout<<"Select monitor for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			Tower=gaming[choose - 1];
			break;
		case 2 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Tower = workStation[choose - 1];
			break;
		case 3 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Tower = workStation[choose - 1];
			break;
		case 4 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			Tower = gaming[choose- 1];
			break;
		case 5 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Tower = workStation[choose - 1];
			break;
		case 6 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
					
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Tower = workStation[choose-1];
			break;
		
		}
		
	system("cls");
	
		
	return Tower;
	
	
}


string chooseKeyboards(int ch){
	
	string gaming[] = {"Corsair K95 RGB Gaming", "Razer Turret Living Room Gaming Wireless", "Logitech G15 Business"};
	string workStation[] = {"ACME WS08 Wireless","Microsoft All-in-One Media Keyboard Business","LOGITECH MK270 Business"};
	
	
	string keyboard;
	int choose;
	
	rep:
	
	cout<<"Select keyboard for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			
			keyboard=gaming[choose - 1];
			break;
		case 2 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			
			keyboard = workStation[choose - 1];
			break;
		case 3 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			
			keyboard = workStation[choose - 1];
			break;
		case 4 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				cout<<"Choose: ";
				goto rep;
			}
			
			
			keyboard = gaming[choose- 1];
			break;
		case 5 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				
				goto rep;
			}
			
			
			keyboard = workStation[choose - 1];
			break;
		case 6 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			
			keyboard = workStation[choose-1];
			break;
		
		}
		
	system("cls");
	
	return keyboard;
	
	
}



string chooseMouse(int ch){
	
	string gaming[] = {"Razer DeathAdder Elite Gaming", "Logitech M325 Wireless", "ACME MS14"};
	string workStation[] = {"Razer Naga Hex V2 MOBA RGB Gaming ","Lenovo N100 Wireless","ACME MS04"};
	
	string Mouse;
	int choose;
	
	rep:
		
	cout<<"Select mouse for your new PC: "<<endl;	
	
	switch(ch) {
		
		case 1 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			Mouse=gaming[choose - 1];
			break;
		case 2 :
			
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			
			Mouse = workStation[choose - 1];
			break;
		case 3 :
			
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Mouse = workStation[choose - 1];
			break;
		case 4 :
			
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			Mouse = gaming[choose- 1];
			break;
		case 5 :
			
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Mouse = workStation[choose - 1];
			break;
		case 6 :
			
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			Mouse = workStation[choose-1];
			break;
		
	}
	
	
	system("cls");
	
	return Mouse;
	
}




string Cases(int ch){
	
	string gaming[] = {"MasterCase Maker 5t Mid-Tower", "MASTERCASE PRO 5 Mid-Tower", "Corsair Crystal Series 570X Mid-Tower"};
	string workStation[] = {"Carbide Series 88R MicroATX Mid-Tower Case [Mid Tower]","Carbide Series 100R Mid-Tower Case","Carbide Series 270R ATX Mid-Tower Case"};
	
	string monitor;
	int choose;
	
	cout<<"Select case for your new PC: "<<endl;
	
	rep:
	
	switch(ch) {
		
		case 1 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			monitor=gaming[choose - 1];
			break;
		case 2 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			monitor = workStation[choose - 1];
			break;
		case 3 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			monitor = workStation[choose - 1];
			break;
		case 4 :
			print_array(gaming, sizeof(gaming)/sizeof(gaming[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(gaming)/sizeof(gaming[0]))){
				goto rep;
			}
			
			monitor = gaming[choose- 1];
			break;
		case 5 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
				
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			monitor = workStation[choose - 1];
			break;
		case 6 :
			print_array(workStation, sizeof(workStation)/sizeof(workStation[0]));
			cout<<"Choose: ";
			cin>>choose;
			
			if (checkVal(choose, sizeof(workStation)/sizeof(workStation[0]))){
				goto rep;
			}
			
			monitor = workStation[choose-1];
			break;
		
	}
	system("cls");
	
	return monitor;
	
}

int main(int argc, char *argv[])
{	

	char r;
	
	repeatal:
	string myCpu = chooseCPU();
	string myMB = chooseMB(data.st_Cpu);
	string myRAM = chooseRAM(data.st_Cpu);
	string mySSD = chooseDisks('s');
	string myHDD = chooseDisks('h');
	string myODD = chooseDisks('o');
	string myGPU = chooseGPU(data.st_Mb);
	string myPW = choosePowSupply(data.st_Mb);
	string myCase = Cases(data.st_Mb);
	string myKeyboard = chooseKeyboards(data.st_Mb);
	string myMouse = chooseMouse(data.st_Mb);
	
	cout<<"YOUR NEW PC: "<<endl<<endl;
	cout<<"CPU: "<<myCpu<<endl<<"MB: "<<myMB<<endl<<"RAM: "<<myRAM<<endl<<"SSD: "<<mySSD<<endl<<"HDD: "<<myHDD<<endl<<"ODD: "<<myODD<<endl<<"GPU: "<<myGPU<<endl;
	cout<<"Power Supply: "<<myPW<<endl<<"Case: "<<myCase<<endl<<"Keyboard: "<<myKeyboard<<endl<<"Mouse: "<<myMouse<<endl<<endl;
	
	cout<<"Woul you like to repeat? y/n"<<endl;
	cin>>r;
	
	if (r=='y'){
		system("cls");
		goto repeatal;
	}
	else if (r=='n'){
		cout<<"Program was stopped."<<endl;
	}
	else{
		
		cout<<"Incorrect value was entered."<<endl;
		
	}
	
	
	system("pause");
    return EXIT_SUCCESS;
}



