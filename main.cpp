#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string cmd = "ffmpeg.exe -f vfwcap -i 0 -vframes 1 out.jpg";

    system(cmd.c_str());
    return 0;
}
