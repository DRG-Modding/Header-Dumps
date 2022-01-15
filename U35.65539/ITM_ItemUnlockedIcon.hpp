#ifndef UE4SS_SDK_ITM_ItemUnlockedIcon_HPP
#define UE4SS_SDK_ITM_ItemUnlockedIcon_HPP

class UITM_ItemUnlockedIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* OutroAnim;
    UWidgetAnimation* Ping;
    UImage* UnlockedIcon;
    bool MatchChildNotifications;
    TArray<UObject*> IDArray;
    bool HasNotification;
    FITM_ItemUnlockedIcon_COnNotificationRemoved OnNotificationRemoved;
    void OnNotificationRemoved();
    TArray<UITM_ItemUnlockedIcon_C*> Children;
    FITM_ItemUnlockedIcon_COnChanged OnChanged;
    void OnChanged();

    void Refresh(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_NotEqual_BoolBool_ReturnValue);
    void ClearChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UITM_ItemUnlockedIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void ChildNotificationChanged(bool OldHasNotification, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UITM_ItemUnlockedIcon_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void AddChildNotification(UITM_ItemUnlockedIcon_C* ChildIcon, OnChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnNotificationRemoved__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void RemoveNotification(bool CallFunc_CheckItemUINotification_HasNotification);
    void SetItemIDArray(TArray<UObject*>& ObjectsWithID, bool MatchChildNotifications, bool CallFunc_CheckItemUINotification_HasNotification);
    void SetVisible();
    void HideIcon();
    void OnAnimFinished();
    void ExecuteUbergraph_ITM_ItemUnlockedIcon(int32 EntryPoint, bool CallFunc_IsAnimationPlaying_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnChanged__DelegateSignature();
    void OnNotificationRemoved__DelegateSignature();
}

#endif
