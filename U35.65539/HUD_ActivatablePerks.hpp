#ifndef UE4SS_SDK_HUD_ActivatablePerks_HPP
#define UE4SS_SDK_HUD_ActivatablePerks_HPP

class UHUD_ActivatablePerks_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* WidgetBox;
    EPerkHUDActivationLocation Location;

    void SetPerks(TArray<UPerkAsset*>& Array, UPerkHUDActivationWidget* Widget, UPerkAsset* Perk, int32 Temp_int_Array_Index_Variable, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, UPerkHUDActivationWidget* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UPerkAsset* CallFunc_Array_Get_Item, TArray<TSubclassOf<UPerkHUDActivationWidget>>& CallFunc_GetHudActivationWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<UPerkHUDActivationWidget> CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UPerkHUDActivationWidget* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_ActivatablePerks(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UPerkAsset* K2Node_DynamicCast_AsPerk_Asset, bool K2Node_DynamicCast_bSuccess, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<UPerkAsset*>& CallFunc_GetCharacterEquippedPerks_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UPerkAsset* K2Node_DynamicCast_AsPerk_Asset_1, bool K2Node_DynamicCast_bSuccess_1, TArray<UPerkAsset*>& K2Node_MakeArray_Array);
}

#endif
