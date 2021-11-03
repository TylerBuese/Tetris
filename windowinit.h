//#include "includes.h"

//Contains all window intialization settings


class WindowInit
{
    public:
    //Sets window width and height to x and y parameters (lowest res is 640x480)
        void setWindowWidthAndHeight(int x, int y)
        {
            windowWidth = (x < 640) ? windowWidth = 640 : windowWidth = x;
            windowHeight = (y < 480) ? windowHeight = 480 : windowHeight = y;
        }

        int getWindowWidth()
        {
            if (windowWidth != 0)
            {
                return windowWidth;
            } else 
            {
                return 640;
            }
        }

        int getWindowHeight()
        {
            if (windowHeight != 0)
            {
                return windowHeight;
            } else
            {
                return 480;
            }
        }

        

    private:
        int windowWidth {0};
        int windowHeight {0};

};
