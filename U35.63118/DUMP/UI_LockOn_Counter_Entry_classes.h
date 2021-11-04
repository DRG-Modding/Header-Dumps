// WidgetBlueprintGeneratedClass UI_LockOn_Counter_Entry.UI_LockOn_Counter_Entry_C
// Size: 0x264 (Inherited: 0x230)
struct UUI_LockOn_Counter_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimLimit; // 0x238(0x08)
	UWidgetAnimation* AnimPing; // 0x240(0x08)
	UUI_ImageTinted_C* Background; // 0x248(0x08)
	UUI_ImageTinted_C* Foreground; // 0x250(0x08)
	UUI_ImageTinted_C* Limit; // 0x258(0x08)
	bool IsOn; // 0x260(0x01)
	bool IsLimit; // 0x261(0x01)
	bool PreviewOn; // 0x262(0x01)
	bool PreviewLimit; // 0x263(0x01)

	void SetState(bool NewIsOn, bool NewIsLimit);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_LockOn_Counter_Entry(int32_t EntryPoint);
};

