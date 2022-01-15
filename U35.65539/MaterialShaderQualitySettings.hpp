#ifndef UE4SS_SDK_MaterialShaderQualitySettings_HPP
#define UE4SS_SDK_MaterialShaderQualitySettings_HPP

#include "MaterialShaderQualitySettings_enums.hpp"

class UMaterialShaderQualitySettings : UObject
{
    TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap;
}

class UShaderPlatformQualitySettings : UObject
{
    FMaterialQualityOverrides QualityOverrides;
}

struct UMaterialQualityOverrides
{
    bool bDiscardQualityDuringCook;
    bool bEnableOverride;
    bool bForceFullyRough;
    bool bForceNonMetal;
    bool bForceDisableLMDirectionality;
    bool bForceLQReflections;
    bool bForceDisablePreintegratedGF;
    bool bDisableMaterialNormalCalculation;
    EMobileCSMQuality MobileCSMQuality;
}

#endif
