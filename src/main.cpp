#include <iostream>
#include <thread>

#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

int main() {
  using namespace ftxui;

  // Create a screen with full width and height fitting the document.
  auto screen = Screen::Create(
    Dimension::Full(),       // Width
    Dimension::Full()        // Height
  );

  const int dx = screen.dimx();
  const int dy = screen.dimy();
  int x = 0;
  int y = 0;
  int cpt = 0;

  while (true)
  {
    screen.Clear();
    x = ++x % dx;
    if (x == 0 && cpt != 0)
    {
      y = y + 1;
    }
    auto& pixel = screen.PixelAt(x, y);
    pixel.character = U'X';
    screen.Print();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    auto s = screen.ResetPosition();
    std::cout << s << std::flush;
    ++cpt;
  }
}
