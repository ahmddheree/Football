#include"Field Positions.cpp"//Field postions cpp
int main(){
	int choice;
	cout << "Enter you position to find overall attributes and recommended position......" << endl;//menu
	cout << "1 for Midfield" << endl << "2 for Attack" << endl << "3 for Defence" << endl;
	cin >> choice;
	Position abc;//position object
	switch (choice) {
	case 1://In case of midfield
		Midfielder m;
		m.input();
		cout << "Your overall average as midfielder is : " << m.getover() << endl;
		m.getrecommend();
		break;
	case 2://In case of attacker
		Attacker a;
		a.input();

		cout << "Your overall average as attacker is : " << a.getover() << endl;
		a.getrecommend();
		break;
	case 3://In case of defender
		Defender d;
		d.input();
		cout << "Your overall average as defender is : " << d.getover() << endl;
		d.getrecommend();
		break;
	}
}