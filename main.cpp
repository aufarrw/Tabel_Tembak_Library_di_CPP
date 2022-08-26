#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	HINSTANCE lib;
	//function untuk menghitung sudut elevasi adalah "parabol_asin"
	double (*parabol_asin) (double, double);
	
	lib = LoadLibrary("ParabolMortar.dll");
	
	if(lib > (void*) HINSTANCE_ERROR){
		parabol_asin = (double(*) (double, double)) GetProcAddress(lib, "parabol_asin");
		
		double a;
		char c = 'y';
		while(c == 'y'){
			cout << "Masukkan Jarak: ";
			cin >> a;
			
			if (a < 100){
				cout << "Jarak terlalu dekat dengan mortar" << endl;
			}
			
			else if (a <= 450){
			double b = 67.08204;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 0" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 800){
			double b = 89.44272;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 1" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 1350){
			double b = 116.18951;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 2" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 2600){
			double b = 161.24516;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 3" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 3700){
			double b = 192.35385;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 4" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 4700){
			double b = 216.79484;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 5" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 5600){
			double b = 236.643193;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 6" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 6300){
			double b = 250.99801;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 7" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else if (a <= 6500){
			double b = 254.95098;
			cout << "jarak: " << a << endl;
			cout << "kecepatan: " << b << endl;
			cout << "isian: 8" << endl;
			cout << "sudut elevasi: " << parabol_asin(a, b) << endl;
			}
			
			else{
				cout << "Jarak tidak dapat tercapai" << endl;
			}
			
			cout << "membidik lagi?(y/n) ";
			cin >> c;
		        if (c == 'n') {
		            break;
		        }
		    	else if (c!='y' && c!='n'){
		    		cout << c << " tidak terdaftar, harap input 'y' atau 'n'" << endl;
		    		while(c!='y' && c!='n'){
		    		cout << "membidik lagi?(y/n) ";
					cin >> c;
				        if (c == 'n') {
				            break;
				        }
				    	else if (c!='y' && c!='n'){
				    		cout << c << " tidak terdaftar, harap input 'y' atau 'n'" << endl;
						}
					}
				}
		}
	}
	else {
		cout << "\"ParabolMortar.dll\" gagal diakses" << endl;
	}
	return 0;	
}