#ifndef UE4SS_SDK_ICON_HeroSelect_HPP
#define UE4SS_SDK_ICON_HeroSelect_HPP

class UICON_HeroSelect_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* BTN_Retire;
    class UCanvasPanel* CanvasPanel_1;
    class UUI_MaskedImage_C* CharacterIcon;
    class UTextBlock* ClassName;
    class UBorder* ClassName_InnerBorder;
    class UBorder* ClassName_OuterBorder;
    class UImage* ExtensionBG;
    class UImage* ExtensionFiller;
    class UImage* Icon_BG;
    class UImage* Icon_Border;
    class UITM_SeasonChallengeIcon_C* Icon_Challenge;
    class UImage* Icon_Selection;
    class UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    class UITM_RetirementBadge_C* ITM_RetirementBadge;
    class UOverlay* Overlay_0;
    class UCharSelect_HeroSelect_Dots_C* PlayerDots;
    class UWidgetSwitcher* PromotionSwitcher;
    class URichTextBlock* PromotionText;
    class UUI_RoundedImage_C* UI_RoundedImage;
    class UPlayerCharacterID* characterID;
    FICON_HeroSelect_COnCharacterSelected OnCharacterSelected;
    void OnCharacterSelected(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnHovered OnHovered;
    void OnHovered(class UPlayerCharacterID* Character);
    bool ShowRetirement;
    class UBasic_ToolTip_C* ToolTip;
    FICON_HeroSelect_COnRetirementHovered OnRetirementHovered;
    void OnRetirementHovered(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnRetirementUnhovered OnRetirementUnhovered;
    void OnRetirementUnhovered(class UPlayerCharacterID* Character);
    FICON_HeroSelect_COnRetireClicked OnRetireClicked;
    void OnRetireClicked(class UPlayerCharacterID* Character);
    class AFSDPlayerState* PlayerState;
    bool OnlyShowCharacterNotInUse;
    bool ShouldBeEnabled;
    class APlayerState* MyState;
    TArray<class APlayerState*> States;
    class APlayerCharacter* PlayerCharacter;
    bool IsSelectable;
    bool CanPromote;

    bool IsInteractable();
    void GetSelectedClass(class UPlayerCharacterID*& DesiredCharacterClass, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void SetScale(float Scale, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void UpdateSelected(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsSelected_IsSelected, bool CallFunc_IsHovered_ReturnValue, ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_IsSelected_IsSelected_1);
    void IsSelected(bool& IsSelected, class UPlayerCharacterID* CallFunc_GetSelectedClass_DesiredCharacterClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void SetCharacterClass(class UPlayerCharacterID* Class, class UTexture2D* CallFunc_GetIcon_ReturnValue, const FText CallFunc_GetName_ReturnValue, int32 CallFunc_GetHeroLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void On Click();
    void SelectedCharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState);
    void Init(class UPlayerCharacterID* Character);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature();
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature();
    void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature();
    void Update Retirement Button();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetChallengeIcon(bool InHovered, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ICON_HeroSelect(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_ICON_HeroSelectK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FExecuteUbergraph_ICON_HeroSelectK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FGeometry K2Node_Event_MyGeometry_1, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_character, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_HasCharacterCompletedRetirementCampaign_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 K2Node_Select_Default_1, bool K2Node_CustomEvent_InHovered, class UTexture2D* K2Node_CustomEvent_Icon, FLinearColor K2Node_CustomEvent_Color);
    void OnRetireClicked__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
};

#endif
