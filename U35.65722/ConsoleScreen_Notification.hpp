#ifndef UE4SS_SDK_ConsoleScreen_Notification_HPP
#define UE4SS_SDK_ConsoleScreen_Notification_HPP

class UConsoleScreen_Notification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Ping;
    class UImage* LeftIcon;
    class UTextBlock* NotificationLabel;
    class UImage* RightIcon;
    class UBorder* TextBackground;
    class UBorder* TextBorder;
    FText NotificationText;
    int32 TextSize;
    bool UpperCase;
    FSlateBrush IconBrush;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    class UCategoryID* CategoryID;

    void SetTextSize(int32 InTextSize);
    void SetNotificationIcon(class UTexture2D* Texture);
    void SetNotificationText(FText Text, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetNotificationCategory(class UCategoryID* CategoryID);
    void OnItemCategoryChanged();
    void ExecuteUbergraph_ConsoleScreen_Notification(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, class UCategoryID* K2Node_CustomEvent_CategoryID, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FExecuteUbergraph_ConsoleScreen_NotificationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
