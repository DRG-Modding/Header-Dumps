#ifndef UE4SS_SDK_HUD_RadarPoint_Resupply_HPP
#define UE4SS_SDK_HUD_RadarPoint_Resupply_HPP

class UHUD_RadarPoint_Resupply_C : UUserWidget
{
    UImage* Image_0;
    URadarPointComponent* Component;
    float TimeoutDelay;
    float Timeout;

    void InitPoint(URadarPointComponent* RadarComponent, bool& success, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Get3dPosition(FVector& Pos, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
