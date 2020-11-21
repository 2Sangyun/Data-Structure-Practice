#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    bool keycode[30] = {
        0,
    };
    list<char> str;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::A) {
                    if (keycode[0] == 0)
                        str.push_back('A');
                    keycode[0] = 1;
                    cout << "A" << endl;
                } else if (event.key.code == sf::Keyboard::B) {
                    if (keycode[1] == 0)
                        str.push_back('B');
                    keycode[1] = 1;
                } else if (event.key.code == sf::Keyboard::C) {
                    if (keycode[2] == 0)
                        str.push_back('C');
                    keycode[2] = 1;
                } else if (event.key.code == sf::Keyboard::D) {
                    if (keycode[3] == 0)
                        str.push_back('D');
                    keycode[3] = 1;
                } else if (event.key.code == sf::Keyboard::E) {
                    if (keycode[4] == 0)
                        str.push_back('E');
                    keycode[4] = 1;
                } else if (event.key.code == sf::Keyboard::F) {
                    if (keycode[5] == 0)
                        str.push_back('F');
                    keycode[5] = 1;
                } else if (event.key.code == sf::Keyboard::G) {
                    if (keycode[6] == 0)
                        str.push_back('G');
                    keycode[6] = 1;
                } else if (event.key.code == sf::Keyboard::H) {
                    if (keycode[7] == 0)
                        str.push_back('H');
                    keycode[7] = 1;
                } else if (event.key.code == sf::Keyboard::I) {
                    if (keycode[8] == 0)
                        str.push_back('I');
                    keycode[8] = 1;
                } else if (event.key.code == sf::Keyboard::J) {
                    if (keycode[9] == 0)
                        str.push_back('J');
                    keycode[9] = 1;
                } else if (event.key.code == sf::Keyboard::K) {
                    if (keycode[10] == 0)
                        str.push_back('K');
                    keycode[10] = 1;
                } else if (event.key.code == sf::Keyboard::L) {
                    if (keycode[11] == 0)
                        str.push_back('L');
                    keycode[11] = 1;
                } else if (event.key.code == sf::Keyboard::M) {
                    if (keycode[12] == 0)
                        str.push_back('M');
                    keycode[12] = 1;
                } else if (event.key.code == sf::Keyboard::N) {
                    if (keycode[13] == 0)
                        str.push_back('N');
                    keycode[13] = 1;
                } else if (event.key.code == sf::Keyboard::O) {
                    if (keycode[14] == 0)
                        str.push_back('O');
                    keycode[14] = 1;
                } else if (event.key.code == sf::Keyboard::P) {
                    if (keycode[15] == 0)
                        str.push_back('P');
                    keycode[15] = 1;
                } else if (event.key.code == sf::Keyboard::Q) {
                    if (keycode[16] == 0)
                        str.push_back('Q');
                    keycode[16] = 1;
                } else if (event.key.code == sf::Keyboard::R) {
                    if (keycode[17] == 0)
                        str.push_back('R');
                    keycode[17] = 1;
                } else if (event.key.code == sf::Keyboard::S) {
                    if (keycode[18] == 0)
                        str.push_back('S');
                    keycode[18] = 1;
                } else if (event.key.code == sf::Keyboard::T) {
                    if (keycode[19] == 0)
                        str.push_back('T');
                    keycode[19] = 1;
                } else if (event.key.code == sf::Keyboard::U) {
                    if (keycode[20] == 0)
                        str.push_back('U');
                    keycode[20] = 1;
                } else if (event.key.code == sf::Keyboard::V) {
                    if (keycode[21] == 0)
                        str.push_back('V');
                    keycode[21] = 1;
                } else if (event.key.code == sf::Keyboard::W) {
                    if (keycode[22] == 0)
                        str.push_back('W');
                    keycode[22] = 1;
                } else if (event.key.code == sf::Keyboard::X) {
                    if (keycode[23] == 0)
                        str.push_back('X');
                    keycode[23] = 1;
                } else if (event.key.code == sf::Keyboard::Y) {
                    if (keycode[24] == 0)
                        str.push_back('Y');
                    keycode[24] = 1;
                } else if (event.key.code == sf::Keyboard::Z) {
                    if (keycode[25] == 0)
                        str.push_back('Z');
                    keycode[25] = 1;
                } else if (event.key.code == sf::Keyboard::Space) {
                    if (keycode[26] == 0)
                        str.push_back(' ');
                    keycode[26] = 1;
                } else if (event.key.code == sf::Keyboard::BackSpace) {
                    if (!str.empty())
                        str.pop_back();
                } else if (event.key.code == sf::Keyboard::Enter) {
                } else if (event.key.code == sf::Keyboard::Comma) {
                    if (keycode[30] == 0)
                        str.push_back('.');
                    keycode[30] = 1;
                }
            } else if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::A) {
                    keycode[0] = 0;
                } else if (event.key.code == sf::Keyboard::B) {
                    keycode[1] = 0;
                } else if (event.key.code == sf::Keyboard::C) {
                    keycode[2] = 0;
                } else if (event.key.code == sf::Keyboard::D) {
                    keycode[3] = 0;
                } else if (event.key.code == sf::Keyboard::E) {
                    keycode[4] = 0;
                } else if (event.key.code == sf::Keyboard::F) {
                    keycode[5] = 0;
                } else if (event.key.code == sf::Keyboard::G) {
                    keycode[6] = 0;
                } else if (event.key.code == sf::Keyboard::H) {
                    keycode[7] = 0;
                } else if (event.key.code == sf::Keyboard::I) {
                    keycode[8] = 0;
                } else if (event.key.code == sf::Keyboard::J) {
                    keycode[9] = 0;
                } else if (event.key.code == sf::Keyboard::K) {
                    keycode[10] = 0;
                } else if (event.key.code == sf::Keyboard::L) {
                    keycode[11] = 0;
                } else if (event.key.code == sf::Keyboard::M) {
                    keycode[12] = 0;
                } else if (event.key.code == sf::Keyboard::N) {
                    keycode[13] = 0;
                } else if (event.key.code == sf::Keyboard::O) {
                    keycode[14] = 0;
                } else if (event.key.code == sf::Keyboard::P) {
                    keycode[15] = 0;
                } else if (event.key.code == sf::Keyboard::Q) {
                    keycode[16] = 0;
                } else if (event.key.code == sf::Keyboard::R) {
                    keycode[17] = 0;
                } else if (event.key.code == sf::Keyboard::S) {
                    keycode[18] = 0;
                } else if (event.key.code == sf::Keyboard::T) {
                    keycode[19] = 0;
                } else if (event.key.code == sf::Keyboard::U) {
                    keycode[20] = 0;
                } else if (event.key.code == sf::Keyboard::V) {
                    keycode[21] = 0;
                } else if (event.key.code == sf::Keyboard::W) {
                    keycode[22] = 0;
                } else if (event.key.code == sf::Keyboard::X) {
                    keycode[23] = 0;
                } else if (event.key.code == sf::Keyboard::Y) {
                    keycode[24] = 0;
                } else if (event.key.code == sf::Keyboard::Z) {
                    keycode[25] = 0;
                } else if (event.key.code == sf::Keyboard::Space) {
                    keycode[26] = 0;
                } else if (event.key.code == sf::Keyboard::BackSpace) {
                } else if (event.key.code == sf::Keyboard::Enter) {
                } else if (event.key.code == sf::Keyboard::Comma) {
                    keycode[30] = 0;
                }
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
