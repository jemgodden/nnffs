#pragma once

#include <string>


class DataSet {
    private:
        std::string _filepath;
        int _fileRows;
        int _fileCols;

    public:
        DataSet(std::string _filepath);
        
        ~DataSet();

        std::string filePath();
        
};