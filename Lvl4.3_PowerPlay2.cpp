 /* Izzy Ward   CPSC 1375   June 20, 2023
 *    INSTRUCTIONS:
 *      Create three variables: 'float sallysAllowance{ 0.0f };', 'float johnsAllowance{ 0.0f };', and 
 *        'float* dad{ nullptr };'
 *      Start a while loop until dad is done, ask dad who he is going to pay allowance to,
 *      Have dad point at the person he is giving allowance to, ask dad how much, and 
 *      Add that amount to the person's allowance, using the dad pointer    */

#include <iostream>
#include <string>
#include <vector>

int main()
{
  float sallysAllowance{ 0.0f }, johnsAllowance{ 0.0f }; 
  float dad{ nullptr };

  while (float dad{ true })
  {
   //while true, who is getting allowance?
   std::cout << "Is Sally or John getting allowance?" << std::endl;
   std::cin >> name;
   //point at person getting allowance
   if (name == Sally)
    dad.sallysAllowance();
   //how much allowance?
    std::cout << "How much allowance does Sally get?: ";
    std::cin >> amountS;
   //add amount to allowance
    sallysAllowance.amount(amountS);
   else if (name == John)
    dad.johnsAllowance();
   //how much allowance?
    std::cout << "How much allowance does John get?: ";
    std::cin >> amountJ;
    johnsAllowance.amount(amountJ);
   else
    std::cout << "Please enter Sally or John" << std::endl;
  }
  return 0;
}
