#include <iostream> //header program program yang melibatkan objek cout dan cin

using namespace std; //perintah untuk mendeklarasikan sebuah aplikasi compailer 

struct Node //membuat fungsi Node menggunakan struct
{
	int data; //tipe data integer
	Node *next; //fungsi pointer next
};

Node *head;  //pointer head
Node *bantu; //pointer bantu
Node *hapus; //pointer hapus
Node *baru;  //pointer baru

void tambahTengah() //d-eklarasi fungsi tambah tengah 
{
    baru = new Node; // Membuat node baru
    cout << "\nMasukkan DATA : ";
	cin >> baru-> data;
    baru->next = NULL; //nilai baru next = null
    
    // Cek apakah linked list kosong
    if (head == NULL)
	//jika head masih kosong maka nilai node head = node baru
	{
        head = baru; 
        cout << "\nData " << baru->data <<" telah di tambahakan \n\n";
    }
    else 
	{
    	// Menemukan node tengah
        Node *posisiTengah = head; //nilai head masuk ke posisi tengah
        int jumlahNode = 0; //jumlah node = 0
        while (posisiTengah != NULL) //kondisi while posisi tengah tidak = 0
		{
            jumlahNode++; //jumlah node bertambah
            posisiTengah = posisiTengah->next; //posisi tengah = nilai posisi tengah next
        }
        jumlahNode = (jumlahNode-1)/2; //jumlah node = jummlah node - 1 bagi 2
        posisiTengah = head; //posisi tengah = nilai head
        for (int i=0; i<jumlahNode; i++) //perlulangan for
		{
        	posisiTengah = posisiTengah->next; //posisi tengah = nilai posisiTengah baru
        }
        // Menambahkan node baru
        baru->next = posisiTengah->next; //node baru = node posisiTengah 
        posisiTengah->next = baru; //posisi tengah next = node baru
        cout << "\nData " << baru->data <<" telah di tambahakan \n\n"; //tampilan data yang telah di tambahkan
        }
}

void cetak() //fungis cetak
{
	Node *bantu; //node pointer bantu
	bantu = head; //node bantu = node head
	cout<<"\n";
	cout<<"  Isi linked list : \n"<<endl;
	cout << "  ";
	if (head != NULL) //jika node head tidak = 0
	{
		while (bantu != NULL) //node bantu tidak = 0
		{
			cout <<bantu->data << " --> "; //ouputan data
			bantu = bantu->next; //node bantu = node bantu next
		}
		if(bantu==NULL) //node bantu = 0
		{
			cout<<"Kosong"; 
		}
			cout<<"\n\n";
	}
	else
	cout << "Linked List Kosong" << endl; 
}
void del() //fungsi hapus
{
    if(head->next !=NULL) //jika node head tidak = 0
	{
      	bantu = head; //node bantu = nilai head
		while(bantu->next!=NULL) //node bantu next tidak = 0
		{
			bantu = bantu->next; //node bantu = nilai bantu next
		}
		hapus = bantu->next; //node hapus = nilai bantu next
		bantu->next = NULL; //node bantu next = 0
		delete hapus;
	} 
	else 
	{
		head = NULL; //node head = 0
	}
}
  

void hapusTengah() //fungsi hapusTengah
{
	if(head != NULL) //jika node head tidak = 0
	{
		bantu = head; //nilai node bantu = nilai node head
		int jumlah; //deklarasi int jumlah
		jumlah = 0;	//jumlah bernilai 0
		while (bantu != NULL) //node bantu tidak = 0
		{
			bantu = bantu->next; //node bantu = node bantu next
			jumlah++; //jumlah bertambah
		}
		
		if(jumlah<=1) //jika jumlah kurang dari = 1
		{
			del(); //hapus 
        }
        
        else 
        {
			int tengah; //deklarasi nilai tengah
			tengah = (jumlah/2) + 1; //nilai tengah = jumlah / 2 tambah 1
			bantu = head; //node bantu = node head
			for (int i=1; i<tengah-1; i++) //perulangan for
			{
				bantu = bantu->next; //node bantu = node bantu next
			}
			hapus = bantu->next; //node hapus = node bantu next
			cout<<"\n  data yang dihapus adalah "<<hapus->data<<endl; //outputan data yang dihapus
			bantu->next = hapus->next; //node bantu next = node hapus next
			delete hapus; //fungsi untuk menghapus
		}
		cetak(); //fungsi cetak jika tidak 0
	}
		else
		{
			cetak(); //fungsi cetak jika 0
		}

}


void exit() //fungsi exit
{
	system("cls"); 
	cout<<"\t\t\t\t+--------------------------------------------+\n";
	cout<<"\t\t\t\t|                                            |\n";
	cout<<"\t\t\t\t|          Program telah selesai             |\n"; 
	cout<<"\t\t\t\t| Terimakasih atas waktu dan perhatiannya    |\n";
	cout<<"\t\t\t\t|                                            |\n";
	cout<<"\t\t\t\t+--------------------------------------------+\n";
}

int main()
 {
	int pilihan, data;

	head = NULL; // kondisi head masih kosong
	do {
			cout << "\n===== PROGRAM Linked List ======\n";
            cout << "================================\n";
            cout << "| 1 |	Tambahkan Tengah       |\n";
            cout << "| 2 |	Cetak Data             |\n";
            cout << "| 3 |	Hapus Tengah           |\n";
            cout << "| 4 |	Exit                   |\n";
            cout << "================================\n";

			cout << " Pilihan Anda : ";
			cin >> pilihan;
			switch (pilihan) 
			{
				case 1 :
					tambahTengah();
					break;
				case 2 :
					cetak();
				
					break;
				case 3 :
					hapusTengah();
					break;
				case 4 :
					exit();
					break;
				default :
					cout << "Pilihan tidak ada" << endl;
					break;
			}
			cout << endl;
		} 
		while (pilihan != 4);
		return 0;
}