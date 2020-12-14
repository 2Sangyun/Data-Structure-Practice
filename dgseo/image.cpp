#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>

using namespace std;

void keyboard_image(string keyboard, sf::Texture texture, sf::Sprite sprite);

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
                    texture.loadFromFile("images/A.jpeg");
                }
                else if (event.key.code == sf::Keyboard::B) {
                    texture.loadFromFile("images/B.jpeg");
                }
                else if (event.key.code == sf::Keyboard::C) {
                    texture.loadFromFile("images/C.jpeg");
                }
                else if (event.key.code == sf::Keyboard::D) {
                    texture.loadFromFile("images/D.jpeg");
                }
                else if (event.key.code == sf::Keyboard::E) {
                    texture.loadFromFile("images/E.jpeg");
                }
                else if (event.key.code == sf::Keyboard::F) {
                    texture.loadFromFile("images/F.jpeg");
                }
                else if (event.key.code == sf::Keyboard::G) {
                    texture.loadFromFile("images/G.jpeg");
                }
                else if (event.key.code == sf::Keyboard::H) {
                    texture.loadFromFile("images/H.jpeg");
                }
                else if (event.key.code == sf::Keyboard::I) {
                    texture.loadFromFile("images/I.jpeg");
                }
                else if (event.key.code == sf::Keyboard::J) {
                    texture.loadFromFile("images/J.jpeg");
                }
                else if (event.key.code == sf::Keyboard::K) {
                    texture.loadFromFile("images/K.jpeg");
                }
                else if (event.key.code == sf::Keyboard::L) {
                    texture.loadFromFile("images/L.jpeg");
                }
                else if (event.key.code == sf::Keyboard::M) {
                    texture.loadFromFile("images/M.jpeg");
                }
                else if (event.key.code == sf::Keyboard::N) {
                    texture.loadFromFile("images/N.jpeg");
                }
                else if (event.key.code == sf::Keyboard::O) {
                    texture.loadFromFile("images/O.jpeg");
                }
                else if (event.key.code == sf::Keyboard::P) {
                    texture.loadFromFile("images/P.jpeg");
                }
                else if (event.key.code == sf::Keyboard::Q) {
                    texture.loadFromFile("images/Q.jpeg");
                }
                else if (event.key.code == sf::Keyboard::R) {
                    texture.loadFromFile("images/R.jpeg");
                }
                else if (event.key.code == sf::Keyboard::S) {
                    texture.loadFromFile("images/S.jpeg");
                }
                else if (event.key.code == sf::Keyboard::T) {
                    texture.loadFromFile("images/T.jpeg");
                }
                else if (event.key.code == sf::Keyboard::U) {
                    texture.loadFromFile("images/U.jpeg");
                }
                else if (event.key.code == sf::Keyboard::V) {
                    texture.loadFromFile("images/V.jpeg");
                }
                else if (event.key.code == sf::Keyboard::W) {
                    texture.loadFromFile("images/W.jpeg");
                }
                else if (event.key.code == sf::Keyboard::X) {
                    texture.loadFromFile("images/X.jpeg");
                }
                else if (event.key.code == sf::Keyboard::Y) {
                    texture.loadFromFile("images/Y.jpeg");
                }
                else if (event.key.code == sf::Keyboard::Z) {
                    texture.loadFromFile("images/Z.jpeg");
                }
                else if (event.key.code == sf::Keyboard::Space) {
                    texture.loadFromFile("images/SPACE.jpeg");
                }
                else if (event.key.code == sf::Keyboard::BackSpace) {
                    texture.loadFromFile("images/BACKSPACE.jpeg");
                }
                else if (event.key.code == sf::Keyboard::Period) {
                    texture.loadFromFile("images/PERIOD.jpeg");
                }
            }
            else if (event.type == sf::Event::KeyReleased) {
                texture.loadFromFile("images/Keyboard.jpeg");
            }
            sprite.setTexture(texture);
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}
