// WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C
// Size: 0x2fc (Inherited: 0x230)
struct UHUD_ChatLine_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	URichTextSizable* ChatRichText; // 0x238(0x08)
	UImage* SenderIcon; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float FadeOut; // 0x24c(0x04)
	FFSDChatMessage Msg; // 0x250(0x60)
	FVector2D PrevSize; // 0x2b0(0x08)
	FMulticastInlineDelegate OnMessageHidden; // 0x2b8(0x10)
	enum class EChatMessageType PreviewMsgType; // 0x2c8(0x01)
	FString PreviewSender; // 0x2d0(0x10)
	enum class EChatSenderType PreviewSenderType; // 0x2e0(0x01)
	FString PreviewMsg; // 0x2e8(0x10)
	int32_t oldFontSize; // 0x2f8(0x04)

	void RemoveTags(FString Source, FString Result);
	void EncloseText(FString Pre, FText Text, FString Post, FText Result);
	void StyledText(FText style Name, FText Text, FText Result);
	void UpdateUserIcon(enum class EChatMessageType MessageType, enum class EChatSenderType SenderType);
	void UpdateOpacity();
	void SetMessage(enum class EChatMessageType MsgType, FString SenderStr, enum class EChatSenderType SenderType, FString MsgStr);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ChangeFontSize(int32_t NewValue);
	void ExecuteUbergraph_HUD_ChatLine(int32_t EntryPoint);
	void OnMessageHidden__DelegateSignature();
};

