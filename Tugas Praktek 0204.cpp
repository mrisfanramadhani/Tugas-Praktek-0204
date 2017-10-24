#include <iostream>
using namespace std;

int main (){
	double Luas_Rumah=42;
	double Lantai_parket=193*1215;
	double Luas_1box=Lantai_parket*8/1000000;
	double Jml_box_parket, Biaya_parket,Biaya_pasang,Totalbyr;
		
	cout<<"Luas Rumah :"<<Luas_Rumah<<"m2"<<endl;
	cout<<"Luas 1 Box Parket:"<<Jml_box_parket<<endl;

	Jml_box_parket=Luas_Rumah/Luas_1box;
	cout<<"Jumlah Box Parket:"<<Jml_box_parket<<endl;	


	Biaya_parket=Jml_box_parket*500;
	cout<<"Biaya Parket (Rp):"<<Biaya_parket<<endl;
}
