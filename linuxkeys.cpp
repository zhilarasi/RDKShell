/**
* If not stated otherwise in this file or this component's LICENSE
* file the following copyright and licenses apply:
*
* Copyright 2020 RDK Management
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**/

#include "linuxkeys.h"
#include <iostream>
uint32_t keyCodeFromWayland(uint32_t waylandKeyCode)
{
    int standardKeyCode = 0;

    switch (waylandKeyCode)
    {
    case WAYLAND_KEY_ENTER:
        standardKeyCode = RDKSHELL_KEY_ENTER;
        break;
    case WAYLAND_KEY_BACKSPACE:
        standardKeyCode = RDKSHELL_KEY_BACKSPACE;
        break;
    case WAYLAND_KEY_TAB:
        standardKeyCode = RDKSHELL_KEY_TAB;
        break;
    case WAYLAND_KEY_RIGHTSHIFT:
        standardKeyCode = RDKSHELL_KEY_SHIFT;
        break;
    case WAYLAND_KEY_LEFTSHIFT:
        standardKeyCode = RDKSHELL_KEY_SHIFT;
        break;
    case WAYLAND_KEY_RIGHTCTRL:
        standardKeyCode = RDKSHELL_KEY_CTRL;
        break;
    case WAYLAND_KEY_LEFTCTRL:
        standardKeyCode = RDKSHELL_KEY_CTRL;
        break;
    case WAYLAND_KEY_RIGHTALT:
        standardKeyCode = RDKSHELL_KEY_ALT;
    case WAYLAND_KEY_LEFTALT:
        standardKeyCode = RDKSHELL_KEY_ALT;
        break;
    case WAYLAND_KEY_PAUSE:
        standardKeyCode = RDKSHELL_KEY_PAUSE;
        break;
    case WAYLAND_KEY_CAPSLOCK:
        standardKeyCode = RDKSHELL_KEY_CAPSLOCK;
        break;
    case WAYLAND_KEY_ESC:
        standardKeyCode = RDKSHELL_KEY_ESCAPE;
        break;
    case WAYLAND_KEY_SPACE:
        standardKeyCode = RDKSHELL_KEY_SPACE;
        break;
    case WAYLAND_KEY_PAGEUP:
        standardKeyCode = RDKSHELL_KEY_PAGEUP;
        break;
    case WAYLAND_KEY_PAGEDOWN:
        standardKeyCode = RDKSHELL_KEY_PAGEDOWN;
        break;
    case WAYLAND_KEY_END:
        standardKeyCode = RDKSHELL_KEY_END;
        break;
    case WAYLAND_KEY_HOME:
        standardKeyCode = RDKSHELL_KEY_HOME;
        break;
    case WAYLAND_KEY_LEFT:
        standardKeyCode = RDKSHELL_KEY_LEFT;
        break;
    case WAYLAND_KEY_UP:
        standardKeyCode = RDKSHELL_KEY_UP;
        break;
    case WAYLAND_KEY_RIGHT:
        standardKeyCode = RDKSHELL_KEY_RIGHT;
        break;
    case WAYLAND_KEY_DOWN:
        standardKeyCode = RDKSHELL_KEY_DOWN;
        break;
    case WAYLAND_KEY_COMMA:
        standardKeyCode = RDKSHELL_KEY_COMMA;
        break;
    case WAYLAND_KEY_DOT:
        standardKeyCode = RDKSHELL_KEY_PERIOD;
        break;
    case WAYLAND_KEY_SLASH:
        standardKeyCode = RDKSHELL_KEY_FORWARDSLASH;
        break;
    case WAYLAND_KEY_0:
        standardKeyCode = RDKSHELL_KEY_ZERO;
        break;
    case WAYLAND_KEY_1:
        standardKeyCode = RDKSHELL_KEY_ONE;
        break;
    case WAYLAND_KEY_2:
        standardKeyCode = RDKSHELL_KEY_TWO;
        break;
    case WAYLAND_KEY_3:
        standardKeyCode = RDKSHELL_KEY_THREE;
        break;
    case WAYLAND_KEY_4:
        standardKeyCode = RDKSHELL_KEY_FOUR;
        break;
    case WAYLAND_KEY_5:
        standardKeyCode = RDKSHELL_KEY_FIVE;
        break;
    case WAYLAND_KEY_6:
        standardKeyCode = RDKSHELL_KEY_SIX;
        break;
    case WAYLAND_KEY_7:
        standardKeyCode = RDKSHELL_KEY_SEVEN;
        break;
    case WAYLAND_KEY_8:
        standardKeyCode = RDKSHELL_KEY_EIGHT;
        break;
    case WAYLAND_KEY_9:
        standardKeyCode = RDKSHELL_KEY_NINE;
        break;
    case WAYLAND_KEY_SEMICOLON:
        standardKeyCode = RDKSHELL_KEY_SEMICOLON;
        break;
    case WAYLAND_KEY_EQUAL:
        standardKeyCode = RDKSHELL_KEY_EQUALS;
        break;
    case WAYLAND_KEY_A:
        standardKeyCode = RDKSHELL_KEY_A;
        break;
    case WAYLAND_KEY_B:
        standardKeyCode = RDKSHELL_KEY_B;
        break;
    case WAYLAND_KEY_C:
        standardKeyCode = RDKSHELL_KEY_C;
        break;
    case WAYLAND_KEY_D:
        standardKeyCode = RDKSHELL_KEY_D;
        break;
    case WAYLAND_KEY_E:
        standardKeyCode = RDKSHELL_KEY_E;
        break;
    case WAYLAND_KEY_F:
        standardKeyCode = RDKSHELL_KEY_F;
        break;
    case WAYLAND_KEY_G:
        standardKeyCode = RDKSHELL_KEY_G;
        break;
    case WAYLAND_KEY_H:
        standardKeyCode = RDKSHELL_KEY_H;
        break;
    case WAYLAND_KEY_I:
        standardKeyCode = RDKSHELL_KEY_I;
        break;
    case WAYLAND_KEY_J:
        standardKeyCode = RDKSHELL_KEY_J;
        break;
    case WAYLAND_KEY_K:
        standardKeyCode = RDKSHELL_KEY_K;
        break;
    case WAYLAND_KEY_L:
        standardKeyCode = RDKSHELL_KEY_L;
        break;
    case WAYLAND_KEY_M:
        standardKeyCode = RDKSHELL_KEY_M;
        break;
    case WAYLAND_KEY_N:
        standardKeyCode = RDKSHELL_KEY_N;
        break;
    case WAYLAND_KEY_O:
        standardKeyCode = RDKSHELL_KEY_O;
        break;
    case WAYLAND_KEY_P:
        standardKeyCode = RDKSHELL_KEY_P;
        break;
    case WAYLAND_KEY_Q:
        standardKeyCode = RDKSHELL_KEY_Q;
        break;
    case WAYLAND_KEY_R:
        standardKeyCode = RDKSHELL_KEY_R;
        break;
    case WAYLAND_KEY_S:
        standardKeyCode = RDKSHELL_KEY_S;
        break;
    case WAYLAND_KEY_T:
        standardKeyCode = RDKSHELL_KEY_T;
        break;
    case WAYLAND_KEY_U:
        standardKeyCode = RDKSHELL_KEY_U;
        break;
    case WAYLAND_KEY_V:
        standardKeyCode = RDKSHELL_KEY_V;
        break;
    case WAYLAND_KEY_W:
        standardKeyCode = RDKSHELL_KEY_W;
        break;
    case WAYLAND_KEY_X:
        standardKeyCode = RDKSHELL_KEY_X;
        break;
    case WAYLAND_KEY_Y:
        standardKeyCode = RDKSHELL_KEY_Y;
        break;
    case WAYLAND_KEY_Z:
        standardKeyCode = RDKSHELL_KEY_Z;
        break;
    case WAYLAND_KEY_LEFTBRACE:
        standardKeyCode = RDKSHELL_KEY_OPENBRACKET;
        break;
    case WAYLAND_KEY_BACKSLASH:
        standardKeyCode = RDKSHELL_KEY_BACKSLASH;
        break;
    case WAYLAND_KEY_RIGHTBRACE:
        standardKeyCode = RDKSHELL_KEY_CLOSEBRACKET;
        break;
    case WAYLAND_KEY_KP0:
        standardKeyCode = RDKSHELL_KEY_NUMPAD0;
        break;
    case WAYLAND_KEY_KP1:
        standardKeyCode = RDKSHELL_KEY_NUMPAD1;
        break;
    case WAYLAND_KEY_KP2:
        standardKeyCode = RDKSHELL_KEY_NUMPAD2;
        break;
    case WAYLAND_KEY_KP3:
        standardKeyCode = RDKSHELL_KEY_NUMPAD3;
        break;
    case WAYLAND_KEY_KP4:
        standardKeyCode = RDKSHELL_KEY_NUMPAD4;
        break;
    case WAYLAND_KEY_KP5:
        standardKeyCode = RDKSHELL_KEY_NUMPAD5;
        break;
    case WAYLAND_KEY_KP6:
        standardKeyCode = RDKSHELL_KEY_NUMPAD6;
        break;
    case WAYLAND_KEY_KP7:
        standardKeyCode = RDKSHELL_KEY_NUMPAD7;
        break;
    case WAYLAND_KEY_KP8:
        standardKeyCode = RDKSHELL_KEY_NUMPAD8;
        break;
    case WAYLAND_KEY_KP9:
        standardKeyCode = RDKSHELL_KEY_NUMPAD9;
        break;
    case WAYLAND_KEY_KPASTERISK:
        standardKeyCode = RDKSHELL_KEY_MULTIPLY;
        break;
    case WAYLAND_KEY_KPEQUAL:
        standardKeyCode = RDKSHELL_KEY_ADD;
        break;
    case WAYLAND_KEY_MINUS:
        standardKeyCode = RDKSHELL_KEY_SUBTRACT;
        break;
    case WAYLAND_KEY_KPDOT:
        standardKeyCode = RDKSHELL_KEY_DECIMAL;
        break;
    case WAYLAND_KEY_KPSLASH:
        standardKeyCode = RDKSHELL_KEY_DIVIDE;
        break;
    case WAYLAND_KEY_F1:
        standardKeyCode = RDKSHELL_KEY_F1;
        break;
    case WAYLAND_KEY_F2:
        standardKeyCode = RDKSHELL_KEY_F2;
        break;
    case WAYLAND_KEY_F3:
        standardKeyCode = RDKSHELL_KEY_F3;
        break;
    case WAYLAND_KEY_F4:
        standardKeyCode = RDKSHELL_KEY_F4;
        break;
    case WAYLAND_KEY_F5:
        standardKeyCode = RDKSHELL_KEY_F5;
        break;
    case WAYLAND_KEY_F6:
        standardKeyCode = RDKSHELL_KEY_F6;
        break;
    case WAYLAND_KEY_F7:
        standardKeyCode = RDKSHELL_KEY_F7;
        break;
    case WAYLAND_KEY_F8:
        standardKeyCode = RDKSHELL_KEY_F8;
        break;
    case WAYLAND_KEY_F9:
        standardKeyCode = RDKSHELL_KEY_F9;
        break;
    case WAYLAND_KEY_F10:
        standardKeyCode = RDKSHELL_KEY_F10;
        break;
    case WAYLAND_KEY_F11:
        standardKeyCode = RDKSHELL_KEY_F11;
        break;
    case WAYLAND_KEY_F12:
        standardKeyCode = RDKSHELL_KEY_F12;
        break;
    case WAYLAND_KEY_DELETE:
        standardKeyCode = RDKSHELL_KEY_DELETE;
        break;
    case WAYLAND_KEY_SCROLLLOCK:
        standardKeyCode = RDKSHELL_KEY_SCROLLLOCK;
        break;
    case WAYLAND_KEY_PRINT:
        standardKeyCode = RDKSHELL_KEY_PRINTSCREEN;
        break;
    case WAYLAND_KEY_INSERT:
        standardKeyCode = RDKSHELL_KEY_INSERT;
        break;
    
    #ifdef WAYLAND_KEY_PLAYPAUSE
    case WAYLAND_KEY_PLAYPAUSE:
        standardKeyCode = RDKSHELL_KEY_PLAYPAUSE;
        break;
    #endif /* WAYLAND_KEY_PLAYPAUSE */

    #ifdef WAYLAND_KEY_PLAY
    case WAYLAND_KEY_PLAY:
        standardKeyCode = RDKSHELL_KEY_PLAY;
        break;
    #endif /* WAYLAND_KEY_PLAY */

    #ifdef WAYLAND_KEY_FASTFORWARD
    case WAYLAND_KEY_FASTFORWARD:
        standardKeyCode = RDKSHELL_KEY_FASTFORWARD;
        break;
    #endif /* RDKSHELL_KEY_FASTFORWARD  */

    #ifdef WAYLAND_KEY_REWIND
    case WAYLAND_KEY_REWIND:
        standardKeyCode = RDKSHELL_KEY_REWIND;
        break;
    #endif /* WAYLAND_KEY_REWIND */

    #ifdef WAYLAND_KEY_KPENTER
    case WAYLAND_KEY_KPENTER:
        standardKeyCode = RDKSHELL_KEY_ENTER;
        break;
    #endif /* WAYLAND_KEY_KPENTER */

    #ifdef WAYLAND_KEY_BACK
    case WAYLAND_KEY_BACK:
        standardKeyCode = RDKSHELL_KEY_BACK;
        break;
    #endif /* WAYLAND_KEY_BACK */

    #ifdef WAYLAND_KEY_MENU
    case WAYLAND_KEY_MENU:
        standardKeyCode = RDKSHELL_KEY_MENU;
        break;
    #endif /* WAYLAND_KEY_MENU */

    #ifdef WAYLAND_KEY_HOMEPAGE
    case WAYLAND_KEY_HOMEPAGE:
        standardKeyCode = RDKSHELL_KEY_HOMEPAGE;
        break;
    #endif /* WAYLAND_KEY_HOMEPAGE */

    default:
        std::cout << "unknown key code " << waylandKeyCode;
        standardKeyCode = waylandKeyCode;
        break;
    }
    return standardKeyCode;
}

uint32_t keyCodeToWayland(uint32_t keyCode)
{
    uint32_t  waylandKeyCode = 0;

   switch( keyCode )
   {
      case RDKSHELL_KEY_BACKSPACE:
         waylandKeyCode = WAYLAND_KEY_BACKSPACE;
         break;
      case RDKSHELL_KEY_TAB:
         waylandKeyCode = WAYLAND_KEY_TAB;
         break;
      case RDKSHELL_KEY_ENTER:
         waylandKeyCode = WAYLAND_KEY_ENTER;
         break;
      case RDKSHELL_KEY_SHIFT:
         waylandKeyCode = WAYLAND_KEY_LEFTSHIFT;
         break;
      case RDKSHELL_KEY_CTRL:
         waylandKeyCode = WAYLAND_KEY_LEFTCTRL;
         break;
      case RDKSHELL_KEY_ALT:
         waylandKeyCode = WAYLAND_KEY_LEFTALT;
         break;
      case RDKSHELL_KEY_CAPSLOCK:
         waylandKeyCode = WAYLAND_KEY_CAPSLOCK;
         break;
      case RDKSHELL_KEY_ESCAPE:
         waylandKeyCode = WAYLAND_KEY_ESC;
         break;
      case RDKSHELL_KEY_SPACE:
         waylandKeyCode = WAYLAND_KEY_SPACE;
         break;
      case RDKSHELL_KEY_PAGEUP:
         waylandKeyCode = WAYLAND_KEY_PAGEUP;
         break;
      case RDKSHELL_KEY_PAGEDOWN:
         waylandKeyCode = WAYLAND_KEY_PAGEDOWN;
         break;
      case RDKSHELL_KEY_END:
         waylandKeyCode = WAYLAND_KEY_END;
         break;
      case RDKSHELL_KEY_HOME:
         waylandKeyCode = WAYLAND_KEY_HOME;
         break;
      case RDKSHELL_KEY_LEFT:
         waylandKeyCode = WAYLAND_KEY_LEFT;
         break;
      case RDKSHELL_KEY_UP:
         waylandKeyCode = WAYLAND_KEY_UP;
         break;
      case RDKSHELL_KEY_RIGHT:
         waylandKeyCode = WAYLAND_KEY_RIGHT;
         break;
      case RDKSHELL_KEY_DOWN:
         waylandKeyCode = WAYLAND_KEY_DOWN;
         break;
      case RDKSHELL_KEY_INSERT:
         waylandKeyCode = WAYLAND_KEY_INSERT;
         break;
      case RDKSHELL_KEY_DELETE:
         waylandKeyCode = WAYLAND_KEY_DELETE;
         break;
      case RDKSHELL_KEY_ZERO:
         waylandKeyCode = WAYLAND_KEY_0;
         break;
      case RDKSHELL_KEY_ONE:
         waylandKeyCode = WAYLAND_KEY_1;
         break;
      case RDKSHELL_KEY_TWO:
         waylandKeyCode = WAYLAND_KEY_2;
         break;
      case RDKSHELL_KEY_THREE:
         waylandKeyCode = WAYLAND_KEY_3;
         break;
      case RDKSHELL_KEY_FOUR:
         waylandKeyCode = WAYLAND_KEY_4;
         break;
      case RDKSHELL_KEY_FIVE:
         waylandKeyCode = WAYLAND_KEY_5;
         break;
      case RDKSHELL_KEY_SIX:
         waylandKeyCode = WAYLAND_KEY_6;
         break;
      case RDKSHELL_KEY_SEVEN:
         waylandKeyCode = WAYLAND_KEY_7;
         break;
      case RDKSHELL_KEY_EIGHT:
         waylandKeyCode = WAYLAND_KEY_8;
         break;
      case RDKSHELL_KEY_NINE:
         waylandKeyCode = WAYLAND_KEY_9;
         break;
      case RDKSHELL_KEY_A:
         waylandKeyCode = WAYLAND_KEY_A;
         break;
      case RDKSHELL_KEY_B:
         waylandKeyCode = WAYLAND_KEY_B;
         break;
      case RDKSHELL_KEY_C:
         waylandKeyCode = WAYLAND_KEY_C;
         break;
      case RDKSHELL_KEY_D:
         waylandKeyCode = WAYLAND_KEY_D;
         break;
      case RDKSHELL_KEY_E:
         waylandKeyCode = WAYLAND_KEY_E;
         break;
      case RDKSHELL_KEY_F:
         waylandKeyCode = WAYLAND_KEY_F;
         break;
      case RDKSHELL_KEY_G:
         waylandKeyCode = WAYLAND_KEY_G;
         break;
      case RDKSHELL_KEY_H:
         waylandKeyCode = WAYLAND_KEY_H;
         break;
      case RDKSHELL_KEY_I:
         waylandKeyCode = WAYLAND_KEY_I;
         break;
      case RDKSHELL_KEY_J:
         waylandKeyCode = WAYLAND_KEY_J;
         break;
      case RDKSHELL_KEY_K:
         waylandKeyCode = WAYLAND_KEY_K;
         break;
      case RDKSHELL_KEY_L:
         waylandKeyCode = WAYLAND_KEY_L;
         break;
      case RDKSHELL_KEY_M:
         waylandKeyCode = WAYLAND_KEY_M;
         break;
      case RDKSHELL_KEY_N:
         waylandKeyCode = WAYLAND_KEY_N;
         break;
      case RDKSHELL_KEY_O:
         waylandKeyCode = WAYLAND_KEY_O;
         break;
      case RDKSHELL_KEY_P:
         waylandKeyCode = WAYLAND_KEY_P;
         break;
      case RDKSHELL_KEY_Q:
         waylandKeyCode = WAYLAND_KEY_Q;
         break;
      case RDKSHELL_KEY_R:
         waylandKeyCode = WAYLAND_KEY_R;
         break;
      case RDKSHELL_KEY_S:
         waylandKeyCode = WAYLAND_KEY_S;
         break;
      case RDKSHELL_KEY_T:
         waylandKeyCode = WAYLAND_KEY_T;
         break;
      case RDKSHELL_KEY_U:
         waylandKeyCode = WAYLAND_KEY_U;
         break;
      case RDKSHELL_KEY_V:
         waylandKeyCode = WAYLAND_KEY_V;
         break;
      case RDKSHELL_KEY_W:
         waylandKeyCode = WAYLAND_KEY_W;
         break;
      case RDKSHELL_KEY_X:
         waylandKeyCode = WAYLAND_KEY_X;
         break;
      case RDKSHELL_KEY_Y:
         waylandKeyCode = WAYLAND_KEY_Y;
         break;
      case RDKSHELL_KEY_Z:
         waylandKeyCode = WAYLAND_KEY_Z;
         break;
      case RDKSHELL_KEY_NUMPAD0:
         waylandKeyCode = WAYLAND_KEY_KP0;
         break;
      case RDKSHELL_KEY_NUMPAD1:
         waylandKeyCode = WAYLAND_KEY_KP1;
         break;
      case RDKSHELL_KEY_NUMPAD2:
         waylandKeyCode = WAYLAND_KEY_KP2;
         break;
      case RDKSHELL_KEY_NUMPAD3:
         waylandKeyCode = WAYLAND_KEY_KP3;
         break;
      case RDKSHELL_KEY_NUMPAD4:
         waylandKeyCode = WAYLAND_KEY_KP4;
         break;
      case RDKSHELL_KEY_NUMPAD5:
         waylandKeyCode = WAYLAND_KEY_KP5;
         break;
      case RDKSHELL_KEY_NUMPAD6:
         waylandKeyCode = WAYLAND_KEY_KP6;
         break;
      case RDKSHELL_KEY_NUMPAD7:
         waylandKeyCode = WAYLAND_KEY_KP7;
         break;
      case RDKSHELL_KEY_NUMPAD8:
         waylandKeyCode = WAYLAND_KEY_KP8;
         break;
      case RDKSHELL_KEY_NUMPAD9:
         waylandKeyCode = WAYLAND_KEY_KP9;
         break;
      case RDKSHELL_KEY_MULTIPLY:
         waylandKeyCode = WAYLAND_KEY_KPASTERISK;
         break;
      case RDKSHELL_KEY_ADD:
         waylandKeyCode = WAYLAND_KEY_KPPLUS;
         break;
      case RDKSHELL_KEY_SUBTRACT:
         waylandKeyCode = WAYLAND_KEY_MINUS;
         break;
      case RDKSHELL_KEY_DECIMAL:
         waylandKeyCode = WAYLAND_KEY_KPDOT;
         break;
      case RDKSHELL_KEY_DIVIDE:
         waylandKeyCode = WAYLAND_KEY_KPSLASH;
         break;
      case RDKSHELL_KEY_F1:
         waylandKeyCode = WAYLAND_KEY_F1;
         break;
      case RDKSHELL_KEY_F2:
         waylandKeyCode = WAYLAND_KEY_F2;
         break;
      case RDKSHELL_KEY_F3:
         waylandKeyCode = WAYLAND_KEY_F3;
         break;
      case RDKSHELL_KEY_F4:
         waylandKeyCode = WAYLAND_KEY_F4;
         break;
      case RDKSHELL_KEY_F5:
         waylandKeyCode = WAYLAND_KEY_F5;
         break;
      case RDKSHELL_KEY_F6:
         waylandKeyCode = WAYLAND_KEY_F6;
         break;
      case RDKSHELL_KEY_F7:
         waylandKeyCode = WAYLAND_KEY_F7;
         break;
      case RDKSHELL_KEY_F8:
         waylandKeyCode = WAYLAND_KEY_F8;
         break;
      case RDKSHELL_KEY_F9:
         waylandKeyCode = WAYLAND_KEY_F9;
         break;
      case RDKSHELL_KEY_F10:
         waylandKeyCode = WAYLAND_KEY_F10;
         break;
      case RDKSHELL_KEY_F11:
         waylandKeyCode = WAYLAND_KEY_F11;
         break;
      case RDKSHELL_KEY_F12:
         waylandKeyCode = WAYLAND_KEY_F12;
         break;
      case RDKSHELL_KEY_NUMLOCK:
         waylandKeyCode = WAYLAND_KEY_NUMLOCK;
         break;
      case RDKSHELL_KEY_SCROLLLOCK:
         waylandKeyCode = WAYLAND_KEY_SCROLLLOCK;
         break;
      case RDKSHELL_KEY_SEMICOLON:
         waylandKeyCode = WAYLAND_KEY_SEMICOLON;
         break;
      case RDKSHELL_KEY_EQUALS:
         waylandKeyCode = WAYLAND_KEY_EQUAL;
         break;
      case RDKSHELL_KEY_COMMA:
         waylandKeyCode = WAYLAND_KEY_COMMA;
         break;
      case RDKSHELL_KEY_PERIOD:
         waylandKeyCode = WAYLAND_KEY_DOT;
         break;
      case RDKSHELL_KEY_FORWARDSLASH:
         waylandKeyCode = WAYLAND_KEY_SLASH;
         break;
      case RDKSHELL_KEY_GRAVEACCENT:
         waylandKeyCode = WAYLAND_KEY_GRAVE;
         break;
      case RDKSHELL_KEY_OPENBRACKET:
         waylandKeyCode = WAYLAND_KEY_LEFTBRACE;
         break;
      case RDKSHELL_KEY_BACKSLASH:
         waylandKeyCode = WAYLAND_KEY_BACKSLASH;
         break;
      case RDKSHELL_KEY_CLOSEBRACKET:
         waylandKeyCode = WAYLAND_KEY_RIGHTBRACE;
         break;
      case RDKSHELL_KEY_SINGLEQUOTE:
         waylandKeyCode = WAYLAND_KEY_APOSTROPHE;
         break;
      case RDKSHELL_KEY_PRINTSCREEN:
         waylandKeyCode = WAYLAND_KEY_PRINT;
         break;
      case RDKSHELL_KEY_DASH:
         waylandKeyCode = WAYLAND_KEY_MINUS;
         break;
      case RDKSHELL_KEY_FASTFORWARD:
         waylandKeyCode = WAYLAND_KEY_FASTFORWARD;
         break;
      case RDKSHELL_KEY_REWIND:
         waylandKeyCode = WAYLAND_KEY_REWIND;
         break;
      case RDKSHELL_KEY_PAUSE:
         waylandKeyCode = WAYLAND_KEY_PAUSE;
         break;
      case RDKSHELL_KEY_PLAY:
         waylandKeyCode = WAYLAND_KEY_PLAY;
         break;
      case RDKSHELL_KEY_PLAYPAUSE:
         waylandKeyCode = WAYLAND_KEY_PLAYPAUSE;
         break;
      case RDKSHELL_KEY_YELLOW:
         waylandKeyCode = WAYLAND_KEY_YELLOW;
         break;
      case RDKSHELL_KEY_BLUE:
         waylandKeyCode = WAYLAND_KEY_BLUE;
         break;
      case RDKSHELL_KEY_RED:
         waylandKeyCode = WAYLAND_KEY_RED;
         break;
      case RDKSHELL_KEY_GREEN:
         waylandKeyCode = WAYLAND_KEY_GREEN;
         break;
      case RDKSHELL_KEY_BACK:
         waylandKeyCode = WAYLAND_KEY_BACK;
         break;
      case RDKSHELL_KEY_MENU:
         waylandKeyCode = WAYLAND_KEY_MENU;
         break;
      case RDKSHELL_KEY_HOMEPAGE:
         waylandKeyCode = WAYLAND_KEY_HOMEPAGE;
         break;
      default:
         std::cout << "common key code not found " << keyCode << std::endl;
         waylandKeyCode= -1;
         break;
   }

   return  waylandKeyCode;
}