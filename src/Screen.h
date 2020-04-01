#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace EighteenTwelve {

class Screen {
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    Uint32 *pixelBuffer1;
    Uint32 *pixelBuffer2;

public:
    Screen();
    ~Screen();
    bool init();
    void update();
    void clear();
    bool processEvents();
    void close();

    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    void boxBlur();
    
};

} // namespace EighteenTwelve

#endif // SCREEN_H_