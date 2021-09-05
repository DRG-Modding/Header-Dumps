// BlueprintGeneratedClass NameplateComponent.NameplateComponent_C
// Size: 0x560 (Inherited: 0x540)
struct UNameplateComponent_C : UWidgetComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	AActor* View Target; // 0x548(0x08)
	FString ViewerName; // 0x550(0x10)

	void Setup Nameplate(FText Text, FLinearColor Text Color, AActor* Look at Target);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_NameplateComponent(int32_t EntryPoint);
};

