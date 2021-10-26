// ScriptStruct FSDRawInput.RegisteredDeviceInfo
// Size: 0x20 (Inherited: 0x00)
struct FRegisteredDeviceInfo {
	int32_t Handle; // 0x00(0x04)
	int32_t VendorID; // 0x04(0x04)
	int32_t ProductID; // 0x08(0x04)
	FString DeviceName; // 0x10(0x10)
};

// ScriptStruct FSDRawInput.RawInputDeviceConfiguration
// Size: 0x40 (Inherited: 0x00)
struct FRawInputDeviceConfiguration {
	FString VendorID; // 0x00(0x10)
	FString ProductID; // 0x10(0x10)
	TArray<FRawInputDeviceAxisProperties> AxisProperties; // 0x20(0x10)
	TArray<FRawInputDeviceButtonProperties> ButtonProperties; // 0x30(0x10)
};

// ScriptStruct FSDRawInput.RawInputDeviceButtonProperties
// Size: 0x20 (Inherited: 0x00)
struct FRawInputDeviceButtonProperties {
	char bEnabled : 1; // 0x00(0x01)
	FKey Key; // 0x08(0x18)
};

// ScriptStruct FSDRawInput.RawInputDeviceAxisProperties
// Size: 0x38 (Inherited: 0x00)
struct FRawInputDeviceAxisProperties {
	char bEnabled : 1; // 0x00(0x01)
	char bMapToButton : 1; // 0x00(0x01)
	FKey Key; // 0x08(0x18)
	char bInverted : 1; // 0x20(0x01)
	char bGamepadStick : 1; // 0x20(0x01)
	float Offset; // 0x24(0x04)
	TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping; // 0x28(0x10)
};

// ScriptStruct FSDRawInput.RawInputDeviceAxisToButtonProperties
// Size: 0x20 (Inherited: 0x00)
struct FRawInputDeviceAxisToButtonProperties {
	float AxisValue; // 0x00(0x04)
	float AxisThreshold; // 0x04(0x04)
	FKey ButtonKey; // 0x08(0x18)
};

