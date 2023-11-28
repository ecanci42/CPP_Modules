#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string str, std::string newStr)
{
    this->fileName = fileName;
    this->str = str;
    this->newStr = newStr;
}

Replace::~Replace()
{
}

void Replace::replaceFile()
{
    std::string line, output_file_name;
    size_t position;

    std::ifstream inFile(this->fileName); //input file stream

    if (!inFile)
    {
        std::cout << "Error occurred while reading!" << std::endl;
        return ;
    }
    
    output_file_name = this->fileName + ".replace";
    std::ofstream outputfile(output_file_name); //output file stream

    if (!outputfile)
    {
        std::cout << "A file creation error has occurred." << std::endl;
        return ;
    }

    while (getline(inFile, line))
    {
        position = 0;
        while (line.find(str, position) != std::string::npos)
        {
            position = line.find(str, position);
            line.erase(position, this->str.length());
            line.insert(position, this->newStr);
            position += newStr.length();
        }
        outputfile << line << std::endl;
    }
    inFile.close();
    outputfile.close();
}