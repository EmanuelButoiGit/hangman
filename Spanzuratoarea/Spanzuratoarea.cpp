#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main(){
	int n=0,vieti=5,vieti2=5,ok=0;
	bool okk = 1;
	char cuvant[20], cuvant2[20],litera; int z = 1; int rasp = 1;



	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "Player no. 1." << endl;
	Sleep(2000);
	cout << "How many letters does your word have? " << endl;
	cin >> n;
	cout << "After every letter, press enter" << endl;

	for (int i = 1; i <= n; i++) {
		cin >> cuvant[i];
	}

	for (int i = 1; i <= n; i++) {
		cuvant2[i] = '_';
	}

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl <<
		"The word you must guess is: "<<endl;

	for (int i = 1; i <= n; i++) {
		cout << cuvant2[i]<<" ";
	}
	cout << endl<<endl;

	while (okk) {
		int z = 1;

		cout << "Player no. 2 you have " << vieti << " lives" << endl;
		cout << "Type a letter" << endl;
		cin >> litera;
		
		
		for (int i = 1; i <= n; i++)
		{
			if (cuvant[i] == litera) { cuvant2[i] = litera; z = 0;  }
			
		}

		if (z == 1) { vieti--; cout << "The is no " << litera << " in the word, you have " << vieti << " lives" << endl; }

		

		if (vieti == 0) { cout << "Sorry, you lost!"<<endl<<endl; okk = 0;  }
		
		
		rasp = memcmp(cuvant, cuvant2,n);
		if(rasp==0){ cout << "You guessed the word!" << endl << endl; okk = 0; }


		
		
		for (int i = 1; i <= n; i++) {
				cout << cuvant2[i] << " ";
			}
			cout << endl<<endl;
			
	}
		




	

}
