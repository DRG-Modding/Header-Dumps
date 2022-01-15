#ifndef UE4SS_SDK_HUD_ItemWheel_HPP
#define UE4SS_SDK_HUD_ItemWheel_HPP

class UHUD_ItemWheel_C : UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeInOut;
    UUI_AdvancedLabel_C* dpaddown;
    UUI_AdvancedLabel_C* dpadleft;
    UUI_AdvancedLabel_C* dpadright;
    UUI_AdvancedLabel_C* dpadup;
    UWidgetSwitcher* ImageSwitcher;
    UOverlay* ItemHolder0;
    UOverlay* ItemHolder1;
    UOverlay* ItemHolder2;
    UOverlay* ItemHolder3;
    UOverlay* SupplyItemHolder;
    TArray<UOverlay*> ItemHolders;
    float VisibleDuration;
    bool WidgetVisible;

    void SwapUpperItems(UWidget* Unselected, UWidget* Selected);
    void OnItemAdded(UItemsBarIcon* ItemIcon);
    void PreConstruct(bool IsDesignTime);
    void OnItemEquipped(UItemsBarIcon* ItemIcon);
    void AddIcon(UItemsBarIcon* Icon, int32 Index);
    void OnClear();
    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void Show();
    void OnItemClicked();
    void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
    void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
    void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
    void OnFadeInOutFinished();
    void OnFadeInOutStarted();
    void ExecuteUbergraph_HUD_ItemWheel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UItemsBarIcon* K2Node_Event_ItemIcon_4, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UItemsBarIcon* K2Node_Event_ItemIcon_3, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UItemsBarIcon* K2Node_CustomEvent_Icon, int32 K2Node_CustomEvent_Index, UOverlay* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, UOverlay* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, TArray<UOverlay*>& K2Node_MakeArray_Array, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UItemsBarIcon* K2Node_Event_ItemIcon_2, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, UItemsBarIcon* CallFunc_Create_ReturnValue, UItemsBarIcon* CallFunc_Create_ReturnValue_1, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, UItemsBarIcon* K2Node_Event_ItemIcon_1, UItemsBarIcon* K2Node_Event_ItemIcon, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
