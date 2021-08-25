// WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C
// Size: 0x258 (Inherited: 0x230)
struct UWND_Jobs_Entry_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct FMulticastInlineDelegate Unfolded; // 0x238(0x10)
	struct FMulticastInlineDelegate Updated; // 0x248(0x10)

	void Fold(); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
	void SetData(struct UCampaign* Campaign); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
	void Refresh(); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
	void Unfold(); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfold
	void ExecuteUbergraph_WND_Jobs_Entry_Base(int32_t EntryPoint); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
	void Updated__DelegateSignature(); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
	void Unfolded__DelegateSignature(struct UWND_Jobs_Entry_Base_C* entry); // Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
};

