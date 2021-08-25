// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t {
	Touch1,
	Touch2,
	Touch3,
	Touch4,
	Touch5,
	Touch6,
	Touch7,
	Touch8,
	Touch9,
	Touch10,
	CursorPointerIndex,
	MAX_TOUCHES,
	ETouchIndex_MAX,
};

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t {
	Left,
	Right,
	AnyHand,
	Pad,
	ExternalCamera,
	Gun,
	Special_2,
	Special_3,
	Special_4,
	Special_5,
	Special_6,
	Special_7,
	Special_8,
	Special_9,
	Special_10,
	Special_11,
	Special_12,
	ControllerHand_Count,
	EControllerHand_MAX,
};

// Enum InputCore.ETouchType
enum class ETouchType : uint8_t {
	Began,
	Moved,
	Stationary,
	ForceChanged,
	FirstMove,
	Ended,
	NumTypes,
	ETouchType_MAX,
};

// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t {
	None,
	XBoxOne,
	PS4,
	EConsoleForGamepadLabels_MAX,
};

// ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x00)
struct FKey {
	struct FName KeyName; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

