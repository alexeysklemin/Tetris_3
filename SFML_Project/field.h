#pragma once
#include <SFML/Graphics.hpp>
#include <time.h>
	using namespace sf;

class gameField {


	//const int M = 20;
	//const int N = 10;
	//
	//int field[M][N] = { 0 };
	public:
		void Resize(int width, int heght);
	private:
		int m_width;
		int m_heght;
	
};

