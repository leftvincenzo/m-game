#include <iostream>
#include <windows.h>
#include <stdlib.h>        

using namespace std;

// GAMEOVER
void fine()
{

	system("cls");
	system("color c");

	cout << "   _____          __  __ ______    ______      ________ _____  \n  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\\n " << endl;
	cout << "  ____________________________________________________________\n |                                                            |\n |             CREDITI DEL CREATORE DI M-GAME                 |\n |____________________________________________________________|\n |                                                            |\n |  Data ultima modifica:        28/12/2023                   |\n |  Versione gioco:              2.1                          |\n |                                                            |\n |____________________________________________________________|\n " << endl;

	for (int i = 0; i < 10; i++)
	{
		Sleep(1000);
		system("color c");
		Sleep(1000);
		system("color 4");
	}

	exit(0);
}

int main()
{
	SetConsoleTitleA("[M-GAME] v2.1");

	// DECLARETIONS
	string n, div = "-----------", a = "|", pl = "    (+!+)\n    __|__    \n      | \n    _|-|_    ";
	int v = 10, exp = 0, vb = 10, s1, ds, sc;
	char S = ' ', r = 'X';

	// LOGIN
	cout << ".___  ___.            _______      ___      .___  ___.  _______ \n|   \\/   |           /  _____|    /   \\     |   \\/   | |   ____|\n|  \\  /  |  ______  |  |  __     /  ^  \\    |  \\  /  | |  |__   \n|  |\\/|  | |______| |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  \n|  |  |  |          |  |__| |  /  _____  \\  |  |  |  | |  |____ \n|__|  |__|           \\______| /__/     \\__\\ |__|  |__| |_______|\n " << endl;
	for (int i = 0; i < 3; i++) {
		system("color 6");
		Sleep(1000);
		system("color e");
		Sleep(1000);
	}
	cout << "Inserisci il tuo nickname: ";
	cin >> n;
	Sleep(1000);
	system("cls");
	system("color 0");

	// LOADING
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << pl << endl;
	cout << div<< endl;
	cout << "La tua avventura iniziera tra: " << endl;
	for (int i = 5; i >= 0; i--) {
		Sleep(1000*1);
		cout << i << endl;
	}

	system("cls");
	system("color 1");

	// WEAPON SELECTION
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << pl << endl;
	cout << div << div << endl;
	cout << "1) Spada | 2) Arco | 3) Katana" << endl;
	cout << div << div << endl;
	cout << "Scegli la tua arma: " << endl;
	cin >> r;

	if (r == '1')
	{
		r = 'S';
		exp++;
		cout << "Hai scelto la spada!" << endl;
		cout << S << endl;
		cout << "      /| ________________\nO|===|* >________________>\n      \\|\n";
	}
	else if (r == '2')
	{
		r = 'A';
		exp++;
		cout << "Hai scelto l'arco!" << endl;
		cout << S << endl;
		cout << "   (\n    \\\n     )\n##-------->\n     )\n    /\n   (\n";
	}
	else if (r == '3')
	{
		r = 'K';
		exp++;
		cout << "Hai scelto la katana!" << endl;
		cout << S << endl;
		cout << "._._.|___________________\n|_|_||__________________/\n     |         " << endl;
	}
	else {
		r = ' ';
		exp--;
		cout << "Hai scelto il vuoto!" << endl;
		cout << S << endl;
	}

	Sleep(3000);

	// MISSION I
	system("color b");
	system("cls");
	exp++;
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << S << endl;
	cout << pl << endl;
	cout << div << div << endl;
	cout << "Hai incontrato un mostro, che fai?" << endl;
	cout << div << div << endl;
	cout << "1) Scappi" << a << " 2) Combatti" << a << " 3) Fai amicizia" << endl;
	cin >> s1;

	if (s1 == 1)
	{
		exp++;
		v -= 2;
		cout << "L'orco e' riuscito a colpirti..." << endl;
		Sleep(2000);
		cout << "Sei riuscito comunque a scappare!" << endl;
		Sleep(1000);
		cout << "Stato salute aggiornato." << endl;
		Sleep(2000);
	}
	else if (s1 == 3)
	{
		system("cls");
		exp--;
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << div << endl;
		cout << "             [(-_-)]" << endl;
		cout << "    (x!X)      | | (*) " << endl;
		cout << "    __|__    --| |--|" << endl;
		cout << "      |        | |  |" << endl;
		cout << "    _|-|_     _| |_" << endl;
		cout << div << div << endl;
		cout << "Hai scelto di fare amicizia con il mostro!" << endl;
		cout << div << div << endl;
		Sleep(1000*4);
		system("cls");
		system("color b");
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << div << endl;
		cout << "      [(-_-)]" << endl;
		cout << "        | | (*)" << endl;
		cout << "      --| |--| " << endl;
		cout << "        | |  |" << endl;
		cout << "       _| |_ |" << endl;
		cout << div << div << endl;
		cout << "Il mostro ti ha mangianto!" << endl;
		cout << div << div << endl;
		Sleep(1000*5);
		v -= 10;
		fine();
	}
	else if (s1 == 2)
	{
		system("cls");
		cout << div << "[" << n << "]" << div << endl;
		cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
		cout << div << div << endl;
		system("color a");
		cout << "             [(-_-)]" << endl;
		cout << "    (+!+)      | | (*) " << endl;
		cout << "    __|__    --| |--|" << endl;
		cout << "      |        | |  |" << endl;
		cout << "    _|-|_     _| |_" << endl;
		cout << div << div << endl;
		cout << "Hai deciso di combattere contro il mostro!" << endl;
		srand(time(NULL));
		int a = rand() % 41, b = rand() % 41;
		int risp = a + b, solu;
		cout << "Risolvi la seguente addizione: " << a << " + " << b << endl;
		cin >> solu;

		if (solu == risp)
		{
			cout << "Risposta Giusta!\nHai sconfitto il mostro!!" << endl;
			Sleep(3000);
			v -= 3;
		}
		else
		{
			Sleep(3000);
			fine();
			v -= 3;
		}
	}

	// MISSION II
	system("cls");
	exp++;
	system("color e");
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << S << endl;
	cout << pl << endl;
	cout << div << div << endl;
	cout << "Ti trovi in un bivio... Dove vai?" << endl;
	cout << div << div << endl;
	cout << "1) Destra" << a << " 2) Sinistra" << endl;
	cin >> ds;

	if (ds == 1)
	{
		int solu, risp;
		cout << "Sei finito in un burrone!" << endl;
		srand(time(NULL));
		int a = rand() % 41, b = rand() % 41;
		risp = a + b;
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
	exp++;
	system("color a");
	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << S << endl;
	cout << "    (+!+)       (@-@)" << endl;
	cout << "    __|__    	 _|_ " << endl;
	cout << "      |     	  |	" << endl;
	cout << "    _|-|_    	 L L" << endl;
	cout << div << div << endl;
	cout << "Hai incontrato uno strambo mercante!\nTi sta offrendo di scambiare la tua arma \nin cambio di una scatola misteriosa, che fai?" << endl;
	cout << div << div << endl;
	cout << "1) Si" << a << " 2) No" << endl;
	cin >> sc;
	Sleep(1000);
	if (sc == 1)
	{
		cout << "Scelta errata..." << endl;
		Sleep(2000);
		cout << "Il Mercante ti vuole combattere!" << endl;
		srand(time(NULL));
		int a = rand() % 41, b = rand() % 41;
		int risp = a + b, solu;
		cout << "Risolvi la seguente addizione: " << a << " + " << b << endl;
		cin >> solu;

		if (solu == risp)
		{
			cout << "Risposta Giusta!\nIl mercante e' stato sconfitto!" << endl;
		}
		else
		{
			Sleep(3000);
			fine();
		}

	}
	else
	{
		exp++;
		cout << "Ottima scelta!" << endl;
		Sleep(2000);
		cout << "Voci dicono che il mercante sia un truffatore.." << endl;
		Sleep(3000);

	}

	// BOSS
	system("cls");
	exp++;
	system("color c");
	cout << "Hai incontrato il boss finale del gioco..." << endl;
	Sleep(2 * 1000);
	system("color 4");
	cout << "Preparati a combattere..." << endl;
	Sleep(3 * 1000);
	system("color b");

	//SOLUZIONE GRAZIE AD AUGU GODO

	cout << div << "[" << n << "]" << div << endl;
	cout << a << "HP:" << v << a << " " << a << "ARMA:" << r << a << S << a << "EXP:" << exp << a << endl;
	cout << div << div << endl;
	cout << "Vita Boss: " << vb << endl;
	cout << div << div << endl;
	cout << S << endl;
	cout << "    (+!+)    *o*  " << endl;
	cout << "    __|__    <|>  " << endl;
	cout << "      |       |   " << endl;
	cout << "    _|-|_    ( )  " << endl;
	cout << div << div << endl;
	cout << "BATTAGLIA FINALE CONTRO BACONG" << endl;
	cout << div << div << endl;
	while (vb > 0 && v > 0) {
		int c = rand() % 41, d = rand() % 42;
		int rispostaCorretta = c + d, rispostaUtente;

		cout << "Risolvi la seguente addizione: " << c << " + " << d << endl;
		cin >> rispostaUtente;


		if (rispostaUtente == rispostaCorretta) {
			cout << "Risposta giusta, 5 danni inflitti a Bacong!" << endl;
			exp++;
			vb -= 2;
		}
		else {
			cout << "Risposta sbagliata!!!!\nIl Bacong ti ha inflitto danno!" << endl;
			v -= 3;
			cout << "Vita giocatore: " << v << endl;
		}

		if (v <= 0) {
			cout << "Hai perso!" << endl;
			break;
		}
	}

	if (vb <= 0)
	{
		cout << "Il boss ti ha sconfitto!!" << endl;
		cout << "RIP: " << n << endl;
		fine();
	}
	else
		fine();
}
