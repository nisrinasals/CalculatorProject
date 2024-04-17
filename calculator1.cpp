#include <iostream>
using namespace std;

int jOperasi, bil1, bil2, bil3, bil4, bil5, bil6, hOp1, hOp2, hOp3, hOp4, hOp5;
char op1, op2, op3, op4, op5;


void input(){
    cout << "\n==========\n";
    cout << "CALCULATOR\n";
    cout << "==========\n";


    while (true)
	{
    cout << "Berapa operasi yang ingin Anda gunakan?\n";
    cin >> jOperasi;
        if (jOperasi > 0 && jOperasi <=5){
            break;
        }
        else {
            cout << "Maksimum operasi yang dapat digunakan adalah 5\n";
        }
    }
}

void Calculator(){
    if (jOperasi == 1){
        cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1; 
        cout << "\n";

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op1;
        cout << "\n";

        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2; 
        cout << "\n"; 

        if (op1 == '+' ){
            hOp1 = bil1 + bil2;
        } else if ( op1 == '-'){
            hOp1 = bil1 - bil2;
        } else if ( op1 == 'x'){
            hOp1 = bil1 * bil2;
        } else if ( op1 == '/' ){
            hOp1 = bil1 / bil2;
        } else {
            cout << "Operasi tidak valid.";
        }
        
    } else if (jOperasi == 2){
        cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1; 
        cout << "\n";

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op1;
        cout << "\n";

        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op2;
        cout << "\n";

        cout << "Masukkan Bilangan Ketiga: ";
        cin >> bil3; 
        cout << "\n"; 

        if (op1 == '+' ){
            hOp1 = bil1 + bil2;
        } else if ( op1 == '-'){
            hOp1 = bil1 - bil2;
        } else if ( op1 == 'x'){
            hOp1 = bil1 * bil2;
        } else if ( op1 == '/' ){
            hOp1 = bil1 / bil2;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op2 == '+' ){
            hOp2 = hOp1 + bil3;
        } else if ( op2 == '-'){
            hOp2 = hOp1 - bil3;
        } else if ( op2 == 'x'){
            hOp2 = hOp1 * bil3;
        } else if ( op2 == '/' ){
            hOp2 = hOp1 / bil3;
        } else {
            cout << "Operasi tidak valid.";
        }

    } else if (jOperasi == 3){
        cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1; 
        cout << "\n";

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op1;
        cout << "\n";

        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op2;
        cout << "\n";

        cout << "Masukkan Bilangan Ketiga: ";
        cin >> bil3; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op3;
        cout << "\n";

        cout << "Masukkan Bilangan Keempat: ";
        cin >> bil4; 
        cout << "\n"; 


        if (op1 == '+' ){
            hOp1 = bil1 + bil2;
        } else if ( op1 == '-'){
            hOp1 = bil1 - bil2;
        } else if ( op1 == 'x'){
            hOp1 = bil1 * bil2;
        } else if ( op1 == '/' ){
            hOp1 = bil1 / bil2;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op2 == '+' ){
            hOp2 = hOp1 + bil3;
        } else if ( op2 == '-'){
            hOp2 = hOp1 - bil3;
        } else if ( op2 == 'x'){
            hOp2 = hOp1 * bil3;
        } else if ( op2 == '/' ){
            hOp2 = hOp1 / bil3;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op3 == '+' ){
            hOp3 = hOp2 + bil4;
        } else if ( op3 == '-'){
            hOp3 = hOp2 - bil4;
        } else if ( op3 == 'x'){
            hOp3 = hOp2 * bil4;
        } else if ( op3 == '/' ){
            hOp3 = hOp2 / bil4;
        } else {
            cout << "Operasi tidak valid.";
        }

    } else if (jOperasi == 4){
        cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1; 
        cout << "\n";

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op1;
        cout << "\n";

        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op2;
        cout << "\n";

        cout << "Masukkan Bilangan Ketiga: ";
        cin >> bil3; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op3;
        cout << "\n";

        cout << "Masukkan Bilangan Keempat: ";
        cin >> bil4; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op4;
        cout << "\n";

        cout << "Masukkan Bilangan Kelima: ";
        cin >> bil5; 
        cout << "\n"; 


        if (op1 == '+' ){
            hOp1 = bil1 + bil2;
        } else if ( op1 == '-'){
            hOp1 = bil1 - bil2;
        } else if ( op1 == 'x'){
            hOp1 = bil1 * bil2;
        } else if ( op1 == '/' ){
            hOp1 = bil1 / bil2;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op2 == '+' ){
            hOp2 = hOp1 + bil3;
        } else if ( op2 == '-'){
            hOp2 = hOp1 - bil3;
        } else if ( op2 == 'x'){
            hOp2 = hOp1 * bil3;
        } else if ( op2 == '/' ){
            hOp2 = hOp1 / bil3;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op3 == '+' ){
            hOp3 = hOp2 + bil4;
        } else if ( op3 == '-'){
            hOp3 = hOp2 - bil4;
        } else if ( op3 == 'x'){
            hOp3 = hOp2 * bil4;
        } else if ( op3 == '/' ){
            hOp3 = hOp2 / bil4;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op4 == '+' ){
            hOp4 = hOp3 + bil5;
        } else if ( op4 == '-'){
            hOp4 = hOp3 - bil5;
        } else if ( op4 == 'x'){
            hOp4 = hOp3 * bil5;
        } else if ( op4 == '/' ){
            hOp4 = hOp3 / bil5;
        } else {
            cout << "Operasi tidak valid.";
        }

    } else {
                cout << "Masukkan Bilangan Pertama: ";
        cin >> bil1; 
        cout << "\n";

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op1;
        cout << "\n";

        cout << "Masukkan Bilangan Kedua: ";
        cin >> bil2; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op2;
        cout << "\n";

        cout << "Masukkan Bilangan Ketiga: ";
        cin >> bil3; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op3;
        cout << "\n";

        cout << "Masukkan Bilangan Keempat: ";
        cin >> bil4; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op4;
        cout << "\n";

        cout << "Masukkan Bilangan Kelima: ";
        cin >> bil5; 
        cout << "\n"; 

        cout << "Masukkan Operator (+, -, x, /): ";
        cin >> op5;
        cout << "\n";

        cout << "Masukkan Bilangan Keenam: ";
        cin >> bil6; 
        cout << "\n"; 

        if (op1 == '+' ){
            hOp1 = bil1 + bil2;
        } else if ( op1 == '-'){
            hOp1 = bil1 - bil2;
        } else if ( op1 == 'x'){
            hOp1 = bil1 * bil2;
        } else if ( op1 == '/' ){
            hOp1 = bil1 / bil2;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op2 == '+' ){
            hOp2 = hOp1 + bil3;
        } else if ( op2 == '-'){
            hOp2 = hOp1 - bil3;
        } else if ( op2 == 'x'){
            hOp2 = hOp1 * bil3;
        } else if ( op2 == '/' ){
            hOp2 = hOp1 / bil3;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op3 == '+' ){
            hOp3 = hOp2 + bil4;
        } else if ( op3 == '-'){
            hOp3 = hOp2 - bil4;
        } else if ( op3 == 'x'){
            hOp3 = hOp2 * bil4;
        } else if ( op3 == '/' ){
            hOp3 = hOp2 / bil4;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op4 == '+' ){
            hOp4 = hOp3 + bil5;
        } else if ( op4 == '-'){
            hOp4 = hOp3 - bil5;
        } else if ( op4 == 'x'){
            hOp4 = hOp3 * bil5;
        } else if ( op4 == '/' ){
            hOp4 = hOp3 / bil5;
        } else {
            cout << "Operasi tidak valid.";
        }

        if (op5 == '+' ){
            hOp5 = hOp4 + bil6;
        } else if ( op5 == '-'){
            hOp5 = hOp4 - bil6;
        } else if ( op5 == 'x'){
            hOp5 = hOp4 * bil6;
        } else if ( op5 == '/' ){
            hOp5 = hOp4 / bil6;
        } else {
            cout << "Operasi tidak valid.";
        }

    }

}

void display(){
    cout << "\n\n=====\n";
    cout << "HASIL\n";
    cout << "=====\n\n";

    if (jOperasi == 1){
        cout << "Hasil operasi pertama adalah: " << hOp1 << "\n\n";
        cout << "Hasil akhir operasi adalah: " << hOp1 << "\n";
    } 
    else if (jOperasi == 2){
        cout << "Hasil operasi pertama adalah: " << hOp1 << "\n";
        cout << "Hasil operasi kedua adalah: " << hOp2 << "\n\n";
        cout << "Hasil akhir operasi adalah: " << hOp2 << "\n";

    }
    else if (jOperasi == 3){
        cout << "Hasil operasi pertama adalah: " << hOp1 << "\n";
        cout << "Hasil operasi kedua adalah: " << hOp2 << "\n";
        cout << "Hasil operasi ketiga adalah: " << hOp3 << "\n\n";
        cout << "Hasil akhir operasi adalah: " << hOp3 << "\n";
    }
    else if (jOperasi == 4){
        cout << "Hasil operasi pertama adalah: " << hOp1 << "\n";
        cout << "Hasil operasi kedua adalah: " << hOp2 << "\n";
        cout << "Hasil operasi ketiga adalah: " << hOp3 << "\n";
        cout << "Hasil operasi keempat adalah: " << hOp4 << "\n\n";
        cout << "Hasil akhir operasi adalah: " << hOp4 << "\n";
    }

    else{
        cout << "Hasil operasi pertama adalah: " << hOp1 << "\n";
        cout << "Hasil operasi kedua adalah: " << hOp2 << "\n";
        cout << "Hasil operasi ketiga adalah: " << hOp3 << "\n";
        cout << "Hasil operasi keempat adalah: " << hOp4 << "\n";
        cout << "Hasil operasi kelima adalah: " << hOp5 << "\n\n";
        cout << "Hasil akhir operasi adalah: " << hOp5 << "\n";
    }
}


int main()
{
	input();
	Calculator();
    display();

	system("pause");
	return 0;
}