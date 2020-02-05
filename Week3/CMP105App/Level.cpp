#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	sf::Vector2u pos = window->getSize();
	rect1.setSize(sf::Vector2f(50, 50));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	// initialise game objects
	
}

Level::~Level()
{
	
}

// handle user input
void Level::handleInput(float dt)
{
	
}

// Update game objects
void Level::update(float dt)
{
	rect1.move(speedx * dt, 0);

	if (rect1.getPosition().x > window->getSize().x - 50)
	{
		speedx = -40.f;
	}
	if (rect1.getPosition().x < 0)
	{
		speedx = 40.f;
	}
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect1);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
