#ifndef UE4SS_SDK_Cheat_CharacterPointLight_HPP
#define UE4SS_SDK_Cheat_CharacterPointLight_HPP

class UCheat_CharacterPointLight_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* IntensityLabel;
    USlider* IntensitySlider;
    UTextBlock* RadiusLabel;
    USlider* RadiusSlider;

    void Update(UPointLightComponent* Light, float CallFunc_GetValue_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UBP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValue_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValue_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BndEvt__IntensitySlider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Radius_K2Node_ComponentBoundEvent_96_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Set max value on radius and intensity();
    void ExecuteUbergraph_Cheat_CharacterPointLight(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value);
}

#endif
