#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

class Bat{
	private:
		Vector2f m_Position; //Stores horizontal and vertical dimensions of bat
		RectangleShape m_Shape; // A rectangle object
		float m_Speed = 1000.0f; //Speed of Bat 1000pxl/sec
		
		bool m_MovingRight = false;
		bool m_MovingLeft = false;
		
	public:
		Bat(float startX, float startY);
		FloatRect getPosition();
		RectangleShape getShape();
		
		void moveLeft();
		void moveRight();
		void stopRight();
		void stopLeft();
		void update(Time dt); // calculates how much bat moved in between frames
		
};
