// WidgetBlueprintGeneratedClass HUD_ChatLine.HUD_ChatLine_C
// Size: 0x2fc (Inherited: 0x230)
struct UHUD_ChatLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct URichTextSizable* ChatRichText; // 0x238(0x08)
	struct UImage* SenderIcon; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float FadeOut; // 0x24c(0x04)
	struct FFSDChatMessage Msg; // 0x250(0x60)
	struct FVector2D PrevSize; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnMessageHidden; // 0x2b8(0x10)
	enum class EChatMessageType PreviewMsgType; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct FString PreviewSender; // 0x2d0(0x10)
	enum class EChatSenderType PreviewSenderType; // 0x2e0(0x01)
	char UnknownData_2E1[0x7]; // 0x2e1(0x07)
	struct FString PreviewMsg; // 0x2e8(0x10)
	int32_t oldFontSize; // 0x2f8(0x04)

	void RemoveTags(struct FString Source, struct FString Result); // Function HUD_ChatLine.HUD_ChatLine_C.RemoveTags
	void EncloseText(struct FString Pre, struct FText Text, struct FString Post, struct FText Result); // Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
	void StyledText(struct FText style Name, struct FText Text, struct FText Result); // Function HUD_ChatLine.HUD_ChatLine_C.StyledText
	void UpdateUserIcon(enum class EChatMessageType MessageType, enum class EChatSenderType SenderType); // Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
	void UpdateOpacity(); // Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
	void SetMessage(enum class EChatMessageType MsgType, struct FString SenderStr, enum class EChatSenderType SenderType, struct FString MsgStr); // Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
	void Construct(); // Function HUD_ChatLine.HUD_ChatLine_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_ChatLine.HUD_ChatLine_C.Tick
	void PreConstruct(bool IsDesignTime); // Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
	void ChangeFontSize(int32_t NewValue); // Function HUD_ChatLine.HUD_ChatLine_C.ChangeFontSize
	void ExecuteUbergraph_HUD_ChatLine(int32_t EntryPoint); // Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
	void OnMessageHidden__DelegateSignature(); // Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
};

