#ifndef UE4SS_SDK_HUD_Health_Player_HPP
#define UE4SS_SDK_HUD_Health_Player_HPP

class UHUD_Health_Player_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_Health_Base_C* HUD_Health;

    void Construct();
    void ExecuteUbergraph_HUD_Health_Player(int32 EntryPoint, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
