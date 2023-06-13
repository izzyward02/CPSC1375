#include <iostream>
#include <string>
#include <fstream>
#include <random>

int main()
{
  std::ofstream outf{ "numbers.txt" }; //creates & opens txt file for writing
  const int nums = 100;

  std::default_random_engine generator;
  std::bernoulli_distribution distribution(0.9); //distribution of trues

  int count = 0;  //count number of trues
  for (int i = 0; i < nums; ++i) 
    if (distribution(generator)) ++count;
      std::cout << "bernoulli_distribution (0.9) x 100:" << std::endl;
      std::cout << "true:  " << count << std::endl;
      std::cout << "false: " << nums - count << std::endl;
      outf << nums << '\t';
  
  std::ifstream inf{ "numbers.txt" }; //opens txt file for reading
  while (inf) //while there is input to read
  {
    std::string strInput;   //read content & print to file
    std::getline(inf, strInput);
    std::cout << strInput << '\n';
  }

  return 0;
}
