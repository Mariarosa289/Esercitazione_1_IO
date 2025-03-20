#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>


int main()
{  std::ifstream inputfile ("data.txt");
	if (inputfile.fail())
	{
		std:: cerr << "Non è stato possibile aprire il file in input" << std::endl;
		return 1;
	}
	std::ofstream outputfile ("result.txt");
	if (outputfile.fail())
	{
		std:: cerr << "Non è stato possibile aprire il file in output" << std::endl;
		return 1;
	}


	int i=0;
	double result=0;
	double sum=0;
	outputfile << "# N Mean" << std::endl;
	std:: string valore;
	while (std::getline(inputfile,valore))
	{
		std::stringstream ss(valore);
		double num=0;
		while (ss>>num)
		{	result=-1 + (num - 1) * (2 - (-1)) / (5 - 1);
			sum=sum+result;
			i++;
			double media= sum/i;
			outputfile << i << " " << std::scientific << std::setprecision(16) << media << std::endl;
		}
	}
	inputfile.close();
	outputfile.close();
	
    return 0;
}

