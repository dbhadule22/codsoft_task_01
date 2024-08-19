#include<iostream>
#include<string>
#include<vector>
using namespace std;

class ToDoList {

    private:
    vector<string> tasks;

    public:

    void addTask(const string& task) {

        tasks.push_back(task);
        cout << "Task added:" << task << endl;

    }
    void deleteTask(int i) {

        if(i >= 0 && i < tasks.size()) {

            cout << "Task removed:" << tasks[i] << endl;
            tasks.erase(tasks.begin() + i);

        }
        else{

            cout << "Invalid index" << endl;

        }
    }

    void viewTasks() {

        if(tasks.empty()) {

            cout << "No tasks in the list" << endl;

        }
        else{

            cout<< "Tasks:" << endl;
            
            for(int i = 0;i < tasks.size(); i++) {

                cout << i+1 << "." <<tasks[i] << endl;
            }
        }
    }
};

int main() {

    ToDoList myList;
    int choice;
    string task;

    do {

        cout << "Choose an Option:" << endl;
        cout << "1.Add Task" << endl;
        cout << "2.Delete a Task" << endl;
        cout << "3.View Tasks" << endl;
        cout << "4.Quit" << endl;
        cout << " Enter your choices" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
            cout << " Enter Task:";
            cin.ignore();
            getline(cin,task);
            myList.addTask(task);
            break;

            case 2:
            int i;
            cout << "Enter index of task to remove:";
            cin >> i;
            myList.deleteTask(i-1);
            break;

            case 3:
            myList.viewTasks();
            break;

            case 4:
            cout << "Existing..." << endl;
            break;

        default:

        cout << "Invalid choice...Please try again" << endl;

        }
        cout << endl;
    }
    while(choice != 4);

    return 0;
    
}