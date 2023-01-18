#ifndef UE4SS_SDK_FSDRawInput_HPP
#define UE4SS_SDK_FSDRawInput_HPP

struct FRawInputDeviceAxisProperties
{
    uint8 bEnabled;
    uint8 bMapToButton;
    FKey Key;
    uint8 bInverted;
    uint8 bGamepadStick;
    float Offset;
    TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping;

};

struct FRawInputDeviceAxisToButtonProperties
{
    float AxisValue;
    float AxisThreshold;
    FKey ButtonKey;

};

struct FRawInputDeviceButtonProperties
{
    uint8 bEnabled;
    FKey Key;

};

struct FRawInputDeviceConfiguration
{
    FString VendorID;
    FString ProductID;
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;

};

struct FRegisteredDeviceInfo
{
    int32 Handle;
    int32 VendorID;
    int32 ProductID;
    FString DeviceName;

};

class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
};

class URawInputSettings : public UDeveloperSettings
{
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    bool bRegisterDefaultDevice;

};

#endif
