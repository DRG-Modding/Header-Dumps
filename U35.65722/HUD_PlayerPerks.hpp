#ifndef UE4SS_SDK_HUD_PlayerPerks_HPP
#define UE4SS_SDK_HUD_PlayerPerks_HPP

class UHUD_PlayerPerks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PerksBox;

    void SetCharacter(class APlayerCharacter* InPlayerCharacter, class UPerkHUDWidget* HudWidget, TSubclassOf<class UPerkHUDWidget> HudWidgetClass, class UPerkAsset* Perk, TArray<class UPerkAsset*> perks, FMargin K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPerkAsset* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class UPerkHUDIconWidget> CallFunc_GetHudIconWidgetClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UPerkHUDWidget* CallFunc_Create_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue);
    void Construct();
    void ExecuteUbergraph_HUD_PlayerPerks(int32 EntryPoint, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, FExecuteUbergraph_HUD_PlayerPerksK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
