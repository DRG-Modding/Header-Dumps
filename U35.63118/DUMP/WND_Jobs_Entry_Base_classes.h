// WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C
// Size: 0x258 (Inherited: 0x230)
struct UWND_Jobs_Entry_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	FMulticastInlineDelegate Unfolded; // 0x238(0x10)
	FMulticastInlineDelegate Updated; // 0x248(0x10)

	void fold();
	void SetData(UCampaign* Campaign);
	void Refresh();
	void Unfold();
	void ExecuteUbergraph_WND_Jobs_Entry_Base(int32_t EntryPoint);
	void Updated__DelegateSignature();
	void Unfolded__DelegateSignature(UWND_Jobs_Entry_Base_C* Entry);
};

