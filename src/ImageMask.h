#ifndef MASK_H
#define MASK_H

#include<vector>
using namespace std;

class ImageMask
{

public:
	ImageMask();
	~ImageMask();
	void reset();

        vector<int>& operator[](int prm1);
        int getCo();
        int getDim();

        void genBlur(int window);
	void genSharp();
        void genDeBlur();
private:
        vector< vector<int> > matrix;
	char type;
	int de_coeff;
        int dimention;

};

#endif // MASK_H
