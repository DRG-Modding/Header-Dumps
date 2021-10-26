// Class FSDRawInput.RawInputFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URawInputFunctionLibrary : UBlueprintFunctionLibrary {

	TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
};

// Class FSDRawInput.RawInputSettings
// Size: 0x50 (Inherited: 0x38)
struct URawInputSettings : UDeveloperSettings {
	TArray<FRawInputDeviceConfiguration> DeviceConfigurations; // 0x38(0x10)
	bool bRegisterDefaultDevice; // 0x48(0x01)
};

