#ifndef UE4SS_SDK_HUD_PlayerPerks_HPP
#define UE4SS_SDK_HUD_PlayerPerks_HPP

class UHUD_PlayerPerks_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* PerksBox;

    void SetCharacter(UPlayerCharacter* InPlayerCharacter, UPerkHUDWidget* HudWidget, TSubclassOf<UPerkHUDWidget> HudWidgetClass, UPerkAsset* Perk, TArray<UPerkAsset*> perks, FMargin K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UPerkAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<UPerkHUDIconWidget> CallFunc_GetHudIconWidgetClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UPerkHUDWidget* CallFunc_Create_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue);
    void Construct();
    void ExecuteUbergraph_HUD_PlayerPerks(int32 EntryPoint, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
