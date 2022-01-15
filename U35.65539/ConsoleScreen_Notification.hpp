#ifndef UE4SS_SDK_ConsoleScreen_Notification_HPP
#define UE4SS_SDK_ConsoleScreen_Notification_HPP

class UConsoleScreen_Notification_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Ping;
    UImage* LeftIcon;
    UTextBlock* NotificationLabel;
    UImage* RightIcon;
    UBorder* TextBackground;
    UBorder* TextBorder;
    FText NotificationText;
    int32 TextSize;
    bool UpperCase;
    FSlateBrush IconBrush;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    UCategoryID* CategoryID;

    void SetTextSize(int32 InTextSize);
    void SetNotificationIcon(UTexture2D* Texture);
    void SetNotificationText(FText Text, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetNotificationCategory(UCategoryID* CategoryID);
    void OnItemCategoryChanged();
    void ExecuteUbergraph_ConsoleScreen_Notification(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, UCategoryID* K2Node_CustomEvent_CategoryID, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
