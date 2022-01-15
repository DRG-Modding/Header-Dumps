#ifndef UE4SS_SDK_ConsoleScreen_Season01_HPP
#define UE4SS_SDK_ConsoleScreen_Season01_HPP

class UConsoleScreen_Season01_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BackgroundAnim;
    UWidgetAnimation* TextAnim;
    UBorder* Border_3;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UImage* Image_46;
    UImage* Image_197;
    FText TextToDisplay;
    FText NotificationText;
    UTexture2D* NotificationIcon;
    bool NotificationVisible;
    bool Toggle Header Bars;
    int32 TextSize;

    void SetNotificationVisible(bool IsVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNotification(FText Text, UTexture2D* InIcon);
    void PreConstruct(bool IsDesignTime);
    void OnClaimStatusChanged(bool AllClaimed);
    void OnTokensChanged(int32 NumberOfTokens, int32 Change);
    void Construct();
    void ExecuteUbergraph_ConsoleScreen_Season01(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_RandomFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, OnTokensChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_AllClaimed, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfTokens_ReturnValue, ClaimStatusChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_NumberOfTokens, int32 K2Node_CustomEvent_Change, bool CallFunc_Greater_IntInt_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_HasClaimedAllRewards_ReturnValue);
}

#endif
