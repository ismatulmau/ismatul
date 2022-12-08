/*
Nama : Ismatul maula
Nim : 2203045
Kelas : D3TI1B
*/


//Program memasukan nilai berdasarkan kriteria nilai
/*
Berikut kriteria nilai
A	=80.1 - 100
AB	=75.1 - 80.1
B	=70.1 - 75.1
BC	=65.1 - 70.1
C	=60.1 - 65.1
CD	=55.1 - 60.1 
D	=50.1 - 55.1
E	= <50
*/
//nilai yang dimasukkan tidak boleh lebih dari 100

#include<iostream>
using namespace std;
int main(){
	
	cout<<"\t\t\t- PROGRAM MENENTUKAN KRITERIA NILAI - "<<endl;
	
	float nilai; 
	const float minimal_a =80.1; 	//variabel kriteria nilai A
	const float minimal_ab =75.1;	//variabel kriteria nilai AB
	const float minimal_b =70.1; 	//variabel kriteria nilai B
	const float minimal_bc =65.1;	//variabel kriteria nilai BC
	const float minimal_c =60.1;	//variabel kriteria nilai C
	const float minimal_cd =55.1;	//variabel kriteria nilai CD
	const float minimal_d =50.1;	//variabel kriteria nilai D
									//nilai kurang dari sama dengan 50 masuk kriteria nilai E
									
	//input nilai
	cout<<"Masukan nilai : ";
	cin>>nilai;

	if(nilai>minimal_a){
	//output kriteria A
	cout<<"Nilai anda (A)";
	}

	else if(nilai>minimal_ab){ 	//else if untuk membuat batasan antara dua kriteria nilai 
	//output kriteria AB 		//agar kriteria nilai tidak ikut masuk melebihi batasnya
	cout<<"Nilai anda (AB)";
	
	}
	else if(nilai>minimal_b){	//else if untuk membuat batasan antara dua kriteria nilai
	//output kriteria B			//agar kriteria nilai tidak ikut masuk melebihi batasnya
	cout<<"Nilai anda (B)";
	
	}
	
	else if(nilai>minimal_bc){	//else if untuk membuat batasan antara dua kriteria nilai
	//output kriteria BC
	cout<<"Nilai anda (BC)";
	
	}
	else if(nilai>minimal_c){	//else if untuk membuat batasan antara dua kriteria nilai
	//output kriteria C			//agar kriteria nilai tidak ikut masuk melebihi batasnya
	cout<<"Nilai anda (C)";
	
	}
	
	else if(nilai>minimal_cd){	//else if untuk membuat batasan antara dua kriteria nilai
	//output kriteria CD		//agar kriteria nilai tidak ikut masuk melebihi batasnya
	cout<<"Nilai anda (CD)";
	
	}
	else if(nilai>minimal_d){	//else if untuk membuat batasan antara dua kriteria nilai
	//output kriteria D			//agar kriteria nilai tidak ikut masuk melebihi batasnya
	cout<<"Nilai anda (D)";
	
	}
	
	else{
	//output kriteria E
	cout<<"Nilai anda (E)";
	
   }
}
