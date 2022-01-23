#ifndef UE4SS_SDK_HUD_Pickaxe_HPP
#define UE4SS_SDK_HUD_Pickaxe_HPP

class UHUD_Pickaxe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ProgressBar_0;
    class APlayerCharacter* Character;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_Pickaxe(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSpecialCooldownProgress_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
