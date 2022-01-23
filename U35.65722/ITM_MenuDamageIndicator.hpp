#ifndef UE4SS_SDK_ITM_MenuDamageIndicator_HPP
#define UE4SS_SDK_ITM_MenuDamageIndicator_HPP

class UITM_MenuDamageIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DamageTaken;
    class UImage* Image_Damage;
    class UUserWidget* Menu;

    void PreConstruct(bool IsDesignTime);
    void OnHit(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void OnAnimFinished();
    void SetMenu(class UUserWidget* EscapeMenu);
    void ExecuteUbergraph_ITM_MenuDamageIndicator(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, FExecuteUbergraph_ITM_MenuDamageIndicatorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_MenuDamageIndicatorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float K2Node_CustomEvent_Damage, class UDamageClass* K2Node_CustomEvent_damageClass, class AActor* K2Node_CustomEvent_DamageCauser, bool K2Node_CustomEvent_anyHealthLost, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UUserWidget* K2Node_CustomEvent_EscapeMenu);
};

#endif
