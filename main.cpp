#include <iostream>

using namespace std;

void hm_1() {
    int num;
    cout << "Enter a six-digit number: "; cin >> num;
    if (to_string(num).size() != 6) {
        cout << "You did not enter a six-digit number" << endl;
    }
    else{
        int a = 0, b = 0, number = num;
        for (int i = 0; i < 3; i++) {
            a += number % 10;   number /= 10;
        }  number = num / 1000;
        for (int i = 0; i < 3; i++)  {
            b += number % 10;   number /= 10;
        }
        cout << a << " " << b << endl;
        if (a == b) {
            cout << "Number - lucky" << endl;
        }
        else {
            cout << "Number isn't lucky" << endl;
        }
    }
}
void hm_2() {
    int num; cout << "Enter a four-digit number: ";
    cin >> num;
    if (to_string(num).size() != 4) {
        cout << "You did not enter a four-digit number" << endl;
    }
    string line = to_string(num); char symbol = line[0];
    line[0] = line[1]; line[1] = symbol;
    symbol = line[2]; line[2] = line[3];
    line[3] = symbol; num = stoi(line);
    cout << num << endl;
}

int cheak(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int plane_cheack(int a, int b, int index) { return 300 + (-a - b) * index;
}
void hm_4() {
    int bak = 300, m = 0, AB = 0, BC = 0;
    cout << "Please, enter m for plane: "; cin >> m;
    cout << "Enter len from A to B: "; cin >> AB;
    cout << "Enter len from B to C: "; cin >> BC;
    if (m <= 500) {
        if (AB * 1 > 300) {
            cout << "The plane will not arrive" << endl;
        }
        else {
            if (BC * 1 > 300) {
                cout << "The plane will not arrive" << endl;
            }
            else {
                int fuel = plane_cheack(AB, BC, 1);
                if (fuel < 0) {
                    cout << "At point B, you need to refuel the plane at " << fuel << endl;
                }
                else {
                    cout << "The plane will arrive without refuel" << endl;
                }
            }
        }
    }
    else if (m > 500 && m <= 1000) {
        if (AB * 4 > 300) {
            cout << "The plane will not arrive" << endl;
        }
        else {
            if (BC * 4 > 300) {
                cout << "The plane will not arrive" << endl;
            }
            else {
                int fuel = plane_cheack(AB, BC, 4);
                if (fuel < 0) {
                    cout << "At point B, you need to refuel the plane at " << fuel << endl;
                }
                else {
                    cout << "The plane will arrive without refuel" << endl;
                }
            }
        }
    }
    else if (m > 1000 && m <= 1500) {
        if (AB * 7 > 300) {
            cout << "The plane will not arrive" << endl;
        }
        else {
            if (BC * 7 > 300) {
                cout << "The plane will not arrive" << endl;
            }
            else {
                int fuel = plane_cheack(AB, BC, 7);
                if (fuel < 0) {
                    cout << "At point B, you need to refuel the plane at " << fuel << endl;
                }
                else {
                    cout << "The plane will arrive without refuel" << endl;
                }
            }
        }
    }
    else {
        if (AB * 9 > 300)
        {
            cout << "The plane will not arrive" << endl;
        }
        else {
            if (BC * 9 > 300) {
                cout << "The plane will not arrive" << endl;
            }
            else {
                int fuel = plane_cheack(AB, BC, 9);
                if (fuel < 0) {
                    cout << "At point B, you need to refuel the plane at " << fuel << endl;
                }
                else {
                    cout << "The plane will arrive without refuel" << endl;
                }
            }
        }
    }
}

void hm_3() {
    int a, b, c, d, e, f, g, max;
    cin >> a >> b; max = cheak(a, b);
    cin >> c >> d; max = cheak(cheak(c, d), max);
    cin >> e >> f; max = cheak(cheak(e, f), max);
    cin >> g; max = cheak(g, max);
    cout << max << endl;
}


int main() {
    hm_1();
    system("pause");
    hm_2();
    system("pause");
    hm_3();
    system("pause");
    hm_4();
    system("pause");

    return 0;
}