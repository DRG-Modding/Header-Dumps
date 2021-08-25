// WidgetBlueprintGeneratedClass W_Button_Spawn.W_Button_Spawn_C
// Size: 0x2a0 (Inherited: 0x230)
struct UW_Button_Spawn_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextBlock* ButtonTextBlock; // 0x238(0x08)
	struct UButton* ClearSpawnButton; // 0x240(0x08)
	struct UButton* SpawnButton; // 0x248(0x08)
	struct FText Button Text; // 0x250(0x18)
	struct FMulticastInlineDelegate On Spawn Button Clicked; // 0x268(0x10)
	struct FMulticastInlineDelegate On Despawn Button Clicked; // 0x278(0x10)
	struct AActor* Spawn Actor; // 0x288(0x08)
	struct FString Category; // 0x290(0x10)

	void PreConstruct(bool IsDesignTime); // Function W_Button_Spawn.W_Button_Spawn_C.PreConstruct
	void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_Button_Spawn.W_Button_Spawn_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ClearSpawnButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_Button_Spawn.W_Button_Spawn_C.BndEvt__ClearSpawnButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_W_Button_Spawn(int32_t EntryPoint); // Function W_Button_Spawn.W_Button_Spawn_C.ExecuteUbergraph_W_Button_Spawn
	void On Despawn Button Clicked__DelegateSignature(struct AActor* Actor To Destroy); // Function W_Button_Spawn.W_Button_Spawn_C.On Despawn Button Clicked__DelegateSignature
	void On Spawn Button Clicked__DelegateSignature(struct AActor* Actor To Spawn); // Function W_Button_Spawn.W_Button_Spawn_C.On Spawn Button Clicked__DelegateSignature
};

