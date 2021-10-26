// WidgetBlueprintGeneratedClass W_SpawnList.W_SpawnList_C
// Size: 0x271 (Inherited: 0x230)
struct UW_SpawnList_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UScrollBox* ScrollBox; 
	UPROPERTY(BlueprintReadWrite) UW_ListTitleBar_C* List Title Bar Class; 
	UPROPERTY(BlueprintReadWrite) UW_ListItem_C* List Item Class; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Spawn Requested; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Cull Requested; 
	UPROPERTY(BlueprintReadWrite) enum class EObjectCategory Category; 

	UFUNCTION(BlueprintCallable) void Clear All();
	UFUNCTION(BlueprintCallable) void Load(enum class EObjectCategory Category To Load);
	UFUNCTION(BlueprintCallable) void Add List Item(FText Name, FName Object ID);
	UFUNCTION(BlueprintCallable) void Get Objects By Filter(enum class EObjectCategory Category, enum class EObjectFamily Family, TArray<FDataTableRowHandle> Rows);
	UFUNCTION(BlueprintCallable) void Add Title Bar(FText Group Text);
	UFUNCTION(BlueprintCallable) void OnInitialized();
	UFUNCTION(BlueprintCallable) void List Item Added Event(UW_ListItem_C* List Item);
	UFUNCTION(BlueprintCallable) void Spawn Requested Event(FName Object ID);
	UFUNCTION(BlueprintCallable) void Cull Requested Event(FName Object ID);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_SpawnList(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Cull Requested__DelegateSignature(FName Object ID);
	UFUNCTION(BlueprintCallable) void On Spawn Requested__DelegateSignature(FName Object ID);
};

