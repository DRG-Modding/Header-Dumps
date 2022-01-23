#ifndef UE4SS_SDK_HUD_Flares_HPP
#define UE4SS_SDK_HUD_Flares_HPP

class UHUD_Flares_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* FlareBox;
    class UUI_AdvancedLabel_C* InputLabel;
    TArray<class UHUD_FlareIcon_C*> Icons;
    TSet<FName> reasons;
    bool LaserpointerPressed;
    int32 NextIndex;
    float Progress;
    bool RechargingFirst;

    void SetFlareProduction(int32 InNextIndex, float InProgress, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UHUD_FlareIcon_C* CallFunc_Array_Get_Item);
    void CreateIcons(int32 IconCount, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FMargin K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UHUD_FlareIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void OnItemsLoaded();
    void OnFlareProduction(int32 NextIndex, float Progress);
    void Setup Dynamic HUD();
    void OnFlareCountChanged(int32 CurrentCount, class UInventoryComponent* Inventory);
    void Construct();
    void UpdateVisibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased_Event();
    void PreConstruct(bool IsDesignTime);
    void OnMaxFlareCountChanged_Event(int32 CurrentCount, class UInventoryComponent* Inventory);
    void ExecuteUbergraph_HUD_Flares(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_NextIndex, float K2Node_CustomEvent_progress, FLinearColor CallFunc_MenuColors_OutputColor, int32 K2Node_CustomEvent_CurrentCount_1, class UInventoryComponent* K2Node_CustomEvent_inventory_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FExecuteUbergraph_HUD_FlaresK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_CurrentCount, class UInventoryComponent* K2Node_CustomEvent_inventory, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue);
};

#endif
