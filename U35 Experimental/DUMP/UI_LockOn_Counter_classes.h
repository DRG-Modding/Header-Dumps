// WidgetBlueprintGeneratedClass UI_LockOn_Counter.UI_LockOn_Counter_C
// Size: 0x274 (Inherited: 0x230)
struct UUI_LockOn_Counter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UVerticalBox* RowBoxV; // 0x238(0x08)
	int32_t MaxTargets; // 0x240(0x04)
	TArray<UUI_LockOn_Counter_Entry_C*> TargetCounters; // 0x248(0x10)
	ALockOnWeapon* Item; // 0x258(0x08)
	int32_t CurrentTargets; // 0x260(0x04)
	FMargin InnerPadding; // 0x264(0x10)

	void SetCurrentTargets(int32_t InCount);
	void SetMaxTargets(int32_t count);
	void SetupTargetCounter(bool WasCreated, UUserWidget* Widget, int32_t ActiveIndex);
	void PreConstruct(bool IsDesignTime);
	void SetItem(ALockOnWeapon* InItem);
	void OnLockOnCountChanged(int32_t InCurrentCount);
	void ExecuteUbergraph_UI_LockOn_Counter(int32_t EntryPoint);
};

