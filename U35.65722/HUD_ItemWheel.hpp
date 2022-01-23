#ifndef UE4SS_SDK_HUD_ItemWheel_HPP
#define UE4SS_SDK_HUD_ItemWheel_HPP

class UHUD_ItemWheel_C : public UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeInOut;
    class UUI_AdvancedLabel_C* dpaddown;
    class UUI_AdvancedLabel_C* dpadleft;
    class UUI_AdvancedLabel_C* dpadright;
    class UUI_AdvancedLabel_C* dpadup;
    class UWidgetSwitcher* ImageSwitcher;
    class UOverlay* ItemHolder0;
    class UOverlay* ItemHolder1;
    class UOverlay* ItemHolder2;
    class UOverlay* ItemHolder3;
    class UOverlay* SupplyItemHolder;
    TArray<class UOverlay*> ItemHolders;
    float VisibleDuration;
    bool WidgetVisible;

    void SwapUpperItems(class UWidget* Unselected, class UWidget* Selected);
    void OnItemAdded(class UItemsBarIcon* ItemIcon);
    void PreConstruct(bool IsDesignTime);
    void OnItemEquipped(class UItemsBarIcon* ItemIcon);
    void AddIcon(class UItemsBarIcon* Icon, int32 Index);
    void OnClear();
    void Construct();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void Show();
    void OnItemClicked();
    void OnSupplyItemAdded(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemUnequipped(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemEquipped(class UItemsBarIcon* ItemIcon);
    void OnFadeInOutFinished();
    void OnFadeInOutStarted();
    void ExecuteUbergraph_HUD_ItemWheel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UItemsBarIcon* K2Node_Event_ItemIcon_4, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemsBarIcon* K2Node_Event_ItemIcon_3, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UItemsBarIcon* K2Node_CustomEvent_Icon, int32 K2Node_CustomEvent_Index, class UOverlay* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UOverlay* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, TArray<class UOverlay*>& K2Node_MakeArray_Array, FExecuteUbergraph_HUD_ItemWheelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UItemsBarIcon* K2Node_Event_ItemIcon_2, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, class UItemsBarIcon* CallFunc_Create_ReturnValue, class UItemsBarIcon* CallFunc_Create_ReturnValue_1, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UItemsBarIcon* K2Node_Event_ItemIcon_1, class UItemsBarIcon* K2Node_Event_ItemIcon, FExecuteUbergraph_HUD_ItemWheelK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_ItemWheelK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
