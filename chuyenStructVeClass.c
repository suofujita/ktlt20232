#include <iostream>
using namespace std;

class part
{
    int modelnumber; //ID number of widget
    int partnumber; //ID number of widget part
    float cost; //cost of part
public:
    part(int m, int p, float c){
        modelnumber = m;
        partnumber = p;
        cost = c;
    }
    void getModelNumber() { return modelnumber; };
    void getPartNumber() { return partnumber; } ;
    void getCost() { return cost; };
};

int main()
{

part part1(6244, 373, 217.55F);
part part2();
cout << “Model “ << part1.getModelNumber;
cout << “, part “ << part1.getPartNumber;
cout << “, costs $” << part1.getCost << endl;

part2 = part1;

cout << “Model “ << part2.getModelNumber;
cout << “, part “ << part2.getPartNumber;
cout << “, costs $” << part2.getCost << endl;
return 0;
}
