#ifndef UE4SS_SDK_SteamVR_HPP
#define UE4SS_SDK_SteamVR_HPP

#include "SteamVR_enums.hpp"

class USteamVRChaperoneComponent : public UActorComponent
{
    FSteamVRChaperoneComponentOnLeaveBounds OnLeaveBounds;
    void SteamVRChaperoneEvent();
    FSteamVRChaperoneComponentOnReturnToBounds OnReturnToBounds;
    void SteamVRChaperoneEvent();

    void SteamVRChaperoneEvent__DelegateSignature();
    TArray<FVector> GetBounds();
};

class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds);
    bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation);
    bool GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation);
};

class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{
    bool bCurved;
    bool bAntiAlias;
    float AutoCurveMinDistance;
    float AutoCurveMaxDistance;

    void SetCurved(bool InCurved);
    void SetAutoCurveMinDistance(float InDistance);
    void SetAutoCurveMaxDistance(float InDistance);
    void SetAntiAlias(bool InAntiAlias);
};

#endif
