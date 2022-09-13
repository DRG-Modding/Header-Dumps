#ifndef UE4SS_SDK_Reflex_HPP
#define UE4SS_SDK_Reflex_HPP

#include "Reflex_enums.hpp"

class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetReflexMode(const EReflexMode Mode);
    void SetFlashIndicatorEnabled(const bool bEnabled);
    float GetRenderLatencyInMs();
    EReflexMode GetReflexMode();
    bool GetReflexAvailable();
    float GetGameToRenderLatencyInMs();
    float GetGameLatencyInMs();
    bool GetFlashIndicatorEnabled();
};

#endif
