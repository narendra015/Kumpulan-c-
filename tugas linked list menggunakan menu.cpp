#include<iostream>
using namespace std ;


	struct Node
	{
		int data;
		Node *next;
	};
	
	Node *head;
	Node *node;
	
	bool isEmpty()
{
	if (head == NULL) 
	return true;
	else 
	return false;
}

	void insertKanan()
	{
		Node *baru;
		baru =new Node;
		cout << "\nMasukkan DATA : ";
		cin >> baru-> data;
		baru->next=NULL;
		
		Node *last = head;
		if(isEmpty()== true)
		{
			head = baru;
			cout << "\nData " << baru->data <<" telah di tambahakan \n\n";
			return;	
		}
		while (last->next != NULL)
			{
				last = last->next;
			}
			last->next = baru;
		cout << "\nData " << baru->data <<" telah di tambahakan \n\n";
	}
	
void tampil()
	{
		Node *node;
		node = head;
		if(isEmpty()==0)
		{
			while(node != NULL)
			{
				cout<<node->data<<"-->";
				node = node->next;
			}
			if(node==NULL)
			{
				cout<<"Kosong";
			}
				cout<<"\n\n";
		}
		else 
		{
			cout<<"Kosong";
		}
		
	}
	
void hapus()
{
	Node *hapus, *node;
	if (isEmpty()==false)
	{
		if(head->next !=NULL)
		{
			node = head;
			while(node->next->next!=NULL)
		{
			node = node->next;
		}
			hapus = node->next;
			node->next = NULL;
			delete hapus;
		} 
		else 
		{
			head = NULL;
		}
	} 
	else 
	{
		cout<<"\n\n";
		cout<<"\tData anda masih kosong/NULL !!\n";
	}
	cout<<"\n\tData berhasil di hapus\n";
	cout <<"\t==========================\n\n";
	tampil();//memanggil fungsi tampil()
}

int main()
{	
	int pilihan,head,ulang;
    do
	{
		ulang:
    	cout << "1. Tambah Node\n";
        cout << "2. Tampilkan Node\n";
        cout << "3. Hapus Node\n";
        

		cout << "Pilih (1/2/3) : "; 
		cin >> pilihan;
		
        cout <<endl;
		switch (pilihan)  
		  {
		   case 1: 
				{
					insertKanan();
		        }
		   break; 
		   case 2:
		    	{
		           cout<<"Isi linked list : "<<endl;
		           tampil();
		        }
		   break;   
		   case 3: 
				{
					hapus();
		        }
		   break;    
		}
    }
    while(pilihan!=3);
}
