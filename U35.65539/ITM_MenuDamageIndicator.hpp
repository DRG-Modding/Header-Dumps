#ifndef UE4SS_SDK_ITM_MenuDamageIndicator_HPP
#define UE4SS_SDK_ITM_MenuDamageIndicator_HPP

class UITM_MenuDamageIndicator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DamageTaken;
    UImage* Image_Damage;
    UUserWidget* Menu;

    void PreConstruct(bool IsDesignTime);
    void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void OnAnimFinished();
    void SetMenu(UUserWidget* EscapeMenu);
    void ExecuteUbergraph_ITM_MenuDamageIndicator(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, HitSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float K2Node_CustomEvent_Damage, UDamageClass* K2Node_CustomEvent_damageClass, AActor* K2Node_CustomEvent_DamageCauser, bool K2Node_CustomEvent_anyHealthLost, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UUserWidget* K2Node_CustomEvent_EscapeMenu);
}

#endif
