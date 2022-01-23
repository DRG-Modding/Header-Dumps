#ifndef UE4SS_SDK_HUD_RadarPoint_Donkey_HPP
#define UE4SS_SDK_HUD_RadarPoint_Donkey_HPP

class UHUD_RadarPoint_Donkey_C : public UUserWidget
{
    class UImage* MarkerImage;
    class URadarPointComponent* Component;
    float TimeoutDelay;
    float Timeout;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void Get3dPosition(FVector& Pos, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue);
};

#endif
