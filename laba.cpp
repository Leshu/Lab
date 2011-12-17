
#include <iostream>


using namespace std;

class Node
{
public:
	int number;
	Node* next;
	Node* last;
};



int
 main()
{
 int mass[100], sort[100], pos=1, c=1;
	short action = -1;
	Node* head = NULL;
	Node* tail = NULL;
	Node* ptrLast = NULL;
	
	while (1)
	{		
		cout<<("1. dobavit' element\n");
		cout<<("2. prosmotr spiska slevo napravo\n");
		cout<<("3. prosmotr sprava nalevo\n");
		cout<<("4. Delete head\n");
		cout<<("5. delete tail\n");
		cout<<("6. find elem\n");
		cout<<("7. vivod sortirovannogo spiska\n");
		cout<<("0. Exit\n\n");
		cout<<("Vash vibor<<: ");
		cin>>action;

		if (action == 0)
		{
			
			break;
		}
	
		if (action == 1)
		{
		
			int numb = -1;
			pos=1;
			cout<<("vvedite 4islo: ");
			cin>>numb;
			Node* ptr = new Node;
			ptr->number = numb;
			mass[c]=ptr->number;
			ptr->next = NULL;
			tail = ptr;
			c++; pos++;
			if (head == NULL)

			{
				head = ptr;
				ptrLast = ptr;
				ptr->last = NULL;
				
				continue;
			}
			ptr->last = ptrLast;
			ptrLast->next = ptr;
			ptrLast = ptr;
			
			continue;
		}

		if (action == 2)
		{
			
			Node* ptr = NULL;
			if (head == NULL)
			{
				cout<<"\tSpisok pust!\n\n";
			
				continue;
			}
			cout<<"spisok sleva napeavo\n\n";
			ptr = head;
			while (1)
			{
				cout<<ptr->number<<" ";
				if (ptr->next == 0)
					break;
				ptr = ptr->next;
			}
			cout<<"\n\n";
			
			continue;
		}

		if (action == 3)
		{
		
			Node* ptr = NULL;			
			if (head == NULL)
			{
				cout<<("\tSpisok pust!\n\n");
				
				continue;
			}
			cout<<("spisok sprava nalevo \n\n");
			ptr = tail;
			while (1)
			{
				cout<<ptr->number<<" ";
				if (ptr->last == 0)
					break;
				ptr = ptr->last;
			}
			cout<<"\n\n";
			
			continue;
		}

		if (action == 4)
		{
		
			Node* ptrDelete = NULL;			
			if (head == NULL)
			{
				cout<<("\tspisok pust!\n\n");
			
				continue;
			}
			if (head->next == NULL)
			{
				head = NULL;
				tail = NULL;
				delete head;
				continue;
			}
			ptrDelete = head;
			head = ptrDelete->next;
			head->last = NULL;
			delete ptrDelete;
			continue;
		}

		if (action == 5)
		{
			
			Node* ptrDelete = NULL;
			if (tail == NULL)
			{
				cout<<("\tspisok pust!\n\n");
				
				continue;
			}
			if (tail->last == NULL)
			{
				head = NULL;
				tail = NULL;
				delete tail;
				continue;
			}			
			ptrDelete = tail;
			tail = ptrDelete->last;
			tail->next = NULL;
			ptrLast = tail;
			delete ptrDelete;
			continue;
		}

		if (action == 6)
		{
	
			Node* ptr = NULL;
			int key = -1;
			if (head == NULL)
			{
				cout<<("\tspisok pust!\n\n");
				
				continue;
			}
			cout<<("Vvedite element dlya poiska: ");
			cin>>key;			
			ptr = head;
			while (1)
			{
				if (key == ptr->number)
				{
					cout<<("\n\t Takoi est'\n");
					break;
				}
				if (ptr->next == NULL)
				{
					cout<<("\n\tTakogo net\n");
					break;
				}
				ptr = ptr->next;
			}
		
			continue;
		}
		
		if (action == 7)
		
				{
			
			Node* ptr = NULL;
			int key = -1;
			if (head == NULL)
			{
				cout<<("\t spisok pust!\n\n");
				
				continue;
			}
				for (int i = 1; i < (pos+2); i++ )
				{ sort[i]=mass[i];
				}

				for (int i = 1; i < (pos+2); i++ )
{
int Min = sort[i];
int IndexOfMin = i;

	for (int j = 1; j < (pos+2); j++ )
if (mass[j] < Min)
{
Min = sort[j];
IndexOfMin = j;
}

sort[IndexOfMin] = sort[i];
sort[i] = Min;
}	
	for ( int z = 1; z < (pos+2); z++ )
{
	cout<<sort[z]<<" ";
}

			cout<<"\n\n";
		
			continue;
		}

		if (action > 7)
		{
			
			cout<<"\t!!! neverniy vibor<<, poprobuite eshe raz !!!\n\n";
		
			continue;
		}
	}
return 0;
}

