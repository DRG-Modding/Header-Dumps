#ifndef UE4SS_SDK_HUD_ChatLine_HPP
#define UE4SS_SDK_HUD_ChatLine_HPP

class UHUD_ChatLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextSizable* ChatRichText;
    class UScaleBox* LineScaleBox;
    class UImage* SenderIcon;
    float Duration;
    float FadeOut;
    FFSDChatMessage Msg;
    FVector2D PrevSize;
    FHUD_ChatLine_COnMessageHidden OnMessageHidden;
    void OnMessageHidden();
    EChatMessageType PreviewMsgType;
    FString PreviewSender;
    EChatSenderType PreviewSenderType;
    FString PreviewMsg;
    int32 PreviewSize;

    void ChangeFontSize(int32 InSize);
    void RemoveTags(FString Source, FString& Result);
    void EncloseText(FString Pre, FText Text, FString Post, FText& Result);
    void StyledText(FText style Name, FText Text, FText& Result);
    void UpdateUserIcon(EChatMessageType MessageType, EChatSenderType SenderType);
    void UpdateOpacity();
    void SetMessage(EChatMessageType MsgType, FString SenderStr, EChatSenderType SenderType, FString MsgStr);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_ChatLine(int32 EntryPoint);
    void OnMessageHidden__DelegateSignature();
};

#endif
