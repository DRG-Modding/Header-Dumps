#ifndef UE4SS_SDK_HUD_RadarPoint_Player_HPP
#define UE4SS_SDK_HUD_RadarPoint_Player_HPP

class UHUD_RadarPoint_Player_C : UUserWidget
{
    UImage* Image_0;
    APlayerCharacter* Player;
    bool MarkedForDestruction;

    void InitPoint(URadarPointComponent* RadarComponent, bool& success, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
    void Get3dPosition(FVector& Pos, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetArmorPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void Deactivate();
}

#endif
