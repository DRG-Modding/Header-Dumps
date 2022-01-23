#ifndef UE4SS_SDK_ConsoleScreen_Season01_HPP
#define UE4SS_SDK_ConsoleScreen_Season01_HPP

class UConsoleScreen_Season01_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BackgroundAnim;
    class UWidgetAnimation* TextAnim;
    class UBorder* Border_3;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UImage* Image_46;
    class UImage* Image_197;
    FText TextToDisplay;
    FText NotificationText;
    class UTexture2D* NotificationIcon;
    bool NotificationVisible;
    bool Toggle Header Bars;
    int32 TextSize;

    void SetNotificationVisible(bool IsVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNotification(FText Text, class UTexture2D* InIcon);
    void PreConstruct(bool IsDesignTime);
    void OnClaimStatusChanged(bool AllClaimed);
    void OnTokensChanged(int32 NumberOfTokens, int32 Change);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Season01(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_RandomFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FExecuteUbergraph_ConsoleScreen_Season01K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_AllClaimed, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfTokens_ReturnValue, FExecuteUbergraph_ConsoleScreen_Season01K2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_NumberOfTokens, int32 K2Node_CustomEvent_Change, bool CallFunc_Greater_IntInt_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_HasClaimedAllRewards_ReturnValue);
};

#endif
