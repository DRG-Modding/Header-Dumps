// WidgetBlueprintGeneratedClass W_ProfileGroup.W_ProfileGroup_C
// Size: 0x2c0 (Inherited: 0x230)
struct UW_ProfileGroup_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UButton* ExpandButton; 
	UPROPERTY(BlueprintReadWrite) UCanvasPanel* Main; 
	UPROPERTY(BlueprintReadWrite) UVerticalBox* ProfileEntriesVerticalBox; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* ProfileName; 
	UPROPERTY(BlueprintReadWrite) UButton* SpawnButton; 
	UPROPERTY(BlueprintReadWrite) UButton* SpawnButton_2; 
	UPROPERTY(BlueprintReadWrite) FString Group Name; 
	UPROPERTY(BlueprintReadWrite) bool Is Expanded; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Expand Changed; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Spawn; 
	UPROPERTY(BlueprintReadWrite) TArray<UW_ProfileEntry_C*> Profile Entry Widgets; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Add Profile; 

	UFUNCTION(BlueprintCallable) void Recalculate Random Percentages();
	UFUNCTION(BlueprintCallable) void Update Profile Entry(FGuid Profile ID, FString Title, int32_t Spawn Count, bool Is Random Pooled, float Random Weight, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C);
	UFUNCTION(BlueprintCallable) void Add Profile Entry(FGuid Profile ID, FString Title, int32_t Spawn Count, bool Is Random Pooled, float Random Weight, bool Is Loadout A, bool Is Loadout B, bool Is Loadout C, UW_ProfileEntry_C* Profile Entry Widget);
	UFUNCTION(BlueprintCallable) void Set Expanded(bool Is Expanded);
	UFUNCTION(BlueprintCallable) void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Spawnbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Spawnbutton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_ProfileGroup(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Add Profile__DelegateSignature(FString Profile Name);
	UFUNCTION(BlueprintCallable) void On Spawn__DelegateSignature(FString Group Name);
	UFUNCTION(BlueprintCallable) void On Expand Changed__DelegateSignature(FString Group Name, bool Is Expanded);
};

