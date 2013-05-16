#ifndef RENDER_SDL_H_
#define RENDER_SDL_H_

#include "vdp.h"
void render_init(int width, int height);
void render_context(vdp_context * context);
void render_wait_quit(vdp_context * context);
int wait_render_frame(vdp_context * context, int frame_limit);

#endif //RENDER_SDL_H_

