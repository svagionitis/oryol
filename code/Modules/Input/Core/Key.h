#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::Input::Key
    @brief input key codes
*/
#include "Core/Types.h"

namespace Oryol {
namespace Input {
    
class Key {
public:
    /// key code enum, these are ripped from the GLFW header
    enum Code {
        // NOTE: don't change order or add keys without also
        // updating the string mapping table in Key.cc!
        InvalidKey = 0,
    
        Space,
        Apostrophe,
        Comma,
        Minus,
        Period,
        Slash,
        N0,
        N1,
        N2,
        N3,
        N4,
        N5,
        N6,
        N7,
        N8,
        N9,
        Semicolon,
        Equal,
        A,
        B,
        C,
        D,
        E,
        F,
        G,
        H,
        I,
        J,
        K,
        L,
        M,
        N,
        O,
        P,
        Q,
        R,
        S,
        T,
        U,
        V,
        W,
        X,
        Y,
        Z,
        LeftBracket,
        BackSlash,
        RightBracket,
        GraveAccent,
        World1,
        World2,
        Escape,
        Enter,
        Tab,
        BackSpace,
        Insert,
        Delete,
        Right,
        Left,
        Down,
        Up,
        PageUp,
        PageDown,
        Home,
        End,
        CapsLock,
        ScrollLock,
        NumLock,
        PrintScreen,
        Pause,
        F1,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        F10,
        F11,
        F12,
        F13,
        F14,
        F15,
        F16,
        F17,
        F18,
        F19,
        F20,
        F21,
        F22,
        F23,
        F24,
        F25,
        Num0,
        Num1,
        Num2,
        Num3,
        Num4,
        Num5,
        Num6,
        Num7,
        Num8,
        Num9,
        NumDecimal,
        NumDivide,
        NumMultiply,
        NumSubtract,
        NumAdd,
        NumEnter,
        NumEqual,
        LeftShift,
        LeftControl,
        LeftAlt,
        LeftSuper,
        RightShift,
        RightControl,
        RightAlt,
        RightSuper,
        Menu,

        NumKeys,
    };
    
    /// convert to string
    static const char* ToString(Key::Code key);
    
private:
    static const char* keyTable[NumKeys];
};
    
} // namespace Input
} // namespace Oryol
