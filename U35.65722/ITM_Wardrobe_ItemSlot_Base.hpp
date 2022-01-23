#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_Base_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_Base_HPP

class UITM_Wardrobe_ItemSlot_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimShuffle;
    class UWidgetAnimation* IntroRight;
    class UWidgetAnimation* IntroLeft;
    class UWidgetAnimation* AnimHovered;
    class UImage* IconImage;
    class USizeBox* IconSizer;
    class UITM_ItemUnlockedIcon_C* Notification_NewItemAny;
    class UBorder* OuterBorder;
    class UButton* ShuffleButton;
    class UButton* SlotButton;
    class UScaleBox* SlotContentBox;
    class USizeBox* SlotSizer;
    class UBasic_Label_C* TextHeader;
    class UOverlay* TextOverlay;
    class UBasic_Label_C* TextSubheader;
    class UUI_RandomizeIcon_C* UI_RandomizeIcon;
    class UTexture2D* TypeIcon;
    int32 SlotSize;
    class UITM_Wardrobe_ItemSelector_C* Selector;
    class UPlayerCharacterID* characterID;
    TArray<class UWidget*> ItemWidgets;
    TArray<int32> NewItemIndices;
    TArray<class UITM_Wardrobe_ItemSlot_Base_C*> RefreshSlotsOnChange;
    bool SlotHovered;
    bool SlotSelected;
    bool TextToLeft;
    bool PreviewingItem;
    bool IsDesignTime;
    FITM_Wardrobe_ItemSlot_Base_COnEquippedChanged OnEquippedChanged;
    void OnEquippedChanged();
    class UDialogDataAsset* ShoutOnEquipped;
    bool CanShuffle;

    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC);
    void EquipRandomItem(int32 Index, int32 ItemCount, int32 SelectedIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ReceiveEquipItem_OutSuccess, bool CallFunc_ReceivePreviewItem_OutSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetItemWidgets_ItemWidgets, TArray<int32>& CallFunc_GetItemWidgets_NewItemIndices, int32 CallFunc_GetItemWidgets_OutSelectedIndex, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue);
    void UpdateShuffleButton(class UCanvasPanelSlot* CanvasSlot, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, bool Temp_bool_Variable_1, FAnchors K2Node_MakeStruct_Anchors, FAnchors K2Node_MakeStruct_Anchors_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, FAnchors K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void GetTextToLeft(bool& TextToLeft);
    void SetHovered(bool InSlotHovered);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void SetRefreshSlotsOnChange(TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& InOtherSlots);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array);
    void ReceiveInitialize(int32& AvailableItems);
    void SelectorItemUnhovered(int32 Index, bool CallFunc_ReceivePreviewItem_OutSuccess);
    void SelectorItemHovered(int32 Index, bool CallFunc_ReceivePreviewItem_OutSuccess, TArray<class UObject*>& CallFunc_ReceiveItemNotificationData_Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
    void ReceiveGetSelectedIndex(int32& OutIndex);
    void SetItemName(FText InName, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Refresh(bool CallFunc_IsValid_ReturnValue);
    void SelectorItemClicked(int32 Index, bool& OutCloseSelector, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ReceiveEquipItem_OutSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void ReceivePreConstruct();
    void GetItemWidgets(TArray<class UWidget*>& ItemWidgets, TArray<int32>& NewItemIndices, int32& OutSelectedIndex, int32 CallFunc_ReceiveGetSelectedIndex_OutIndex, TArray<class UWidget*>& CallFunc_ReceiveGenerateItems_OutItemWidgets, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void ReceiveReleaseResource(class UWidget* InWidget);
    void SetTextToLeft(bool Index, float IconOffset, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, FAnchors K2Node_MakeStruct_Anchors, FAnchors K2Node_MakeStruct_Anchors_1, bool Temp_bool_Variable_3, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, bool Temp_bool_Variable_4, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_5, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_2, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_3, bool Temp_bool_Variable_6, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_4, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_5, float K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, float K2Node_Select_Default_1, FAnchors K2Node_Select_Default_2, FVector2D CallFunc_MakeVector2D_ReturnValue_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default_3, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, float K2Node_Select_Default_4, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_2, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default_5, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default_6, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_2);
    void Initialize(class UPlayerCharacterID* InCharacterID, int32 ItemIndex, int32 AvailableItems, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_ReceiveItemNotificationData_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CheckItemUINotification_HasNotification, int32 CallFunc_ReceiveInitialize_AvailableItems, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetTypeIcon(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetSlotName(const FText Title, FText CallFunc_TextToUpper_ReturnValue);
    void SetSlotSize(int32 InSize, float IconSize, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void SetSelected(bool inSelected, bool Temp_bool_Variable, class UITM_Wardrobe_ItemSlot_Base_C* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_Select_Default);
    void ReleaseResources(class UWidget* Widget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, class UTextureRenderTarget2D* K2Node_DynamicCast_AsTexture_Render_Target_2D, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets, TArray<int32> NewItems, TArray<class UWidget*> Widgets);
    void SetContentAsWidgetClass(TSoftClassPtr<UUserWidget> InWidget, class UUserWidget*& OutWidget, class UUserWidget* Widget, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
    void SetContentAsTexture(class UTexture2D* Texture, class UImage* CallFunc_CreateImage_ReturnValue);
    void SetContentAsWidget(class UWidget* InWidget, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void UpdateSelectionBorder(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor);
    void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshNextFrame();
    void PlayIntroAnim(bool IsLeftSide, float Duration);
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Base(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_IsLeftSide, float K2Node_CustomEvent_Duration, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetShowUIAnimations_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, const FPointerEvent K2Node_Event_MouseEvent);
    void OnEquippedChanged__DelegateSignature();
};

#endif
