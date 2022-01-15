#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP

class UUI_Bar_OrderMenu_Item_C : USpaceRigBarMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UBorder* Border_0;
    UBorder* Border_101;
    UButton* BuyButton;
    UImage* DrinkIcon;
    UTextBlock* DrinkNameLabel;
    UImage* ICON_BeerLicense;
    USizeBox* SizeBox_3;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    UUI_Bar_LockWarning_C* UI_Bar_LockWarning;
    UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning;
    UUI_Bar_SupporterLabel_C* UI_Bar_SupporterLabel;
    FUI_Bar_OrderMenu_Item_COnDrinksPurchased OnDrinksPurchased;
    void OnDrinksPurchased(UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_Item_COnHover OnHover;
    void OnHover(USpaceRigBarMenuItem* OrderItem);
    FUI_Bar_OrderMenu_Item_COnUnhover OnUnhover;
    void OnUnhover(USpaceRigBarMenuItem* OrderItem);
    bool Selected;
    bool CanOrder;
    FUI_Bar_OrderMenu_Item_COnPurchaseDenied OnPurchaseDenied;
    void OnPurchaseDenied();
    FUI_Bar_OrderMenu_Item_COnSelected OnSelected;
    void OnSelected(USpaceRigBarMenuItem* Item);
    bool AreBeersFree;
    FUI_Bar_OrderMenu_Item_COnDrinkUnlocked OnDrinkUnlocked;
    void OnDrinkUnlocked(UDrinkableDataAsset* Drink);

    bool AreBeersFreee(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsFreeBeerRewardActive_ReturnValue);
    bool HasPlayerRank(UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void GetTemporaryBuf(UTemporaryBuff*& buff, bool CallFunc_IsValid_ReturnValue);
    void UpdateItem(uint8 WarningColor_CantAfford, uint8 WarningColor_Rank, bool HavePlayerRank, float Temp_float_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsUnLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue_1, bool CallFunc_HasPlayerRank_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_MustBeUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void GetBorderColor(FLinearColor& OutputColor, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsPressed_ReturnValue);
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
    void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32 EntryPoint, PlayerProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnUnlockAnimFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_Credits, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 K2Node_CustomEvent_Rank, int32 K2Node_CustomEvent_Stars, bool Temp_bool_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TryPurchaseDrink_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetDrinkable_IsSupporterEdition, UDrinkableDataAsset* CallFunc_SetDrinkable_OutDrinkable, FLinearColor CallFunc_MenuColors_OutputColor, CreditsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_HasPlayerRank_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, ESlateVisibility Temp_byte_Variable, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, bool CallFunc_TryUnlockDrink_ReturnValue, UYesNoPromptAction* CallFunc_PromptPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_CanAfford_ReturnValue, bool CallFunc_AreBeersFreee_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUI_Bar_UnlockBeerPopup_C* CallFunc_OpenWindowFromClass_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void OnDrinkUnlocked__DelegateSignature(UDrinkableDataAsset* Drink);
    void OnSelected__DelegateSignature(USpaceRigBarMenuItem* Item);
    void OnPurchaseDenied__DelegateSignature();
    void OnUnhover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
    void OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
    void OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
}

#endif
