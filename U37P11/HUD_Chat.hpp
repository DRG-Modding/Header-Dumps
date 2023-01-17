#ifndef UE4SS_SDK_HUD_Chat_HPP
#define UE4SS_SDK_HUD_Chat_HPP

class UHUD_Chat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* BackgroundFade;
    class UBorder* Border_0;
    class UImage* ChatBackground;
    class UImage* ChatBar;
    class UVerticalBox* ChatMessages;
    class UHUD_ChatLine_C* HUD_ChatLine;
    class UHUD_ChatLine_C* HUD_ChatLine_1;
    class UHUD_ChatLine_C* HUD_ChatLine_2;
    class UEditableTextBox* NewChatEdit;
    float Duration;
    float FadeTime;
    int32 MaxLines;
    bool InLoadMenu;
    EChatSenderType SenderType;
    class UEditableTextBox* OutsiteChatbox;
    class UEditableTextBox* InputChatBox;
    float MinLinesConst;
    float MaxLinesConst;
    bool IsChatOpen;
    bool CanChatBeOpened;
    FTimerHandle ConsoleChatStartDelay;

    void FilterBlockedUserMessage(FFSDChatMessage InMessage, EChatMessageType& FilteredMessageType, FString& FilteredMessage);
    void FilterMessage(FFSDChatMessage InMessage, FFSDChatMessage& FilteredMessage);
    void FilterProfanityMessage(FString MessageToFilter, FString& OutMessage);
    void SetMaxLinesFromFontSize(int32 FontSize);
    void UpdateChatMessages(bool resetAge);
    void IsStringNotEmpty(FString String, bool& isEmpty);
    void GetSenderType(EChatSenderType& SenderType);
    void OpenChat();
    void BeginChat();
    void OnOpenChat();
    void Update Chat Background();
    void Add Chat Message(FFSDChatMessage Msg);
    void OnMessageHidden_Event();
    void PreConstruct(bool IsDesignTime);
    void CloseChat();
    void OnBackgroundFadeFinished();
    void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void SendChatMessage(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void NewMesssage(const FFSDChatMessage& Message);
    void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Construct();
    void OnFontSizeChange(int32 NewValue);
    void PlatformDependentClose();
    void ChatOpenCooldown();
    void ChatClosedCooldown();
    void Destruct();
    void ExecuteUbergraph_HUD_Chat(int32 EntryPoint);
};

#endif
