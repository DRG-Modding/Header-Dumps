#ifndef UE4SS_SDK_DLSSBlueprint_HPP
#define UE4SS_SDK_DLSSBlueprint_HPP

#include "DLSSBlueprint_enums.hpp"

class UDLSSLibrary : public UBlueprintFunctionLibrary
{

    void SetDLSSSharpness(float Sharpness);
    void SetDLSSMode(UDLSSMode DLSSMode);
    UDLSSSupport QueryDLSSSupport();
    bool IsDLSSSupported();
    bool IsDLSSModeSupported(UDLSSMode DLSSMode);
    bool IsDLAAEnabled();
    TArray<UDLSSMode> GetSupportedDLSSModes();
    float GetDLSSSharpness();
    void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);
    UDLSSMode GetDLSSMode();
    void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);
    UDLSSMode GetDefaultDLSSMode();
    void EnableDLAA(bool bEnabled);
};

#endif
