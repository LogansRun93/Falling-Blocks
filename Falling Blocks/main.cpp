#include <SFML\Window.hpp>


int main()
{
	// Create the game window
	sf::Window gameWindow(sf::VideoMode(800, 600), "My window");

	// Run the program while the window is open
	while (gameWindow.isOpen())
	{
		// Check window events
		sf::Event windowEvent;
		while (gameWindow.pollEvent(windowEvent))
		{
			// Window was requested to be closed. Close it
			if (windowEvent.type == sf::Event::Closed)
			{
				gameWindow.close();
			}
		}
	}

	return 0;
}