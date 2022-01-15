#ifndef UE4SS_SDK_HUD_Armor_Base_HPP
#define UE4SS_SDK_HUD_Armor_Base_HPP

class UHUD_Armor_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_0;
    UImage* IconImage;
    UProgressBar* ProgressBar;
    UHealthComponent* HealthComponent;

    void ArmorChanged(float Health);
    void Bind To Health Component(UHealthComponent* HealthComponent);
    void PreConstruct(bool IsDesignTime);
    void Unbind Health Component();
    void Set Armor Pct(float InPercent);
    void Bind To Player(UPlayerCharacter* Player);
    void ExecuteUbergraph_HUD_Armor_Base(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, UHealthComponent* Temp_object_Variable, float K2Node_CustomEvent_health, UHealthComponent* K2Node_CustomEvent_HealthComponent, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetArmorPct_ReturnValue, float CallFunc_GetArmorPct_ReturnValue_1, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_InPercent, bool CallFunc_IsValid_ReturnValue_1, UPlayerCharacter* K2Node_CustomEvent_player, bool CallFunc_IsValid_ReturnValue_2, UHealthComponent* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
