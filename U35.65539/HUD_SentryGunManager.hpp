#ifndef UE4SS_SDK_HUD_SentryGunManager_HPP
#define UE4SS_SDK_HUD_SentryGunManager_HPP

class UHUD_SentryGunManager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* AmmoHolder;
    UHUD_DefaultLabel_C* AmmoLabel;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UImage* ICON_SentryBG;
    UImage* ICON_SentryOutline;
    UHorizontalBox* KeyHolder;
    UUI_AdvancedLabel_C* KeyLabel;
    UBasic_HUD_BracketWindowBig_Single_C* RecallWindow;
    UVerticalBox* Root;
    UInventoryComponent* Inventory;
    ARecallableSentryGunItem* Item;
    int32 PreviewSentryCount;
    UHUDVisibilityGroup* VisibilityGroup;
    TArray<UHUD_SentryGunWidget_C*> SentryWidgets;
    APlayerCharacter* Character;
    bool LaserpointerEquipped;

    void ItemEquipped(bool& IsEquipped, bool CallFunc_IsValid_ReturnValue);
    void OutOfAmmo(bool& OutOfAmmo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UHUD_SentryGunWidget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsOutOfAmmo_OutOfAmmo);
    void PreConstruct(bool IsDesignTime);
    void AddSentry(int32 Index);
    void Construct();
    void OnItemsLoaded();
    void OnActiveItemsChanged(URecallableSentryGunItem* Item);
    void OnItemCurrentAmountChanged(int32 Amount);
    void Update Dynamic Visibility();
    void OnSentryStateChanged_Event();
    void Setup Dynamic Visibility();
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void ExecuteUbergraph_HUD_SentryGunManager(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnSentryStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Index, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, InventoryItemsLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UHUD_SentryGunWidget_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, URecallableSentryGunItem* K2Node_CustomEvent_Item, URecallableSentryGunItem* CallFunc_GetRecallableSentryGunItem_ReturnValue, TArray<URecallableSentryGun*>& CallFunc_GetActiveSentryGuns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable_1, int32 K2Node_CustomEvent_Amount, int32 CallFunc_GetCurrentAmount_ReturnValue, FMargin K2Node_MakeStruct_Margin, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsInDynamicMode_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, RecallableSentryGunItemSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_OutOfAmmo_OutOfAmmo, bool CallFunc_ItemEquipped_IsEquipped, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}

#endif
