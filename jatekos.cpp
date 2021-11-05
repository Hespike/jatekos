#include <string>

using namespace std;

struct Jatekos {
    string nev;
    unsigned szint;
};

void operator>>=(Jatekos& jatekos, unsigned szint) {
    if (jatekos.szint < szint){
        jatekos.szint = szint;
    } else {

    }
}

/*
 #include <string>

using namespace std;

struct Jatekos {
    string nev;
    unsigned szint;
};

void operator>>=(Jatekos& jatekos, unsigned szint) {
    if (szint > jatekos.szint) {
        jatekos.szint = szint;
    }
}
 */
