#include <iostream>
#include <unistd.h>

using namespace std;

void logo() {
	cout << "    _ _ _ ____ ____ ___ ____ ____ _  _ " << endl;
	cout << "    | | | |___ [__   |  |___ |__/ |\\ | " << endl;
	cout << "    |_|_| |___ ___]  |  |___ |  \\ | \\| " << endl << endl << "           D     U     A     L      " << endl << endl;
}

int main() {
	system("clear");
	logo();
	return 0;
}
