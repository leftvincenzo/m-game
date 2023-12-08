#include <iostream>
#include <windows.h>

using namespace std;

// GAMEOVER

void fine() {

	system("cls");
	system("color c");

	cout << "   _____          __  __ ______    ______      ________ _____  \n  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\\n " << endl;
	cout << "  ____________________________________________________________\n |                                                            |\n |             CREDITI DEL CREATORE DI M-GAME                 |\n |____________________________________________________________|\n |                                                            |\n |  Data ultima modifica:        07/12/2023                   |\n |  Versione gioco:              1.2                          |\n |                                                            |\n |____________________________________________________________|\n " << endl;

	for (int i = 0; i < 10; i++)
	{
		Sleep(1000);
		system("color c");
		Sleep(1000);
		system("color 4");
	}

}

int main()
{

	// DECLARETIONS
	string n, div = "-----------", a = "|", pl = "     (+!+)\n    __ | __    \n       | \n    _ |-| _    ";
	int v = 10, s1, i, exp = 0, ds, sc;
	char r = 'X', S = ' ';

	// LOGIN
	system("color 6");
	cout << ".___  ___.            _______      ___      .___  ___.  _______ \n|   \\/   |           /  _____|    /   \\     |   \\/   | |   ____|\n|  \\  /  |  ______  |  |  __     /  ^  \\    |  \\  /  | |  |__   \n|  |\\/|  | |______| |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  \n|  |  |  |          |  |__| |  /  _____  \\  |  |  |  | |  |____ \n|__|  |__|           \\______| /__/     \\__\\ |__|  |__| |_______|\n " << endl;
	cout << "Inserisci il tuo nickname: ";
	cin >> n;
	Sleep(1000);
	system("cls");
	system("color 0");

	// LOADING
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << "--" << div << endl;
	cout << pl << endl;
	cout << div << "--" << div << endl;
	cout << "La tua avventura iniziera tra 5 secondi!!" << endl;

	Sleep(5000);
	system("cls");	
	system("color 1");

	// WEAPON SELECTION
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << "--" << div << endl;
	cout << pl << endl;
	cout << div << "--" << div << endl;
	cout << a << "S) Spada" << a << "A) Arco" << a << "K) Katana" << endl;
	cout << div << "--" << div << endl;
	cout << "Scegli la tua arma: ";
	cin >> r;

	if ((r == 'S') || (r == 's'))
	{
		exp++;
		cout << "Hai scelto la spada!" << endl;
		cout << S << endl;
		cout << "      /| ________________\nO|===|* >________________>\n      \\|\n";
	}
	else if ((r == 'A') || (r == 'a'))
	{
		exp++;
		cout << "Hai scelto l'arco!" << endl;
		cout << S << endl;
		cout << "   (\n    \\\n     )\n##-------->\n     )\n    /\n   (\n";
	}
	else if ((r == 'K') || (r == 'k'))
	{
		exp++;
		cout << "Hai scelto la katana!" << endl;
		cout << S << endl;
		cout << "._._.|___________________\n|_|_||__________________/\n     |         " << endl;
	}

	Sleep(3000);
	system("cls");

	// MISSION I
	system("color b");
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << "--" << div << endl;
	cout << S << endl;
	cout << pl << endl;
	cout << div << "--" << div << endl;
	cout << "Hai incontrato un mostro, che fai?" << endl;
	cout << "1) Scappi" << a << " 2) Combatti" << a << " 3) Fai amicizia" << endl;
	cin >> s1;

	if (s1 == 1)
	{
		exp++;
		v = v - 2;
		cout << "L'orco e' riuscito a colpirti..." << endl;
		Sleep(2000);
		cout << "Sei riuscito comunque a scappare!" << endl;
		Sleep(1000);
		cout << "Stato salute aggiornato." << endl;
	}
	else if (s1 == 3)
	{
		system("cls");
		exp--;
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << "--" << div << endl;
		cout << "             [(-_-)]" << endl;
		cout << "    (x!X)      | | (*) " << endl;
		cout << "    __|__    --| |--|" << endl;
		cout << "      |        | |  |" << endl;
		cout << "     _|-|_    _| |_" << endl;
		cout << div << "--" << div << endl;
		cout << "Hai scelto di fare amicizia con il mostro!" << endl;
		Sleep(2000);
		system("cls");
		system("color b");
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << "--" << div << endl;
		cout << "      [(-_-)]" << endl;
		cout << "        | | (*)" << endl;
		cout << "      --| |--| " << endl;
		cout << "        | |  |" << endl;
		cout << "       _| |_ |" << endl;
		cout << div << "--" << div << endl;
		cout << "Il mostro ti ha mangianto!" << endl;
		Sleep(3000);
		v -= 10;
		fine();
		system("pause");
		return 0;
	}
	else if (s1 == 2)
	{
		system("cls");
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << "--" << div << endl;
		system("color a");
		cout << "             [(-_-)]" << endl;
		cout << "    (+!+)      | | (*) " << endl;
		cout << "    __|__    --| |--|" << endl;
		cout << "      |        | |  |" << endl;
		cout << "     _|-|_    _| |_" << endl;
		cout << div << "--" << div << endl;
		cout << "Hai deciso di combattere contro il mostro!" << endl;

		Sleep(4000);
		system("cls");
		system("color b");
		v -= 3;

		exp++;
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << "--" << div << endl;
		cout << S << endl;
		cout << pl << endl;
		cout << div << "--" << div << endl;
		cout << "Hai sconfitto il mostro!" << endl;
		cout << "Stato salute aggiornato." << endl;
		Sleep(3000);
	}

	// MISSION II
	system("cls");
	exp++;
	system("color b");
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << "--" << div << endl;
	cout << S << endl;
	cout << pl << endl;
	cout << div << "--" << div << endl;
	cout << "Ti trovi in un bivio... Dove vai?" << endl;
	cout << "1) Destra" << a << " 2) Sinistra" << endl;
	cin >> ds;

	if (ds == 1)
	{
		int a, b, solu, risp;
		cout << "Sei finito in un burrone!" << endl;
		srand(time(NULL));
		a = rand() % 3;
		Sleep(1000);
		b = rand() % 5;
		risp = a+b;
		cout << "Risolvi la seguente addizione: " << a << " + " << b << endl;
		cin >> solu;
		if (solu != risp) 
		{	
			cout << "Hai sbagliato!!" << endl;
			Sleep(2000);
			cout << "Putroppo gli umani anche nel nostro mondo fantastico..." << endl;
			Sleep(2000);
			cout << " ... non sanno volare ..." << endl;
			Sleep(3500);
			fine();
			system("pause");
			return 0;
		}
		
		else {
			cout << "Risposta corretta!" << endl;
			Sleep(2000);
			cout << "Prosegui l'avventura!" << endl;
			Sleep(2000);
		}
	}
	// MISSION III
		system("cls");
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << "--" << div << endl;
		cout << S << endl;
		cout << "    (+!+)			(@-@)" << endl;
		cout << "    __|__    	 _|_ " << endl;
		cout << "      |     	  |	" << endl;
		cout << "    _|-|_    	 L L" << endl;
		cout << div << "--" << div << endl;
		Sleep(1000);
		cout << "Hai incontrato uno strambo mercante!" << endl;
		Sleep(1000);
		cout << "Ti sta offrendo di scambiare la tua arma in cambio di una scatola misteriosa." << endl;
		cout << "Che scegli?" << endl;
		cout << "1) Si" << a << " 2) No" << endl;
		cin >> sc;
		Sleep(1000);
		if (sc == 1)
		{
			cout << "Scelta errata..." << endl;
			Sleep(2000);
			cout << "Il Mercante ti ha teso una trappola!" << endl;
			cout << "Sei morto." << endl;
			fine();
		}
		else
		{
			exp++;
			cout << "Ottima scelta!" << endl;
			Sleep(2000);
			cout << "Voci dicono che il mercante sia un truffatore.." << endl;
			Sleep(3000);

	// END
	Sleep(3000);
	fine();

	system("pause");
	return 0;
	}
}
