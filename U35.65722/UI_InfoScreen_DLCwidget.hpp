#ifndef UE4SS_SDK_UI_InfoScreen_DLCwidget_HPP
#define UE4SS_SDK_UI_InfoScreen_DLCwidget_HPP

class UUI_InfoScreen_DLCwidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* Click;
    class UButton* BannerButton;
    class USizeBox* BannerSizer;
    class UWidgetSwitcher* SwitcherDLC;
    float Width;
    float SegmentTime (seconds);
    TArray<class UGameDLC*> SteamDLCs;
    TArray<class UGameDLC*> XboxDLCs;
    TArray<class UGameDLC*> PS4DLCs;

    void GetAvailableDLCs(TArray<class UGameDLC*>& DLCs, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ShowNextWidget();
    void On Banner Clicked(class UGameDLC* dlc);
    void BndEvt__BannerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BannerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void AnimClick();
    void ExecuteUbergraph_UI_InfoScreen_DLCwidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_InfoScreen_DLCwidget_Setup_C* CallFunc_Create_ReturnValue, FExecuteUbergraph_UI_InfoScreen_DLCwidgetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, class UGameDLC* K2Node_CustomEvent_DLC, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, const FString CallFunc_GetSonyAdditionalContentId_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, TArray<class UGameDLC*>& CallFunc_GetAvailableDLCs_DLCs, bool K2Node_SwitchEnum_CmpSuccess, class UGameDLC* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue, bool CallFunc_IsDCLCheckComplete_ReturnValue);
};

#endif
