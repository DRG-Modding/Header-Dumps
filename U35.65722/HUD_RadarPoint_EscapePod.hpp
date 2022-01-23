#ifndef UE4SS_SDK_HUD_RadarPoint_EscapePod_HPP
#define UE4SS_SDK_HUD_RadarPoint_EscapePod_HPP

class UHUD_RadarPoint_EscapePod_C : public UUserWidget
{
    class UImage* Image_0;
    class URadarPointComponent* Component;
    float TimeoutDelay;
    float Timeout;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Get3dPosition(FVector& Pos, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

#endif
