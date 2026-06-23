#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> files;

void createFile() {
    string name;
    cout << "Enter file name: ";
    cin >> name;
    files.push_back(name);
    cout << "File Created!\n";
}

void showFiles() {
    cout << "\nFiles:\n";
    if(files.empty()) {
        cout << "No Files Found\n";
        return;
    }

    for(int i = 0; i < files.size(); i++) {
        cout << i + 1 << ". " << files[i] << endl;
    }
}

void deleteFile() {
    string name;
    cout << "Enter file name to delete: ";
    cin >> name;

    for(int i = 0; i < files.size(); i++) {
        if(files[i] == name) {
            files.erase(files.begin() + i);
            cout << "File Deleted!\n";
            return;
        }
    }

    cout << "File Not Found!\n";
}

int main() {
    int choice;

    while(true) {
        cout << "\n===== MINI OS =====\n";
        cout << "1. Create File\n";
        cout << "2. View Files\n";
        cout << "3. Delete File\n";
        cout << "4. Shutdown\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                createFile();
                break;
            case 2:
                showFiles();
                break;
            case 3:
                deleteFile();
                break;
            case 4:
                cout << "System Shutdown...\n";
                return 0;
            default:
                cout << "Invalid Choice!\n";
        }
    }
}