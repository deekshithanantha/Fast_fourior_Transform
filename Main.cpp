#include <iostream>
#include <complex>
#include <cmath>

using namespace std;
typedef float inputs,stageA;

int Dit_fft_4pt();


int main(){
 int choice;
    cout<<"enter the interger value"<<endl;
    cin>>n;
    cout<<"Make your choice"    <<endl;
    cout<<"4-pt DIT-FFT       "<<1<<endl;
    cout<<"4-pt IDIT-FFT       "<<2<<endl;
    cout<<"upper_triangle_mirror"<<3<<endl;
    cout<<"lower_triangle_mirror "<<4<<endl;
    cout<<"pyramid               "<<5<<endl;
    cout<<"pyramid_inverse       "<<6<<endl;
    cout<<"For all               "<<7<<endl;
    cin>>choice;
    switch(choice){
    case 1: Dit_fft_4pt();break;
    case 2: lower_triangle();break;
    case 3: upper_triangle_mirror();break;
    case 4: lower_triangle_mirror();break;
    case 5: pyramid();break;
    case 6: pyramid_inverse();break;
    case 7:


     upper_triangle();
     lower_triangle();
     upper_triangle_mirror();
     lower_triangle_mirror();
     pyramid();
     pyramid_inverse();
    break;


    }

Dit_fft_4pt();
}


int Dit_fft_4pt()
{
    cout<<"Enter the inputs"<<endl;
    cout<<"please use the following format"<<endl;
    cout<<"A+iB is to be written as"<<endl;
    cout<<"A B  -->followed by enter"<<endl;

    stageA i1r,i2r,i3r,i0r,i1i,i2i,i3i,i0i;
    cin>>i0r>>i0i>>i1r>>i1i>>i2r>>i2i>>i3r>>i3i;
    std::complex<double> i0(i0r,i0i);
    std::complex<double> i1(i1r,i1i);
    std::complex<double> i2(i2r,i2i);
    std::complex<double> i3(i3r,i3i);
    std::complex<double> sa0(0,0);
    std::complex<double> sa1(0,0);
    std::complex<double> sa2(0,0);
    std::complex<double> sa3(0,0);

    std::complex<double> sb0(0,0);
    std::complex<double> sb1(0,0);
    std::complex<double> sb2(0,0);
    std::complex<double> sb3(0,0);
    std::complex<double> w14(0,-1);
    cout<<"The input is :"<<endl;

    cout<<i0<<endl<<i1<<endl<<i2<<endl<<i3<<endl;
    sa0=i0+i2;
    sa1=i0-i2;
    sa2=i1+i3;
    sa3=i1-i3;

    cout<<"stage 1 output is:"<<endl;
    cout<<sa0<<endl<<sa1<<endl<<sa2<<endl<<sa3<<endl;

    sa3=sa3*w14;
    cout<<sa3;
    cout<<"stage 2 output is:"<<endl;
    //stage 2 cal starts here;
    sb0=sa0+sa2;
    sb1=sa1+sa3;
    sb2=sa0-sa2;
    sb3=sa1-sa3;
    cout<<sb0<<endl<<sb1<<endl<<sb2<<endl<<sb3<<endl;
    return 0;
}
