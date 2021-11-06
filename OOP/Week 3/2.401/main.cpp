#include <iostream>
#include <string>
#include <vector>

int x1, y1, z1;
int x2, y2, z2;

class Vec3D
{
    public:
        int x;
        int y;
        int z;
}


int main() 
{

    Vec3D vec1;

    vec1.x = 10;
    vec1.y = 12;
    vec1.z = 25;

    std::vector<Vec3D> coords;

    coords.push_back(vec1);
    // you can access data with vec1.x, vec1.y, vec1.z

    return 0;
}