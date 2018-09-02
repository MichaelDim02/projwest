#include <iostream>
#include <unistd.h>

using namespace std;

void three_count() {
	system("clear");
	cout<<"  o             3            o"<<endl;
	cout<<" /|\\                        /|\\"<<endl;
	cout<<" / \\                        / \\ "<<endl;
	sleep(1);
        system("clear");
        cout<<"  o             2            o"<<endl;
        cout<<" /|\\                        /|\\"<<endl;
        cout<<" / \\                        / \\ "<<endl;
        sleep(1);
        system("clear");
        cout<<"  o             1            o"<<endl;
        cout<<" /|\\                        /|\\"<<endl;
        cout<<" / \\                        / \\ "<<endl;
        sleep(1);
        system("clear");
        cout<<"  o            GO!           o"<<endl;
        cout<<" /|\\                        /|\\"<<endl;
        cout<<" / \\                        / \\ "<<endl;

}

int main() {
	three_count();
	return 0;
}
