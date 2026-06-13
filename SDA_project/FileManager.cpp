#include "FileManager.h"

void FileManager::writeRecord(string fileName, string data) {
    ofstream file(fileName, ios::app);

    if (file.is_open()) {
        file << data << endl;
        file.close();
    }
}

void FileManager::readAll(string fileName) {
    ifstream file(fileName);
    string line;

    if (!file.is_open()) {
        cout << "No records found.\n";
        return;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

vector<string> FileManager::readRecords(string fileName) {
    vector<string> records;
    ifstream file(fileName);
    string line;

    while (getline(file, line)) {
        records.push_back(line);
    }

    file.close();
    return records;
}

void FileManager::writeAll(string fileName, vector<string> records) {
    ofstream file(fileName);

    for (int i = 0; i < records.size(); i++) {
        file << records[i] << endl;
    }

    file.close();
}