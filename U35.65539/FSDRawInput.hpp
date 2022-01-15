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

struct URegisteredDeviceInfo
{
    int32 Handle;
    int32 VendorID;
    int32 ProductID;
    FString DeviceName;
}

struct URawInputDeviceConfiguration
{
    FString VendorID;
    FString ProductID;
    TArray<FRawInputDeviceAxisProperties> AxisProperties;
    TArray<FRawInputDeviceButtonProperties> ButtonProperties;
}

struct URawInputDeviceButtonProperties
{
    uint8 bEnabled;
    FKey Key;
}

struct URawInputDeviceAxisProperties
{
    uint8 bEnabled;
    uint8 bMapToButton;
    FKey Key;
    uint8 bInverted;
    uint8 bGamepadStick;
    float Offset;
    TArray<FRawInputDeviceAxisToButtonProperties> AxisToButtonMapping;
}

struct URawInputDeviceAxisToButtonProperties
{
    float AxisValue;
    float AxisThreshold;
    FKey ButtonKey;
}

#endif
