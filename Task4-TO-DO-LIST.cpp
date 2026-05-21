
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	vector<string> tasks;
	int choice;
	string task;
	
	cout << "===Maithili's TO-DO-LIST ===" << endl;
	
	while(true) {
		cout<< "\n1. Add Task " << endl;
		cout << "2. View Tasks " << endl;
		cout << "3. Delete Task " << endl;
		cout << "4. Exit " << endl;
		cout << "Select Option [1-4]: ";
		cin>> choice;
		cin.ignore();

		if(choice == 1) {
			cout << "Enter Task: ";
			getline(cin, task);
            tasks.push_back(task);
			cout << "Task Added Maithili! " << endl;

		}

		else if(choice == 2){
			cout << "\n----YOUR TASKS----"<< endl;
			if(tasks.empty()) {
				cout << " No tasks yet Maithili  "<< endl;
			}
			for(int i = 0; i < tasks.size(); i++){
				cout << i+1 <<"." << tasks[i] << endl;
			}
		}

		else if(choice == 3){
			int num;
			cout << "Which Task to Delete? Enter number: ";
			cin >> num;
			if(num >0 && num<= tasks.size()){
				tasks.erase(tasks.begin() + num - 1);
				cout << "Tasks Deleted " << endl;
			}else {
				cout << "Wrong Number Maithili " << endl;
			}
		}
		else if(choice == 4) {
			cout << "Bye Bye Maithili! Task 4 Complete " << endl;
			break;
		}
		else{
			cout << "Choose between 1 to 4 Maithili " << endl;
		}
		}

		return 0;
}
