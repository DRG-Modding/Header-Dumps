#ifndef UE4SS_SDK_FSDRawInput_HPP
#define UE4SS_SDK_FSDRawInput_HPP

class URawInputFunctionLibrary : UBlueprintFunctionLibrary
{

    TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
}

class URawInputSettings : UDeveloperSettings
{
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    bool bRegisterDefaultDevice;
}

struct FRegisteredDeviceInfo
{
    int32 Handle;
    int32 VendorID;
    int32 ProductID;
    FString DeviceName;
}

struct FRawInputDeviceConfiguration
{
    FString VendorID;
    FString ProductID;
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
}

struct FRawInputDeviceButtonProperties
{
    uint8 bEnabled;
    FKey Key;
}

struct FRawInputDeviceAxisProperties
{
    uint8 bEnabled;
    uint8 bMapToButton;
    FKey Key;
    uint8 bInverted;
    uint8 bGamepadStick;
    float Offset;
    TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping;
}

struct FRawInputDeviceAxisToButtonProperties
{
    float AxisValue;
    float AxisThreshold;
    FKey ButtonKey;
}

#endif
