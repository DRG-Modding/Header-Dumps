// WidgetBlueprintGeneratedClass HUD_Chat.HUD_Chat_C
// Size: 0x288 (Inherited: 0x230)
struct UHUD_Chat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* BackgroundFade; // 0x238(0x08)
	UBorder* Border_1; // 0x240(0x08)
	UImage* ChatBackground; // 0x248(0x08)
	UImage* ChatBar; // 0x250(0x08)
	UVerticalBox* ChatMessages; // 0x258(0x08)
	UEditableTextBox* NewChatEdit; // 0x260(0x08)
	float Duration; // 0x268(0x04)
	float FadeTime; // 0x26c(0x04)
	int32_t MaxLines; // 0x270(0x04)
	bool InLoadMenu; // 0x274(0x01)
	enum class EChatSenderType SenderType; // 0x275(0x01)
	UEditableTextBox* OutsiteChatbox; // 0x278(0x08)
	UEditableTextBox* InputChatBox; // 0x280(0x08)

	void IsStringNotEmpty(FString String, bool IsEmpty);
	void GetSenderType(enum class EChatSenderType SenderType);
	void OpenChat();
	void BeginChat();
	void OnOpenChat();
	void Update Chat Background();
	void Add Chat Message(FFSDChatMessage Msg);
	void OnMessageHidden_Event();
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void PreConstruct(bool IsDesignTime);
	void CloseChat();
	void OnBackgroundFadeFinished();
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	void SendChatMessage(FText InText, enum class ETextCommit CommitMethod);
	void NewMesssage(FFSDChatMessage Message);
	void Construct();
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	void ExecuteUbergraph_HUD_Chat(int32_t EntryPoint);
};

