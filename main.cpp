#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	
	//Dichiarazioni
	string n;
	string div = "-----------";
	string a = "|";
	int v = 10;
	int s1, i;
	const char S = ' ';
	char r ='X';
	char ds, sc;
	
	//SCHERMATA
	system ("color 6");
	cout << ".___  ___.            _______      ___      .___  ___.  _______ " << endl;
	cout << "|   \\/   |           /  _____|    /   \\     |   \\/   | |   ____|" << endl;
	cout << "|  \\  /  |  ______  |  |  __     /  ^  \\    |  \\  /  | |  |__   " << endl;
	cout << "|  |\\/|  | |______| |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|  " << endl;
	cout << "|  |  |  |          |  |__| |  /  _____  \\  |  |  |  | |  |____ " << endl;
	cout << "|__|  |__|           \\______| /__/     \\__\\ |__|  |__| |_______|" << endl;

	cout << S <<endl;
	cout << "Inserisci il tuo nickname: ";
	cin >> n;
	sleep(1);
	system("cls");
	system ("color 0");
	
	// Avvio avventura
	cout <<div<< "[" <<n<< "]" <<div<<endl;
	cout <<a<< "HP:" <<v<<a<< " " <<a<< "ARMA:" <<r<<a<<endl;
	cout << div << "--" << div <<endl;
	cout << "    (+!+)" <<endl;
	cout << "    __|__    " <<endl;
	cout << "      |     " <<endl;
	cout << "    _|-|_    " <<endl;
	cout << div << "--" << div <<endl;
	cout << "La tua avventura iniziera tra 5 secondi!!" <<endl;
	cout << div << "--" << div <<endl;
	
	sleep(5);
	system("cls");
	system("color 1");
	
	// Menu selezione arma
	cout << div << "[" << n << "]" << div <<endl;
	cout << a << "HP:" << v << a << " " <<endl;
	cout << div << "--" << div <<endl;
	cout << "SELEZIONA LA TUA ARMA:" <<endl;
	cout << div << "--" << div <<endl;
	cout << a << "Spada  " << a << "Arco  " << a << "Katana" <<endl;
	cout << a << "1) S   " << a << "2) A  " << a << "3) K  " <<endl;
	cout << a << "LENTO  " << a << "VELOCE" << a << "NORMALE " <<endl;
	cout << div << "--" << div <<endl;
	cout << "Scegli la tua arma: ";
	cin >> r;
	
	if ((r == 'S') || (r == 's'))
	{
		cout << "Hai scelto la spada!"<<endl;
		cout << S <<endl;
		cout << "      /| ________________\n";
    	cout << "O|===|* >________________>\n";
    	cout << "      \\|\n";
	}
	else if ((r == 'A') || (r == 'a'))
	{
		cout << "Hai scelto l'arco!"<<endl;
		cout << S <<endl;
		cout << "   (\n";
    	cout << "    \\\n";
    	cout << "     )\n";
    	cout << "##-------->\n";
    	cout << "     )\n";
    	cout << "    /\n";
    	cout << "   (\n";
	}
	else if ((r == 'K') || (r == 'k'))
	{
		cout << "Hai scelto la katana!"<<endl;
		cout << S <<endl;
		cout << "._._._._._|___________________" << endl;
    	cout << "|_|_|_|_|_|__________________/" << endl;
    	cout << "          |         " << endl;
	}
	else
	{
		cout << "Inserisci l'iniziale di un'arma!!!" <<endl;
		cin >> r;
	}
		
	sleep(2);
	system("cls");
	
	
	// Missione 1
	system("color b");
	cout << div << "[" << n << "]" << div <<endl;
	cout << a << "HP:" << v << a << " " << "ARMA:" << r << a <<endl;
	cout << div << "--" << div <<endl;
	cout << S <<endl;
	cout << "    (+!+)" <<endl;
	cout << "    __|__    " <<endl;
	cout << "      |     " <<endl;
	cout << "    _|-|_    " <<endl;
	cout << div << "--" << div <<endl;
	cout << S <<endl;
	cout << "Hai incontrato un mostro, che fai?" <<endl;
	cout << "1) Scappi" << a << " 2) Combatti" << a <<" 3) Fai amicizia" <<endl;
	cin >> s1;
	
	if (s1 == 1)
	{
		v=v-2;
		cout << "L'orco e' riuscito a colpirti..." <<endl;
		sleep(2);
		cout << "Sei riuscito comunque a scappare!" <<endl;
		sleep(1);
		cout << "Stato salute aggiornato." <<endl;
	}
	else if (s1 == 3)
	{
		system("cls");
		cout << div << "[" << n << "]" << div <<endl;
		cout << a << "HP:" << v << a << " " << "ARMA:" << r << a <<endl;
		cout << div << "--" << div <<endl;
		cout << "             [(-_-)]" <<endl;
		cout << "    (x!X)      | | (*) " <<endl;
		cout << "    __|__    --| |--|" <<endl;
		cout << "      |        | |  |" <<endl;
		cout<< "     _|-|_    _| |_" <<endl;
		cout << div << "--" << div <<endl;
		cout << "Hai scelto di fare amicizia con il mostro!" <<endl;
		sleep(2);
		system("cls");
		system("color b");
		cout << div << "[" << n << "]" << div <<endl;
		cout << a << "HP:" << v << a << " " << "ARMA:" << "X" << a <<endl;
		cout << div << "--" << div <<endl;
		cout << "      [(-_-)]" <<endl;
		cout << "        | | (*)" <<endl;
		cout << "      --| |--| " <<endl;
		cout << "        | |  |" <<endl;
		cout << "       _| |_ |" <<endl;
		cout << div << "--" << div <<endl;
		cout << S <<endl;
		cout << "Il mostro ti ha mangianto!" <<endl;
		sleep(3);
		v-=10;
		for (i=0;i<10;i++)
		{
			sleep(1);
			system("color c");
			sleep(1);
			system("color 4");
			cout << "GAME OVER!!!" <<endl;
		}
		system("pause");
		return 0;
	}
	else if (s1 == 2)
	{
		system("cls");
		cout << div << "[" << n << "]" << div <<endl;
		cout << a << "HP:" << v << a << " " << "ARMA:" << r << a <<endl;
		cout << div << "--" << div <<endl;
		system("color a");
		cout << "             [(-_-)]" <<endl;
		cout << "    (+!+)      | | (*) " <<endl;
		cout << "    __|__    --| |--|" <<endl;
		cout << "      |        | |  |" <<endl;
		cout<< "     _|-|_    _| |_" <<endl;
		cout << div << "--" << div <<endl;
		cout << "Hai deciso di combattere contro il mostro!" <<endl;
		
		sleep(4);
		system("cls");
		system("color b");
		v-=3;
		
		cout << div << "[" << n << "]" << div <<endl;
		cout << a << "HP:" << v << a << " " << "ARMA:" << "X" << a <<endl;
		cout << div << "--" << div <<endl;
		cout << S <<endl;
		cout << "    (+!+)" <<endl;
		cout << "    __|__    " <<endl;
		cout << "      |     " <<endl;
		cout << "    _|-|_    " <<endl;
		cout << div << "--" << div <<endl;
		cout << S <<endl;
		cout << "Hai sconfitto il mostro!" <<endl;
		cout << "Stato salute aggiornato." <<endl;
		sleep(3);
	}
	
	// Missione 2
	system("cls");
	system("color b");
	cout << div << "[" << n << "]" << div <<endl;
	cout << a << "HP:" << v << a << " " << "ARMA:" << r << a <<endl;
	cout << div << "--" << div <<endl;
	cout << S <<endl;
	cout << "    (+!+)" <<endl;
	cout << "    __|__    " <<endl;
	cout << "      |     " <<endl;
	cout << "    _|-|_    " <<endl;
	cout << div << "--" << div <<endl;
	cout << S <<endl;
	cout << "Ti trovi in un bivio... Dove vai?" <<endl;
	cout << "1) Destra: D" << a << " 2) Sinistra: S"<<endl;
	cin >> ds;
	
	if ((ds == 'D') || (ds == 'd'))
	{
		cout << "Sei finito in un burrone!" <<endl;
		sleep(1);
		cout << "Putroppo gli umani anche nel nostro mondo fantastico..." <<endl;
		sleep(2);
		cout << " ... non sanno volare ..." <<endl;	
		for (i=0;i<10;i++)
		{
			sleep(1);
			system("color c");
			sleep(1);
			system("color 4");
			cout << "GAME OVER!!!" <<endl;
		}
		system("pause");
		return 0;
	}
	else if ((ds == 'S') || (ds == 's'))
	{
		system("cls");
		cout << div << "[" << n << "]" << div <<endl;
		cout << a << "HP:" << v << a << " " << "ARMA:" << r << a <<endl;
		cout << div << "--" << div <<endl;
		cout << S <<endl;
		cout << "    (+!+)   (@!@)" <<endl;
		cout << "    __|__    	 _|_ " <<endl;
		cout << "      |     	  |	" <<endl;
		cout << "    _|-|_    	 L L" <<endl;
		cout << div << "--" << div <<endl;
		cout << S <<endl;
		sleep(1);
		cout << "Hai incontrato uno strambo mercante!" <<endl;
		sleep(1);
		cout << "Ti sta offrendo di scambiare la tua arma in cambio di una scatola misteriosa." <<endl;
		cout << "Che scegli?" <<endl;
		cout << "1) Si: S" << a << " 2) No: N"<<endl;
		cin >> sc;
		sleep(1);
		if ((sc == 's') | (sc == 'S'))
		{
			cout << "Scelta errata..." <<endl;
			sleep(2);
			cout << "Il Mercante ti ha teso una trappola!" <<endl;
			cout << "Sei morto." <<endl;
			for (i=0;i<10;i++)
		{
			sleep(1);
			system("color c");
			sleep(1);
			system("color 4");
			cout << "GAME OVER!!!" <<endl;
		}
		system("pause");
		return 0;
		}
		else if ((sc == 'n') | (sc == 'N'))
		{
			cout << "Ottima scelta!" <<endl;
			sleep(2);
			cout << "Voci dicono che il mercante sia un truffatore.." <<endl;
			sleep(3);
		}
		else
		{
			cout << "Scegli inserendo Si: S, o, No: N" <<endl;
			cin >> sc;	
		}
	}
	else
	{
		cout << "Scegli inserendo l'iniziale della direzione! D o S" <<endl;
		cin >> ds;
	}

	// CONCLUSIONE
	system("cls");
    
    system("color c");
    cout << "  ____________________________________________________________\n";
    cout << " |                                                            |\n";
    cout << " |             CREDITI DEL CREATORE DI M-GAME                 |\n";
    cout << " |____________________________________________________________|\n";
    cout << " |                                                            |\n";
    cout << " |  Data ultima modifica:        02/12/2023                   |\n";
    cout << " |  Versione gioco:              1.2                          |\n";
    cout << " |                                                            |\n";
    cout << " |____________________________________________________________|\n";
    cout << S <<endl;
    sleep(5);

	
system("pause");
return 0;
}
