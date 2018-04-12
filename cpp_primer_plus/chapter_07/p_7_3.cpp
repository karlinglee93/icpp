#include <iostream>

using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void func_a(const struct box s_box)
{
    cout << "maker is " << s_box.maker << endl;
    cout << "height is " << s_box.height << endl;
    cout << "width is " << s_box.width << endl;
    cout << "length is " << s_box.length << endl;
    cout << "volume is " << s_box.volume << endl;
}

void func_b(struct box * s_box)
{
    s_box->volume = s_box->height * s_box->width * s_box->length;
    
    cout << "volume is " << s_box->volume << endl;
}

int main()
{
    box s_box = {"karling lee", 1, 2, 3, 0};
    
    cout << "run func_a " << endl;
    func_a(s_box);
    cout << "func_a is done; " << endl;
    
    cout << "run func_b " << endl;
    func_b(& s_box);
    cout << "func_b is done; " << endl;
    
    cout << "run func_a " << endl;
    func_a(s_box);
    cout << "func_a is done; " << endl;
    
    return 0;
}

