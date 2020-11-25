#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(880, 250), "SFML works!");

    sf::Texture texture;
    sf::Sprite sprite;
    texture.loadFromFile("images/Keyboard.jpeg");
    sprite.setTexture(texture);

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
                    texture.loadFromFile("images/A.jpeg");
                    sprite.setTexture(texture);
                }
                else if (event.key.code == sf::Keyboard::B) {
                    if (keycode[1] == 0)
                        str.push_back('B');
                    texture.loadFromFile("images/B.jpeg");
                    sprite.setTexture(texture);
                    keycode[1] = 1;
                }
                else if (event.key.code == sf::Keyboard::C) {
                    if (keycode[2] == 0)
                        str.push_back('C');
                    texture.loadFromFile("images/C.jpeg");
                    sprite.setTexture(texture);
                    keycode[2] = 1;
                }
                else if (event.key.code == sf::Keyboard::D) {
                    if (keycode[3] == 0)
                        str.push_back('D');
                    texture.loadFromFile("images/D.jpeg");
                    sprite.setTexture(texture);
                    keycode[3] = 1;
                }
                else if (event.key.code == sf::Keyboard::E) {
                    if (keycode[4] == 0)
                        str.push_back('E');
                    texture.loadFromFile("images/E.jpeg");
                    sprite.setTexture(texture);
                    keycode[4] = 1;
                }
                else if (event.key.code == sf::Keyboard::F) {
                    if (keycode[5] == 0)
                        str.push_back('F');
                    texture.loadFromFile("images/F.jpeg");
                    sprite.setTexture(texture);
                    keycode[5] = 1;
                }
                else if (event.key.code == sf::Keyboard::G) {
                    if (keycode[6] == 0)
                        str.push_back('G');
                    texture.loadFromFile("images/G.jpeg");
                    sprite.setTexture(texture);
                    keycode[6] = 1;
                }
                else if (event.key.code == sf::Keyboard::H) {
                    if (keycode[7] == 0)
                        str.push_back('H');
                    texture.loadFromFile("images/H.jpeg");
                    sprite.setTexture(texture);
                    keycode[7] = 1;
                }
                else if (event.key.code == sf::Keyboard::I) {
                    if (keycode[8] == 0)
                        str.push_back('I');
                    texture.loadFromFile("images/I.jpeg");
                    sprite.setTexture(texture);
                    keycode[8] = 1;
                }
                else if (event.key.code == sf::Keyboard::J) {
                    if (keycode[9] == 0)
                        str.push_back('J');
                    texture.loadFromFile("images/J.jpeg");
                    sprite.setTexture(texture);
                    keycode[9] = 1;
                }
                else if (event.key.code == sf::Keyboard::K) {
                    if (keycode[10] == 0)
                        str.push_back('K');
                    texture.loadFromFile("images/K.jpeg");
                    sprite.setTexture(texture);
                    keycode[10] = 1;
                }
                else if (event.key.code == sf::Keyboard::L) {
                    if (keycode[11] == 0)
                        str.push_back('L');
                    texture.loadFromFile("images/L.jpeg");
                    sprite.setTexture(texture);
                    keycode[11] = 1;
                }
                else if (event.key.code == sf::Keyboard::M) {
                    if (keycode[12] == 0)
                        str.push_back('M');
                    texture.loadFromFile("images/M.jpeg");
                    sprite.setTexture(texture);
                    keycode[12] = 1;
                }
                else if (event.key.code == sf::Keyboard::N) {
                    if (keycode[13] == 0)
                        str.push_back('N');
                    texture.loadFromFile("images/N.jpeg");
                    sprite.setTexture(texture);
                    keycode[13] = 1;
                }
                else if (event.key.code == sf::Keyboard::O) {
                    if (keycode[14] == 0)
                        str.push_back('O');
                    texture.loadFromFile("images/O.jpeg");
                    sprite.setTexture(texture);
                    keycode[14] = 1;
                }
                else if (event.key.code == sf::Keyboard::P) {
                    if (keycode[15] == 0)
                        str.push_back('P');
                    texture.loadFromFile("images/P.jpeg");
                    sprite.setTexture(texture);
                    keycode[15] = 1;
                }
                else if (event.key.code == sf::Keyboard::Q) {
                    if (keycode[16] == 0)
                        str.push_back('Q');
                    texture.loadFromFile("images/Q.jpeg");
                    sprite.setTexture(texture);
                    keycode[16] = 1;
                }
                else if (event.key.code == sf::Keyboard::R) {
                    if (keycode[17] == 0)
                        str.push_back('R');
                    texture.loadFromFile("images/R.jpeg");
                    sprite.setTexture(texture);
                    keycode[17] = 1;
                }
                else if (event.key.code == sf::Keyboard::S) {
                    if (keycode[18] == 0)
                        str.push_back('S');
                    texture.loadFromFile("images/S.jpeg");
                    sprite.setTexture(texture);
                    keycode[18] = 1;
                }
                else if (event.key.code == sf::Keyboard::T) {
                    if (keycode[19] == 0)
                        str.push_back('T');
                    texture.loadFromFile("images/T.jpeg");
                    sprite.setTexture(texture);
                    keycode[19] = 1;
                }
                else if (event.key.code == sf::Keyboard::U) {
                    if (keycode[20] == 0)
                        str.push_back('U');
                    texture.loadFromFile("images/U.jpeg");
                    sprite.setTexture(texture);
                    keycode[20] = 1;
                }
                else if (event.key.code == sf::Keyboard::V) {
                    if (keycode[21] == 0)
                        str.push_back('V');
                    texture.loadFromFile("images/V.jpeg");
                    sprite.setTexture(texture);
                    keycode[21] = 1;
                }
                else if (event.key.code == sf::Keyboard::W) {
                    if (keycode[22] == 0)
                        str.push_back('W');
                    texture.loadFromFile("images/W.jpeg");
                    sprite.setTexture(texture);
                    keycode[22] = 1;
                }
                else if (event.key.code == sf::Keyboard::X) {
                    if (keycode[23] == 0)
                        str.push_back('X');
                    texture.loadFromFile("images/X.jpeg");
                    sprite.setTexture(texture);
                    keycode[23] = 1;
                }
                else if (event.key.code == sf::Keyboard::Y) {
                    if (keycode[24] == 0)
                        str.push_back('Y');
                    texture.loadFromFile("images/Y.jpeg");
                    sprite.setTexture(texture);
                    keycode[24] = 1;
                }
                else if (event.key.code == sf::Keyboard::Z) {
                    if (keycode[25] == 0)
                        str.push_back('Z');
                    texture.loadFromFile("images/Z.jpeg");
                    sprite.setTexture(texture);
                    keycode[25] = 1;
                }
                else if (event.key.code == sf::Keyboard::Space) {
                    if (keycode[26] == 0)
                        str.push_back(' ');
                    texture.loadFromFile("images/SPACE.jpeg");
                    sprite.setTexture(texture);
                    keycode[26] = 1;
                } else if (event.key.code == sf::Keyboard::BackSpace) {
                    if (!str.empty())
                        str.pop_back();
                    texture.loadFromFile("images/BACKSPACE.jpeg");
                    sprite.setTexture(texture);
                } else if (event.key.code == sf::Keyboard::Enter) {
                    texture.loadFromFile("images/ENTER.jpeg");
                    sprite.setTexture(texture);
                } else if (event.key.code == sf::Keyboard::Period) {
                    if (keycode[30] == 0)
                        str.push_back('.');
                    texture.loadFromFile("images/PERIOD.jpeg");
                    sprite.setTexture(texture);
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
                } else if (event.key.code == sf::Keyboard::Period) {
                    keycode[30] = 0;
                }
                texture.loadFromFile("images/Keyboard.jpeg");
                sprite.setTexture(texture);
            }
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}
