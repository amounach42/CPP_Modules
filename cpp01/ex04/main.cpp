#include <iostream>
#include <fstream>
#include <string>

std::string read_file(std::string fileName)
{
    std::string content;
    std::string tmp;
    bool is_last_line;

    std::ifstream file(fileName);
    if (!file.is_open())
        std::cerr << "Error: unable to open file\n";
    while (!file.eof())
    {
        std::getline(file, tmp);
        is_last_line = file.eof();
        content = content + tmp + (is_last_line ? "" : "\n");
    }
    return (content);
}

std::string replace(std::string content, std::string s1, std::string s2)
{
    std::string::size_type pos = 0;
    std::ofstream outfile;
    if (!outfile)
    {
        std::cout << "Error opening file!" << std::endl;
    }
    pos = content.find(s1);
    while (pos != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos = content.find(s1, pos + s2.length());
    }
    std::cout << content << std::endl;
    return content;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <file> <string1> <string2>\n";
        return 1;
    }
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cerr << "?" << std::endl;
        exit (1);
    }
    std::ofstream file;
    std::string outFileName = file_name + ".replace";
    file.open(outFileName);
    std::string content = read_file(file_name);
    content = replace(content, s1, s2);
    file << content;
    file.close();
    return 0;
}
