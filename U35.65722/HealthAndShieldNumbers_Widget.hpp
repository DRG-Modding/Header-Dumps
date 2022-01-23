#ifndef UE4SS_SDK_HealthAndShieldNumbers_Widget_HPP
#define UE4SS_SDK_HealthAndShieldNumbers_Widget_HPP

class UHealthAndShieldNumbers_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CurrentHealth;
    class UTextBlock* CurrentShield;
    class UTextBlock* MaxHealth;
    class UTextBlock* MaxShield;

    void UpdateCurrentHealth(float CurrentHealth);
    void UpdateMaxHealth(float MaxHealth);
    void UpdateCurrentShield(float CurrentShield);
    void UpdateMaxShield(float MaxShield);
    void ExecuteUbergraph_HealthAndShieldNumbers_Widget(int32 EntryPoint, float K2Node_CustomEvent_CurrentHealth, float K2Node_CustomEvent_MaxHealth, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, float K2Node_CustomEvent_CurrentShield, float K2Node_CustomEvent_MaxShield, FText CallFunc_Conv_FloatToText_ReturnValue_2, FText CallFunc_Conv_FloatToText_ReturnValue_3);
};

#endif
