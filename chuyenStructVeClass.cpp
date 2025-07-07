#include <iostream>
using namespace std;

class part
{
    int modelnumber; //ID number of widget
    int partnumber; //ID number of widget part
    float cost; //cost of part
public:
    void setData(int m, int p, float c){
        modelnumber = m;
        partnumber = p;
        cost = c;
    }
    void showData(){
        cout << "Model " << modelnumber;
        cout << ", part " << partnumber;
        cout << ", costs $" << cost << endl;
    }
};

int main()
{

    part part1, part2;
    part1.setData(6244, 373, 217.55F);
    part1.showData(); // print $217.55

    part2 = part1;  // gan 2 object voi nhau

    part2.showData();

    return 0;
}
