#ifndef UE4SS_SDK_ITM_ItemUnlockedIcon_HPP
#define UE4SS_SDK_ITM_ItemUnlockedIcon_HPP

class UITM_ItemUnlockedIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutroAnim;
    class UWidgetAnimation* Ping;
    class UImage* UnlockedIcon;
    bool MatchChildNotifications;
    TArray<class UObject*> IDArray;
    bool HasNotification;
    FITM_ItemUnlockedIcon_COnNotificationRemoved OnNotificationRemoved;
    void OnNotificationRemoved();
    TArray<class UITM_ItemUnlockedIcon_C*> Children;
    FITM_ItemUnlockedIcon_COnChanged OnChanged;
    void OnChanged();

    void Refresh();
    void ClearChildren();
    void ChildNotificationChanged();
    void AddChildNotification(class UITM_ItemUnlockedIcon_C* ChildIcon);
    void RemoveNotification();
    void SetItemIDArray(TArray<class UObject*>& ObjectsWithID, bool MatchChildNotifications);
    void SetVisible();
    void HideIcon();
    void OnAnimFinished();
    void ExecuteUbergraph_ITM_ItemUnlockedIcon(int32 EntryPoint);
    void OnChanged__DelegateSignature();
    void OnNotificationRemoved__DelegateSignature();
};

#endif
