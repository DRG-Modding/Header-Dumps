#ifndef UE4SS_SDK_UI_Bar_OrderMenu_ItemSpecial_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_ItemSpecial_HPP

class UUI_Bar_OrderMenu_ItemSpecial_C : USpaceRigBarMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UButton* BuyButton;
    UImage* DrinkIconLeft;
    UImage* DrinkIconRight;
    UTextBlock* DrinkNameLabel;
    UImage* Image_387;
    UImage* Image_389;
    UImage* Img_Frame;
    UOverlay* Overlay_1;
    UHorizontalBox* RankBox;
    UBorder* RankHolder;
    UImage* RankIcon;
    UTextBlock* RankText;
    UTextBlock* TextBlock_168;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    UUI_Bar_LockWarning_C* UI_Bar_LockWarning;
    UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning;
    FUI_Bar_OrderMenu_ItemSpecial_COnDrinksPurchased OnDrinksPurchased;
    void OnDrinksPurchased(UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_ItemSpecial_COnHover OnHover;
    void OnHover(USpaceRigBarMenuItem* OrderItem);
    FUI_Bar_OrderMenu_ItemSpecial_COnUnhover OnUnhover;
    void OnUnhover(USpaceRigBarMenuItem* OrderItem);
    bool Selected;
    bool CanOrder;
    FUI_Bar_OrderMenu_ItemSpecial_COnPurchaseDenied OnPurchaseDenied;
    void OnPurchaseDenied();
    FUI_Bar_OrderMenu_ItemSpecial_COnSelected OnSelected;
    void OnSelected(USpaceRigBarMenuItem* Item);
    bool NewVar_0;
    FUI_Bar_OrderMenu_ItemSpecial_COnDrinkUnlocked OnDrinkUnlocked;
    void OnDrinkUnlocked(UDrinkableDataAsset* Drink);
    bool AreBeersFree;

    bool HasPlayerRank(UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void GetTemporaryBuf(UTemporaryBuff*& buff, bool CallFunc_IsValid_ReturnValue);
    void UpdateItemStatus(uint8 WarningColor_CantAfford, uint8 WarningColor_Rank, bool HavePlayerRank, bool CanAfford, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDrinkFree_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_AreSpecialDrinksUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, bool CallFunc_AreSpecialDrinksUnlocked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_AreSpecialDrinksUnlocked_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float K2Node_Select_Default_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_GetBorderColor_OutputColor, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void GetBorderColor(FLinearColor& OutputColor, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsPressed_ReturnValue);
    bool IsInteractable();
    void No_026492834E69A68487066993DA576F51();
    void Yes_026492834E69A68487066993DA576F51();
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
    void SetDrinkable(UDrinkableDataAsset* Drinkable);
    void ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, YesNoOutputPin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_Credits, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 K2Node_CustomEvent_Rank, int32 K2Node_CustomEvent_Stars, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_TryPurchaseDrink_ReturnValue, bool CallFunc_IsValid_ReturnValue, PlayerProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, CreditsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, bool CallFunc_AreSpecialDrinksUnlocked_ReturnValue, bool CallFunc_TryUnlockSpecialDrinks_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsDrinkFree_ReturnValue, UYesNoPromptAction* CallFunc_PromptPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUI_Bar_UnlockBeerPopup_C* CallFunc_OpenWindowFromClass_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_CanAfford_ReturnValue);
    void OnDrinkUnlocked__DelegateSignature(UDrinkableDataAsset* Drink);
    void OnSelected__DelegateSignature(USpaceRigBarMenuItem* Item);
    void OnPurchaseDenied__DelegateSignature();
    void OnUnhover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
    void OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
    void OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
}

#endif
