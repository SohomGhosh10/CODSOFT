//TASK 3
//TO DO LIST

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool isCompleted;
};

void displayTasks(const vector<Task>& tasks) {
    cout << "\nTo-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description << " [" << (tasks[i].isCompleted ? "Completed" : "Pending") << "]\n";
    }
    cout << "\n";
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: // Add Task
                {
                    Task task;
                    cout << "Enter task description: ";
                    cin.ignore(); // Clear the newline character from the previous input
                    getline(cin, task.description);
                    task.isCompleted = false;
                    tasks.push_back(task);
                    cout << "Task added successfully!" << endl;
                }
                break;

            case 2: // View Tasks
                displayTasks(tasks);
                break;

            case 3: // Mark Task as Completed
                displayTasks(tasks);
                int taskIndex;
                cout << "Enter the task number to mark as completed: ";
                cin >> taskIndex;
                if (taskIndex > 0 && static_cast<size_t>(taskIndex) <= tasks.size()) {
                    tasks[taskIndex - 1].isCompleted = true;
                    cout << "Task marked as completed!" << endl;
                } else {
                    cout << "Invalid task number. Please enter a valid task number." << endl;
                }
                break;

            case 4: // Remove Task
                displayTasks(tasks);
                int removeIndex;
                cout << "Enter the task number to remove: ";
                cin >> removeIndex;
                if (removeIndex > 0 && static_cast<size_t>(removeIndex) <= tasks.size()) {
                    tasks.erase(tasks.begin() + removeIndex - 1);
                    cout << "Task removed!" << endl;
                } else {
                    cout << "Invalid task number. Please enter a valid task number." << endl;
                }
                break;

            case 5: // Exit
                cout << "Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
