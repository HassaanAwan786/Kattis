using namespace std;
int main() {
    int num = 1;

    while (true) {
        string line, stringRes;
        getline(cin, line);
        if (cin.eof()) { break; }
        long double shrinks = atof(line.c_str());

        long double triangels = pow(3, shrinks);
        long double length = 3 / pow(2, shrinks);
        long double res = floor(triangels * length * 3);
        int i = 0;
        while (res >= 10) {
            i++;
            res = res / 10;
        };
        if (shrinks == 1) {
            printf("Case %d: %d\n", num, 1);
        }
        else {
            printf("Case %d: %d\n", num, i + 1);
        }
        num++;
    }
    return 0;
}
