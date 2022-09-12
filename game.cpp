#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<bitset>
#include <ctime>
#include <cstdlib>

#define FO(x) {freopen(#x".in","r",stdin);freopen(#x".out","w",stdout);}

using namespace std;

const int inf = 1e6;

int cntrau = 3, cntbun = 19;

int main() {
	while (1) {
		if (cntbun & 1) {
			int a = (rand() % 85) + 1;
			int b = (rand() % 15) + 1;
			if (a & 1)
				swap(a, b);
			
			int addspacea = 0, addspaceb = 0;
			if (a < 10)
				addspacea = 1;
			if (b < 10)
				addspaceb = 1;

			cout << " ";
			if (addspacea) cout << " ";
			
			cout << a << " + \n ";
			
			if (addspaceb) cout << " "; 

			cout << b << "\n---- " << "=\n ";

			int x;
			cin >> x;

			if (x != a + b) {
				cntrau++;
				printf("\x1B[31mIncorect, mai incearca\n\033[0m\t\t");
				cin >> x;

				if (x != a + b)
					cout << "\nRaspunsul corect este " << a + b << endl;

			}
			else
				printf("\x1B[32m\nBravo\n\033[0m\t\t"), cntbun++;

			cout << "Ai facut bine " << cntbun << " si ai gresit " << cntrau << "\n\n";
		}
		else {
			int a = (rand() % 99) + 1;
			int b = (rand() % 100) + 1;
			if (a < b)
				swap(a, b);

			int addspacea = 0, addspaceb = 0;
			if (a < 10)
				addspacea = 1;
			if (b < 10)
				addspaceb = 1;

			cout << " ";
			if (addspacea) cout << " ";

			cout << a << " - \n ";

			if (addspaceb) cout << " ";

			cout << b << "\n---- " << "=\n ";

			int x;
			cin >> x;

			if (x != a - b) {
				cntrau++;
				printf("\x1B[31mIncorect, mai incearca\n\033[0m\t\t");
				cin >> x;

				if (x != a - b)
					cout << "\nRaspunsul corect este " << a - b << endl;

			}
			else
				printf("\x1B[32m\nBravo\n\033[0m\t\t"), cntbun++;

			cout << "Ai facut bine " << cntbun << " si ai gresit " << cntrau << "\n\n";
		}
	}

}
