#include <iostream>
#include <fstream>
std::string    cut(std::string s1, std::string s2, std::string s3);

int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    if (ac != 4)
    {
       std::cout << "Wrong number of parametre" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    if (filename == "")
      std::cout << "filename unknow";
    std::ifstream   iFs(av[1]);
    if (iFs.is_open() == false)
    {
        iFs.close();
        std::cout << filename << " : wrong filename or wrong acces" << std::endl;
        return(1);
    }



    filename += ".remplace";
    std::ofstream   oFs(filename);

    while (!iFs.eof())
    {
        std::getline(iFs, s1);
    oFs << cut(s1, av[2], av[3]);
    oFs << std::endl;
    }
    oFs.close();
    iFs.close();
    return(0);
}
