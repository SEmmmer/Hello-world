#include <iostream>



class blind {
public:
    void iSeeTheC(char color) {
        if (color == 'G') {
            eye = 'B';
            brain = 'G';
            mouse = brain;
        }
        if (color == 'B'){
            eye = 'G';
            brain = 'B';
            mouse = brain;
        }
    };

    void iSayTheC(){
        std::cout << "I see the " << mouse;
    }

private:
    char eye;
    char brain;
    char mouse;
};

int main() {
    const char GREEN = 'G';
    const char BLUE = 'B';

    blind jack;
    jack.iSeeTheC(GREEN);
    jack.iSayTheC();

}