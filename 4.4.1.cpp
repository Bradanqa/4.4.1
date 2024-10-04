#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


int main()
{
   std::string str = "Hello World!!";

   std::cout << "[IN]: " << str << std::endl;

   std::map<char, int> elem_map;

   for (auto elem : str)
   {
      elem_map[elem]++;
   }

   std::vector<std::pair<char, int>> elem_vector(elem_map.begin(), elem_map.end());

   std::sort(elem_vector.begin(), elem_vector.end(),
      [](std::pair<char, int> &first, std::pair<char, int> &second)
      {
         return first.second > second.second;
      }
   );

   std::cout << "[OUT]:" << std::endl;

   for (auto &elem : elem_vector)
   {
      std::cout << elem.first << ": " << elem.second << std::endl;
   }
}
