// Enum ChromaSDKPlugin.EChromaSDKMouseLed
enum class EChromaSDKMouseLed : uint8_t {
	ML_SCROLLWHEEL,
	ML_LOGO,
	ML_BACKLIGHT,
	ML_LEFT_SIDE1,
	ML_LEFT_SIDE2,
	ML_LEFT_SIDE3,
	ML_LEFT_SIDE4,
	ML_LEFT_SIDE5,
	ML_LEFT_SIDE6,
	ML_LEFT_SIDE7,
	ML_BOTTOM1,
	ML_BOTTOM2,
	ML_BOTTOM3,
	ML_BOTTOM4,
	ML_BOTTOM5,
	ML_RIGHT_SIDE1,
	ML_RIGHT_SIDE2,
	ML_RIGHT_SIDE3,
	ML_RIGHT_SIDE4,
	ML_RIGHT_SIDE5,
	ML_RIGHT_SIDE6,
	ML_RIGHT_SIDE7,
	ML_MAX,
};

// Enum ChromaSDKPlugin.EChromaSDKKeyboardKey
enum class EChromaSDKKeyboardKey : uint8_t {
	KK_ESC,
	KK_F1,
	KK_F2,
	KK_F3,
	KK_F4,
	KK_F5,
	KK_F6,
	KK_F7,
	KK_F8,
	KK_F9,
	KK_F10,
	KK_F11,
	KK_F12,
	KK_2,
	KK_3,
	KK_4,
	KK_5,
	KK_6,
	KK_7,
	KK_8,
	KK_9,
	KK_10,
	KK_1,
	KK_A,
	KK_B,
	KK_C,
	KK_D,
	KK_E,
	KK_F,
	KK_G,
	KK_H,
	KK_I,
	KK_J,
	KK_K,
	KK_L,
	KK_M,
	KK_N,
	KK_O,
	KK_P,
	KK_Q,
	KK_R,
	KK_S,
	KK_T,
	KK_U,
	KK_V,
	KK_W,
	KK_X,
	KK_Y,
	KK_Z,
	KK_NUMLOCK,
	KK_NUMPAD0,
	KK_NUMPAD1,
	KK_NUMPAD2,
	KK_NUMPAD3,
	KK_NUMPAD4,
	KK_NUMPAD5,
	KK_NUMPAD6,
	KK_NUMPAD7,
	KK_NUMPAD8,
	KK_NUMPAD9,
	KK_NUMPAD_DIVIDE,
	KK_NUMPAD_MULTIPLY,
	KK_NUMPAD_SUBTRACT,
	KK_NUMPAD_ADD,
	KK_NUMPAD_ENTER,
	KK_NUMPAD_DECIMAL,
	KK_PRINTSCREEN,
	KK_SCROLL,
	KK_PAUSE,
	KK_INSERT,
	KK_HOME,
	KK_PAGEUP,
	KK_DELETE,
	KK_END,
	KK_PAGEDOWN,
	KK_UP,
	KK_LEFT,
	KK_DOWN,
	KK_RIGHT,
	KK_TAB,
	KK_CAPSLOCK,
	KK_BACKSPACE,
	KK_ENTER,
	KK_LCTRL,
	KK_LWIN,
	KK_LALT,
	KK_SPACE,
	KK_RALT,
	KK_FN,
	KK_RMENU,
	KK_RCTRL,
	KK_LSHIFT,
	KK_RSHIFT,
	KK_MACRO1,
	KK_MACRO2,
	KK_MACRO3,
	KK_MACRO4,
	KK_MACRO5,
	KK_OEM_2,
	KK_OEM_3,
	KK_OEM_4,
	KK_OEM_5,
	KK_OEM_6,
	KK_OEM_7,
	KK_OEM_8,
	KK_OEM_9,
	KK_OEM_10,
	KK_OEM_11,
	KK_OEM_12,
	KK_EUR_2,
	KK_EUR_3,
	KK_JPN_2,
	KK_JPN_3,
	KK_JPN_4,
	KK_JPN_5,
	KK_JPN_6,
	KK_KOR_2,
	KK_KOR_3,
	KK_KOR_4,
	KK_KOR_5,
	KK_KOR_6,
	KK_KOR_7,
	KK_KOR_8,
	KK_LOGO,
	KK_INVALID,
	KK_MAX,
};

// Enum ChromaSDKPlugin.EChromaSDKDevice2DEnum
enum class EChromaSDKDevice2DEnum : uint8_t {
	DE_Keyboard,
	DE_Keypad,
	DE_Mouse,
	DE_MAX,
};

// Enum ChromaSDKPlugin.EChromaSDKDevice1DEnum
enum class EChromaSDKDevice1DEnum : uint8_t {
	DE_ChromaLink,
	DE_Headset,
	DE_Mousepad,
	DE_MAX,
};

// Enum ChromaSDKPlugin.EChromaSDKDeviceEnum
enum class EChromaSDKDeviceEnum : uint8_t {
	DE_ChromaLink,
	DE_Headset,
	DE_Keyboard,
	DE_Keypad,
	DE_Mouse,
	DE_Mousepad,
	DE_MAX,
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame2D
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColorFrame2D {
	struct TArray<struct FChromaSDKColors> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColors
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColors {
	struct TArray<struct FLinearColor> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKColorFrame1D
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKColorFrame1D {
	struct TArray<struct FLinearColor> Colors; // 0x00(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKEffectResult
// Size: 0x14 (Inherited: 0x00)
struct FChromaSDKEffectResult {
	int32_t Result; // 0x00(0x04)
	struct FChromaSDKGuid EffectId; // 0x04(0x10)
};

// ScriptStruct ChromaSDKPlugin.ChromaSDKGuid
// Size: 0x10 (Inherited: 0x00)
struct FChromaSDKGuid {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

