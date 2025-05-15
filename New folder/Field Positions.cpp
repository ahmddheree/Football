#include<iostream>
using namespace std;
class Position {
protected://These are the attributes on the bases of which the player will be judged.
	int pace;
	int stamina;
	int strength;
	int heading;
	int passing;
	int shooting;
	int tackling;
	int awareness;
	int vision;
	int dribbling;
	int marking;

	
};
class Midfielder :public Position {//midfield player will be judged with different criteria
	int overalll;//for overall attributes
	
public:
	//overridded function
	void input() {//input menu for attributes
		cout << "Fill out your attributes out of 100 " << endl;
		cout << "Pace : ";
		cin >> pace;
		cout << "Stamina : ";
		cin >> stamina;
		cout << "Strength : ";
		cin >> strength;
		cout << "Heading : ";
		cin >> heading;
		cout << "Passing : ";
		cin >> passing;
		cout << "Shooting : ";
		cin >> shooting;
		cout << "Tackling : ";
		cin >> tackling;
		cout << "Awareness : ";
		cin >> awareness;
		cout << "Vision : ";
		cin >> vision;
		cout << "Dribbling : ";
		cin >> dribbling;
		cout << "Marking : ";
		cin >> marking;
	}
	//overridded function
	int getover() {//overall returning function
		overalll = (pace + shooting + tackling + (3 * stamina) + (3 * vision) + (3 * passing) + (3 * awareness)) / 15;
		return overalll;
	}//overridded function
	void getrecommend() {//function to recommend position on basis of attributes
		if (tackling > shooting && dribbling < marking) {
			cout << "You should play as a defending midfielder" << endl;
		}
		else if (shooting > tackling && dribbling > marking) {
			cout << "You should play as attacking midfielder" << endl;
		}
		else {
			cout << "You can play as attacking and defending midfilder both" << endl;
		}
	}


};
class Attacker :public Position {//attack player will be judged with different criteria
	int overall;
	
public:
	//overridded function
	void input() {
		cout << "Fill out your attributes out of 100 " << endl;
		cout << "Pace : ";
		cin >> pace;
		cout << "Stamina : ";
		cin >> stamina;
		cout << "Strength : ";
		cin >> strength;
		cout << "Heading : ";
		cin >> heading;
		cout << "Passing : ";
		cin >> passing;
		cout << "Shooting : ";
		cin >> shooting;
		cout << "Tackling : ";
		cin >> tackling;
		cout << "Awareness : ";
		cin >> awareness;
		cout << "Vision : ";
		cin >> vision;
		cout << "Dribbling : ";
		cin >> dribbling;
		cout << "Marking : ";
		cin >> marking;
	}
	//overridded function
	int getover() {//overall returning function
		overall = (stamina + passing + awareness + (3 * shooting) + (3 * heading) + (3 * dribbling) + (3 * pace)) / 15;
		return overall;
	}
	//overridded function
	void getrecommend() {//function to recommend position on basis of attributes
		if (heading > dribbling &&  passing < shooting) {
			cout << "You should play as a Striker" << endl;
		}
		else if (pace > heading && dribbling > heading) {
			cout << "You should play as Winger" << endl;
		}
		else {
			cout << "You can play as Winger and Striker both" << endl;
		}
	}
};
class Defender :public Position {//defence player will be judged with different criteria
	int over;

public:
	//overridded function
	void input() {
		cout << "Fill out your attributes out of 100 " << endl;
		cout << "Pace : ";
		cin >> pace;
		cout << "Stamina : ";
		cin >> stamina;
		cout << "Strength : ";
		cin >> strength;
		cout << "Heading : ";
		cin >> heading;
		cout << "Passing : ";
		cin >> passing;
		cout << "Shooting : ";
		cin >> shooting;
		cout << "Tackling : ";
		cin >> tackling;
		cout << "Awareness : ";
		cin >> awareness;
		cout << "Vision : ";
		cin >> vision;
		cout << "Dribbling : ";
		cin >> dribbling;
		cout << "Marking : ";
		cin >> marking;
	}
	//overridded function
	int getover() {//overall returning function
		over = (pace + stamina + awareness + (3 * tackling) + (3 * heading) + (3 * marking) + (3 * strength)) / 15;
		return over;
	}
	//overridded function
	void getrecommend() {//function to recommend position on basis of attributes
		if (pace > strength && passing < heading) {
			cout << "You should play as a fullback" << endl;
		}
		else if (pace < strength && passing > heading) {
			cout << "You should play as a central defender" << endl;
		}
		else {
			cout << "You can play as central defender and fullback both" << endl;
		}
	}
	
};