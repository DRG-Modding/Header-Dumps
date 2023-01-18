#ifndef UE4SS_SDK_MaterialShaderQualitySettings_HPP
#define UE4SS_SDK_MaterialShaderQualitySettings_HPP

#include "MaterialShaderQualitySettings_enums.hpp"

struct FMaterialQualityOverrides
{
    bool bDiscardQualityDuringCook;
    bool bEnableOverride;
    bool bForceFullyRough;
    bool bForceNonMetal;
    bool bForceDisableLMDirectionality;
    bool bForceLQReflections;
    bool bForceDisablePreintegratedGF;
    bool bDisableMaterialNormalCalculation;
    EMobileShadowQuality MobileShadowQuality;

};

class UMaterialShaderQualitySettings : public UObject
{
    TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;

};

class UShaderPlatformQualitySettings : public UObject
{
    FMaterialQualityOverrides QualityOverrides;

};

#endif
