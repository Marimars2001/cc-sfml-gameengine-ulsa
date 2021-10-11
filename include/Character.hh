#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Character
{
private:
  sf::Sprite* sprite{};
  sf::Vector2f position{};
  float scale{};
  float width{};
  float height{};
  float moveSpeed;
  sf::Texture* texture;
  //std::string textureUrl;
  sf::RenderWindow* window{};
public:
  Character();
  Character(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, float moveSpeed, 
  sf::RenderWindow*& window);
  ~Character();

  void Draw();
  void Movement(float& deltaTime);
  void FlipSprite();
};
