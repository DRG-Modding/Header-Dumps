#ifndef UE4SS_SDK_HUD_Armor_Player_HPP
#define UE4SS_SDK_HUD_Armor_Player_HPP

class UHUD_Armor_Player_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_Armor_Base_C* HUD_Armor;

    void Construct();
    void ExecuteUbergraph_HUD_Armor_Player(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
