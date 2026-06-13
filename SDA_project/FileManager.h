#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class FileManager {
public:
    static void writeRecord(string fileName, string data);
    static void readAll(string fileName);
    static vector<string> readRecords(string fileName);
    static void writeAll(string fileName, vector<string> records);
};

#endif