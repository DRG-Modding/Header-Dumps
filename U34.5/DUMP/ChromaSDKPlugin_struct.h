// Enum ChromaSDKPlugin.EChromaSDKMouseLed
enum class EChromaSDKMouseLed : uint8 {
	ML_SCROLLWHEEL = 0,
	ML_LOGO = 1,
	ML_BACKLIGHT = 2,
	ML_LEFT_SIDE1 = 3,
	ML_LEFT_SIDE2 = 4,
	ML_LEFT_SIDE3 = 5,
	ML_LEFT_SIDE4 = 6,
	ML_LEFT_SIDE5 = 7,
	ML_LEFT_SIDE6 = 8,
	ML_LEFT_SIDE7 = 9,
	ML_BOTTOM1 = 10,
	ML_BOTTOM2 = 11,
	ML_BOTTOM3 = 12,
	ML_BOTTOM4 = 13,
	ML_BOTTOM5 = 14,
	ML_RIGHT_SIDE1 = 15,
	ML_RIGHT_SIDE2 = 16,
	ML_RIGHT_SIDE3 = 17,
	ML_RIGHT_SIDE4 = 18,
	ML_RIGHT_SIDE5 = 19,
	ML_RIGHT_SIDE6 = 20,
	ML_RIGHT_SIDE7 = 21,
	ML_MAX = 22
};

// Enum ChromaSDKPlugin.EChromaSDKKeyboardKey
enum class EChromaSDKKeyboardKey : uint8 {
	KK_ESC = 0,
	KK_F1 = 1,
	KK_F2 = 2,
	KK_F3 = 3,
	KK_F4 = 4,
	KK_F5 = 5,
	KK_F6 = 6,
	KK_F7 = 7,
	KK_F8 = 8,
	KK_F9 = 9,
	KK_F10 = 10,
	KK_F11 = 11,
	KK_F12 = 12,
	KK_2 = 13,
	KK_3 = 14,
	KK_4 = 15,
	KK_5 = 16,
	KK_6 = 17,
	KK_7 = 18,
	KK_8 = 19,
	KK_9 = 20,
	KK_10 = 21,
	KK_1 = 22,
	KK_A = 23,
	KK_B = 24,
	KK_C = 25,
	KK_D = 26,
	KK_E = 27,
	KK_F = 28,
	KK_G = 29,
	KK_H = 30,
	KK_I = 31,
	KK_J = 32,
	KK_K = 33,
	KK_L = 34,
	KK_M = 35,
	KK_N = 36,
	KK_O = 37,
	KK_P = 38,
	KK_Q = 39,
	KK_R = 40,
	KK_S = 41,
	KK_T = 42,
	KK_U = 43,
	KK_V = 44,
	KK_W = 45,
	KK_X = 46,
	KK_Y = 47,
	KK_Z = 48,
	KK_NUMLOCK = 49,
	KK_NUMPAD0 = 50,
	KK_NUMPAD1 = 51,
	KK_NUMPAD2 = 52,
	KK_NUMPAD3 = 53,
	KK_NUMPAD4 = 54,
	KK_NUMPAD5 = 55,
	KK_NUMPAD6 = 56,
	KK_NUMPAD7 = 57,
	KK_NUMPAD8 = 58,
	KK_NUMPAD9 = 59,
	KK_NUMPAD_DIVIDE = 60,
	KK_NUMPAD_MULTIPLY = 61,
	KK_NUMPAD_SUBTRACT = 62,
	KK_NUMPAD_ADD = 63,
	KK_NUMPAD_ENTER = 64,
	KK_NUMPAD_DECIMAL = 65,
	KK_PRINTSCREEN = 66,
	KK_SCROLL = 67,
	KK_PAUSE = 68,
	KK_INSERT = 69,
	KK_HOME = 70,
	KK_PAGEUP = 71,
	KK_DELETE = 72,
	KK_END = 73,
	KK_PAGEDOWN = 74,
	KK_UP = 75,
	KK_LEFT = 76,
	KK_DOWN = 77,
	KK_RIGHT = 78,
	KK_TAB = 79,
	KK_CAPSLOCK = 80,
	KK_BACKSPACE = 81,
	KK_ENTER = 82,
	KK_LCTRL = 83,
	KK_LWIN = 84,
	KK_LALT = 85,
	KK_SPACE = 86,
	KK_RALT = 87,
	KK_FN = 88,
	KK_RMENU = 89,
	KK_RCTRL = 90,
	KK_LSHIFT = 91,
	KK_RSHIFT = 92,
	KK_MACRO1 = 93,
	KK_MACRO2 = 94,
	KK_MACRO3 = 95,
	KK_MACRO4 = 96,
	KK_MACRO5 = 97,
	KK_OEM_2 = 98,
	KK_OEM_3 = 99,
	KK_OEM_4 = 100,
	KK_OEM_5 = 101,
	KK_OEM_6 = 102,
	KK_OEM_7 = 103,
	KK_OEM_8 = 104,
	KK_OEM_9 = 105,
	KK_OEM_10 = 106,
	KK_OEM_11 = 107,
	KK_OEM_12 = 108,
	KK_EUR_2 = 109,
	KK_EUR_3 = 110,
	KK_JPN_2 = 111,
	KK_JPN_3 = 112,
	KK_JPN_4 = 113,
	KK_JPN_5 = 114,
	KK_JPN_6 = 115,
	KK_KOR_2 = 116,
	KK_KOR_3 = 117,
	KK_KOR_4 = 118,
	KK_KOR_5 = 119,
	KK_KOR_6 = 120,
	KK_KOR_7 = 121,
	KK_KOR_8 = 122,
	KK_LOGO = 123,
	KK_INVALID = 124,
	KK_MAX = 125
};

// Enum ChromaSDKPlugin.EChromaSDKDevice2DEnum
enum class EChromaSDKDevice2DEnum : uint8 {
	DE_Keyboard = 0,
	DE_Keypad = 1,
	DE_Mouse = 2,
	DE_MAX = 3
};

// Enum ChromaSDKPlugin.EChromaSDKDevice1DEnum
enum class EChromaSDKDevice1DEnum : uint8 {
	DE_ChromaLink = 0,
	DE_Headset = 1,
	DE_Mousepad = 2,
	DE_MAX = 3
};

// Enum ChromaSDKPlugin.EChromaSDKDeviceEnum
enum class EChromaSDKDeviceEnum : uint8 {
	DE_ChromaLink = 0,
	DE_Headset = 1,
	DE_Keyboard = 2,
	DE_Keypad = 3,
	DE_Mouse = 4,
	DE_Mousepad = 5,
	DE_MAX = 6
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame2D
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColorFrame2D {
	TArray<FChromaSDKColors> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColors
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColors {
	TArray<FLinearColor> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame1D
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColorFrame1D {
	TArray<FLinearColor> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKEffectResult
// Size: 0x14 (Inherited: 0x00)
struct FChromaSDKEffectResult {
	int32_t Result; // 0x00(0x04)
	FChromaSDKGuid EffectId; // 0x04(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKGuid
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKGuid {
};

