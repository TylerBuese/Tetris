#include "includes.h"

class Shape
{
    public:
        

        void rotateShape(Rectangle rec)
        {

        }

        void drawShape(Rectangle shape1, Rectangle shape2, Rectangle shape3, Rectangle shape4)
        {
            //maybe just do an if so if its L draw this, if its I draw that
            DrawRectangleRec(shape1, RED);
            DrawRectangleRec(shape2, RED);
            DrawRectangleRec(shape3, RED);
            DrawRectangleRec(shape4, RED);
        }


    private:
        int x {0};
        int y {0};
};

class IShape
{
    Rectangle Ione {10, 10, 10, 10};
    Rectangle Itwo {20, 10, 10, 10};
    Rectangle Ithree {30, 10, 10, 10};
    Rectangle Ifour {40, 10, 10, 10};
    Rectangle shape[4] {Ione, Itwo, Ithree, Ifour};
    
    


    // Rectangle Lone {10, 10, 10, 10};
    // Rectangle Ltwo {20, 10, 10, 10};
    // Rectangle Lthree {30, 10, 10, 10};
    // Rectangle Lfour {30, 20, 10, 10};

    // Rectangle Sone {10, 10, 10, 10};
    // Rectangle Stwo {20, 10, 10, 10};
    // Rectangle Sthree {10, 20, 10, 10};
    // Rectangle Sfour {20, 20, 10, 10};

    // Rectangle Tone {10, 10, 10, 10};
    // Rectangle Ttwo {20, 10, 10, 10};
    // Rectangle Tthree {30, 10, 10, 10};
    // Rectangle Tfour {20, 20, 10, 10};

    // Rectangle SQone {10, 10, 10, 10};
    // Rectangle SQtwo {20, 10, 10, 10};
    // Rectangle SQthree {20, 20, 10, 10};
    // Rectangle SQfour {30, 20, 10, 10};
};