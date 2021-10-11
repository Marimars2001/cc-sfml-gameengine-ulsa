#include "Character.hh"

Character::Character(std::string textureUrl, sf::Vector2f position, float scale, float width, float height, int col, int row, sf::RenderWindow*& window)
{
    this->position = position;
    this->scale = scale;
    this->width = width;
    this->height = height;
    texture = new sf::Texture();
    texture->loadFromFile(textureUrl);
    sprite = new sf::Sprite(*texture, sf::IntRect(col* width, row* height, width, height));
    sprite->setPosition(position);
}

Character::~Character()
{
}

void Character::Update()
{
  window->draw(*sprite);
}