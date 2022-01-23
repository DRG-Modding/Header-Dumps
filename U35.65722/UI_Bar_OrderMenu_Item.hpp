#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP

class UUI_Bar_OrderMenu_Item_C : public USpaceRigBarMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UBorder* Border_0;
    class UBorder* Border_101;
    class UButton* BuyButton;
    class UImage* DrinkIcon;
    class UTextBlock* DrinkNameLabel;
    class UImage* ICON_BeerLicense;
    class USizeBox* SizeBox_3;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class UUI_Bar_LockWarning_C* UI_Bar_LockWarning;
    class UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning;
    class UUI_Bar_SupporterLabel_C* UI_Bar_SupporterLabel;
    FUI_Bar_OrderMenu_Item_COnDrinksPurchased OnDrinksPurchased;
    void OnDrinksPurchased(class UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_Item_COnHover OnHover;
    void OnHover(class USpaceRigBarMenuItem* OrderItem);
    FUI_Bar_OrderMenu_Item_COnUnhover OnUnhover;
    void OnUnhover(class USpaceRigBarMenuItem* OrderItem);
    bool Selected;
    bool CanOrder;
    FUI_Bar_OrderMenu_Item_COnPurchaseDenied OnPurchaseDenied;
    void OnPurchaseDenied();
    FUI_Bar_OrderMenu_Item_COnSelected OnSelected;
    void OnSelected(class USpaceRigBarMenuItem* Item);
    bool AreBeersFree;
    FUI_Bar_OrderMenu_Item_COnDrinkUnlocked OnDrinkUnlocked;
    void OnDrinkUnlocked(class UDrinkableDataAsset* Drink);

    bool AreBeersFreee(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsFreeBeerRewardActive_ReturnValue);
    bool HasPlayerRank(class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void GetTemporaryBuf(class UTemporaryBuff*& buff, bool CallFunc_IsValid_ReturnValue);
    void UpdateItem(TEnumAsByte<ENUM_MenuColors::Type> WarningColor_CantAfford, TEnumAsByte<ENUM_MenuColors::Type> WarningColor_Rank, bool HavePlayerRank, float Temp_float_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsUnLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue_1, bool CallFunc_HasPlayerRank_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_MustBeUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void GetBorderColor(FLinearColor& OutputColor, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsPressed_ReturnValue);
    bool IsInteractable();
    void No_0F2CD82B4BA6006B33BED8B78B16B74B();
    void Yes_0F2CD82B4BA6006B33BED8B78B16B74B();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCreditsChanged(int32 Credits);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnPlayerProgressChanged(int32 Rank, int32 Stars);
    void Select();
    void Unselect();
    void OnHoverFinished();
    void BuyFailed();
    void TryUnlock();
    void OnUnlockAnimFinished_Event();
    void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32 EntryPoint, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_Credits, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 K2Node_CustomEvent_Rank, int32 K2Node_CustomEvent_Stars, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, class UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TryPurchaseDrink_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetDrinkable_IsSupporterEdition, class UDrinkableDataAsset* CallFunc_SetDrinkable_OutDrinkable, FLinearColor CallFunc_MenuColors_OutputColor, FExecuteUbergraph_UI_Bar_OrderMenu_ItemK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_HasPlayerRank_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, ESlateVisibility Temp_byte_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, bool CallFunc_TryUnlockDrink_ReturnValue, class UYesNoPromptAction* CallFunc_PromptPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_CanAfford_ReturnValue, bool CallFunc_AreBeersFreee_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UUI_Bar_UnlockBeerPopup_C* CallFunc_OpenWindowFromClass_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Drink);
    void OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item);
    void OnPurchaseDenied__DelegateSignature();
    void OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink);
};

#endif
