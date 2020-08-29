#include "Blog.h"
#include "blackFont.h"
#include "PicShow.h"
#include "DarkTheme.h"

int main(int argc, char const *argv[])
{
    WebApp* app1 = new Blog(new DarkTheme(true), "9Tempest is so good!");
    WebApp* app2 = new Blog(new BlackFont("red", "Aries"), "HEYHEYHEY, This is my Blog");
    WebApp* app3 = new PicShow(new DarkTheme(true, "Blue"), "CatPic", 10);
    WebApp* app4 = new PicShow(new BlackFont("Aries"), "DogPic", 20);
    app1->display();
    app2->display();
    app3->display();
    app4->display();
    delete app1;
    delete app2;
    delete app3;
    delete app4;
    return 0;
}
