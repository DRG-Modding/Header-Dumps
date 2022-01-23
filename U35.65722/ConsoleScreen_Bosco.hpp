#ifndef UE4SS_SDK_ConsoleScreen_Bosco_HPP
#define UE4SS_SDK_ConsoleScreen_Bosco_HPP

class UConsoleScreen_Bosco_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void UpdateUINotification();
    void OnSkinUnlocked(class UItemSkin* Skin, class UItemID* ItemID);
    void ExecuteUbergraph_ConsoleScreen_Bosco(int32 EntryPoint, FExecuteUbergraph_ConsoleScreen_BoscoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ConsoleScreen_BoscoK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_RandomFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue, class UItemSkin* K2Node_CustomEvent_Skin, class UItemID* K2Node_CustomEvent_itemID, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
};

#endif
