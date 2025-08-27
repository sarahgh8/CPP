#include <iostream>
#include <string>
#include <fstream>

std::string get_content(char *__s, std::ifstream &ifs)
{
    std::string line;
    std::string content;

    ifs.open(__s, ifs.in);
    if(!ifs.is_open())
    {
        std::cout << "Error in opening the file\n";
        return "";
    }
    while(std::getline(ifs, line))
    {
        content += line;
        if(!ifs.eof())
            content += '\n';
    }
    return content;
}

std::string _replace(std::string content, std::string s1, std::string s2)
{
    if (s1.empty()) 
        return content;
    
    std::string result = "";
    size_t i = 0;
    
    while (i < content.length())
    {
        size_t j = 0;
        while (i + j < content.length() && j < s1.length() && content[i + j] == s1[j])
            j++;
        if (j == s1.length())
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += content[i];
            i++;
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    if(argc != 4)
        return 1;

    std::string content;
    std::string replaced_content;
    std::string out_file = std::string(argv[1]) + ".replace";
    
    std::ifstream ifs;
    std::ofstream ofs;
    
    content = get_content(argv[1], ifs);
    replaced_content = _replace(content, argv[2], argv[3]);

    ofs.open(out_file.c_str(), ofs.out); 
    if(!ofs.is_open())
    {
        std::cout << "Error in openeing out file\n";
        return 1;
    }
    ofs << replaced_content;
    ifs.close();
    ofs.close();
    return 0;
}