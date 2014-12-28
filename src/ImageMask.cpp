#include "imagemask.h"

ImageMask::ImageMask() {
    type='n';
    de_coeff=1;
    dimention=0;
}

void ImageMask::reset() {
    int siz=int(matrix.size());

    for(int i=0;i<siz;i++)
        matrix[i].clear();

    matrix.clear();
    type='n';
    de_coeff=1;
    dimention=0;

    return;
}

vector<int>& ImageMask::operator [](int index) {
    return matrix[index];
}

int ImageMask::getCo() {
    return de_coeff;
}

int ImageMask::getDim() {
    return dimention;
}

ImageMask::~ImageMask() {
    int siz=int(matrix.size());

    for(int i=0;i<siz;i++)
        matrix[i].clear();

    matrix.clear();
}




void ImageMask::genBlur(int window){
    reset();
    type='b';

    int weight=1;
    if(window>2)  // will not take a window more than 50 neibouring pixel on each side
    {           // if the user demanded more bluring intensity higher weight for the surrounding pixels will compensate.
        weight=((window-2)*150);
        window=2;
    }

    dimention=(window*2)+1;

    vector<int> temp(dimention);

    for(int i=0;i<dimention;i++)
        temp[i]=weight;

    for(int i=0;i<dimention;i++)
        matrix.push_back(temp);

    matrix[window+1][window+1]=1;

    de_coeff=(weight*dimention*dimention)-weight+1;


    // we will keep this mask that simple untill we run some testing.
    // noting that the dialog box will not the same as that of the photoshop
    // we will have different slider with different maximum value, we will not reach 1000.
}


void ImageMask::genSharp(){
    if(type=='s')
        return;
    if(type=='b')
        reset();

    type='s';

    vector<int> temp1;
    vector<int> temp2;

    temp1.push_back(1);
    temp1.push_back(2);
    temp1.push_back(1);

    temp2.push_back(2);
    temp2.push_back(4);
    temp2.push_back(2);

    matrix.push_back(temp1);
    matrix.push_back(temp2);
    matrix.push_back(temp1);

    de_coeff=16;
    dimention=3;

    // need testing.
}


void ImageMask::genDeBlur(){
    genSharp();
    // for now.
}
