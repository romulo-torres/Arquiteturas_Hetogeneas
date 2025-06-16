// Modulo_01_Aula_03_01


#include <iostream>
#include <fstream>



using namespace std;

int main () {

// Create images

ofstream image_Input;
image_Input.open("./Imagens/Imagem.ppm");

// Image Header
// The part above is the header
// P3 # "P3" means this is a RGB color image in ASCII
// 3 2 # "3 2" is the width and height of the image in pixels
// 255 # "255" is the maximum value for each color
if (image_Input.is_open()) {


// Header !!
image_Input << "P3" << endl;
image_Input << "70 50" << endl;
image_Input << "255" << endl;

// Image Body - Size 3 x 2 -- RGB triplets

// image_Input << "255 0 0 "; // Red
// image_Input << "0 255 0 "; //Green
// image_Input << "0 0 255" << endl; //Blue
// image_Input << "255 255 0 "; //yellow
// image_Input << "255 255 255 " ; //white
// image_Input << "0 0 0" << endl; //black

// image_Input << "255 0 0 0 255 0 0 0 255" << endl;
// image_Input << "255 255 0 255 255 255 0 0 0" << endl;

// 50% RED e 50% Blue

for(int i=0;i<70;i++){
    for(int j=0;j<50;j++){
        if(i<35){
            image_Input << "255 0 0 ";
        }
        else{
            image_Input << "0 0 255 ";
        }
        image_Input << endl;
    }
}
// for(int ImhV = 0; ImhV < 50; ImhV++) {
// image_Input << "255 0 0 "; // Red
// }

// Close the file

image_Input.close();
}


return 0;
}