// WidgetBlueprintGeneratedClass W_SpawnList.W_SpawnList_C
// Size: 0x271 (Inherited: 0x230)
struct UW_SpawnList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UScrollBox* ScrollBox; // 0x238(0x08)
	UW_ListTitleBar_C* List Title Bar Class; // 0x240(0x08)
	UW_ListItem_C* List Item Class; // 0x248(0x08)
	FMulticastInlineDelegate On Spawn Requested; // 0x250(0x10)
	FMulticastInlineDelegate On Cull Requested; // 0x260(0x10)
	enum class EObjectCategory Category; // 0x270(0x01)

	void Clear All();
	void Load(enum class EObjectCategory Category To Load);
	void Add List Item(FText Name, FName Object ID);
	void Get Objects By Filter(enum class EObjectCategory Category, enum class EObjectFamily Family, TArray<FDataTableRowHandle> Rows);
	void Add Title Bar(FText Group Text);
	void OnInitialized();
	void List Item Added Event(UW_ListItem_C* List Item);
	void Spawn Requested Event(FName Object ID);
	void Cull Requested Event(FName Object ID);
	void ExecuteUbergraph_W_SpawnList(int32_t EntryPoint);
	void On Cull Requested__DelegateSignature(FName Object ID);
	void On Spawn Requested__DelegateSignature(FName Object ID);
};

