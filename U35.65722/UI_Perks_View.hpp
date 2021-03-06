#ifndef UE4SS_SDK_UI_Perks_View_HPP
#define UE4SS_SDK_UI_Perks_View_HPP

class UUI_Perks_View_C : public UUI_KPI_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimLoadoutHint;
    class UBorder* Border_3;
    class UBorder* Border_4;
    class UBasic_ButtonScalable2_C* ButtonOkHint;
    class UBackgroundBlur* HintBlur;
    class UBorder* PerksBorder;
    class UHorizontalBox* TierBox;
    class UUI_AvailablePerkPoints_C* UI_AvailablePerkPoints;
    class UUI_Perks_Buy_C* UI_Perks_Buy;
    class UUI_Perks_Item_C* SelectedPerk;
    TArray<class UPerkAsset*> AllPerks;
    bool FirstPerkPurchase;

    void HandleMouseEvent(const FPointerEvent& InMouseEvent, bool InUp, bool& OutHandled, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void HandleKeyEvent(FKeyEvent InKeyEvent, bool InUp, bool& OutHandled, bool CallFunc_IsUseButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void SelectPerkWidget(class UUI_Perks_Item_C* PerkWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPerkAsset* CallFunc_GetPerkAsset_PerkAsset, EPerkTierState CallFunc_GetPerkAsset_State, int32 CallFunc_GetPerkAsset_Tier, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void OnPerkClicked_Event(class UUI_Perks_Item_C* PerkWidget);
    void BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature();
    void BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Toggle Loadout Hint(bool Visible);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_UI_Perks_View(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetHighestPerkTier_ReturnValue, class UUI_Perks_Column_Items_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UUI_Perks_Item_C* K2Node_CustomEvent_PerkWidget, FExecuteUbergraph_UI_Perks_ViewK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FLinearColor CallFunc_MenuColors_OutputColor, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, const TArray<class UPerkAsset*>& CallFunc_GetAvailablePerks_ReturnValue, bool K2Node_CustomEvent_Visible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UPerkAsset*>& CallFunc_GetOwnedPerks_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FFocusEvent K2Node_Event_InFocusEvent);
};

#endif
