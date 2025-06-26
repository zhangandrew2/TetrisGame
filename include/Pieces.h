#ifndef _Pieces_
#define _Pieces_

class Pieces
{
public:
    int getBlockType(int pPiece, int pRotation, int pX, int pY);
    int getXInitialPosition(int pPiece, int pRotation);
    int getYInitialPosition(int pPiece, int pRotation);
};

#endif // _Pieces_