#include "protectionProxy.h"
#include "virtualProxy.h"


int main(int argc, char const *argv[])
{
    Image* image = new VirtualProxy("cat");     //the cat real resource has not been loaded!
    Image* image2 = new ProtectionProxy("dog");
    image2->show();     //input admin to show the dog!
    image->show();      //the cat has been loaded and showed!
    delete image2;
    delete image;
    return 0;
}
