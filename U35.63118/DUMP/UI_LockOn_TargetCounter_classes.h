// WidgetBlueprintGeneratedClass UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C
// Size: 0x251 (Inherited: 0x230)
struct UUI_LockOn_TargetCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimPing; // 0x238(0x08)
	UUI_ImageTinted_C* Background; // 0x240(0x08)
	UUI_ImageTinted_C* Foreground; // 0x248(0x08)
	bool IsOn; // 0x250(0x01)

	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void SetOn(bool InIsOn);
	void Ping();
	void ExecuteUbergraph_UI_LockOn_TargetCounter(int32_t EntryPoint);
};

