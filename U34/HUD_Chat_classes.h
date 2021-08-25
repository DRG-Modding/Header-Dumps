// WidgetBlueprintGeneratedClass HUD_Chat.HUD_Chat_C
// Size: 0x288 (Inherited: 0x230)
struct UHUD_Chat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* BackgroundFade; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct UImage* ChatBackground; // 0x248(0x08)
	struct UImage* ChatBar; // 0x250(0x08)
	struct UVerticalBox* ChatMessages; // 0x258(0x08)
	struct UEditableTextBox* NewChatEdit; // 0x260(0x08)
	float Duration; // 0x268(0x04)
	float FadeTime; // 0x26c(0x04)
	int32_t MaxLines; // 0x270(0x04)
	bool InLoadMenu; // 0x274(0x01)
	enum class EChatSenderType SenderType; // 0x275(0x01)
	char UnknownData_276[0x2]; // 0x276(0x02)
	struct UEditableTextBox* OutsiteChatbox; // 0x278(0x08)
	struct UEditableTextBox* InputChatBox; // 0x280(0x08)

	void IsStringNotEmpty(struct FString String, bool IsEmpty); // Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
	void GetSenderType(enum class EChatSenderType SenderType); // Function HUD_Chat.HUD_Chat_C.GetSenderType
	void OpenChat(); // Function HUD_Chat.HUD_Chat_C.OpenChat
	void BeginChat(); // Function HUD_Chat.HUD_Chat_C.BeginChat
	void OnOpenChat(); // Function HUD_Chat.HUD_Chat_C.OnOpenChat
	void Update Chat Background(); // Function HUD_Chat.HUD_Chat_C.Update Chat Background
	void Add Chat Message(struct FFSDChatMessage Msg); // Function HUD_Chat.HUD_Chat_C.Add Chat Message
	void OnMessageHidden_Event(); // Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function HUD_Chat.HUD_Chat_C.PreConstruct
	void CloseChat(); // Function HUD_Chat.HUD_Chat_C.CloseChat
	void OnBackgroundFadeFinished(); // Function HUD_Chat.HUD_Chat_C.OnBackgroundFadeFinished
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
	void BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function HUD_Chat.HUD_Chat_C.BndEvt__OutsiteChatbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void SendChatMessage(struct FText InText, char CommitMethod); // Function HUD_Chat.HUD_Chat_C.SendChatMessage
	void NewMesssage(struct FFSDChatMessage Message); // Function HUD_Chat.HUD_Chat_C.NewMesssage
	void Construct(); // Function HUD_Chat.HUD_Chat_C.Construct
	void BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
	void ExecuteUbergraph_HUD_Chat(int32_t EntryPoint); // Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
};

