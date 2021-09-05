// BlueprintGeneratedClass Sign_MemorialUnlock.Sign_MemorialUnlock_C
// Size: 0x295 (Inherited: 0x220)
struct ASign_MemorialUnlock_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget; // 0x228(0x08)
	UTextRenderComponent* TEXT_Main; // 0x230(0x08)
	UStaticMeshComponent* Cube; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	FText Text; // 0x248(0x18)
	bool Single Line; // 0x260(0x01)
	FText Text2; // 0x268(0x18)
	float Text Size; // 0x280(0x04)
	FColor Text Color; // 0x284(0x04)
	bool Capitals; // 0x288(0x01)
	FVector2D BoxScale; // 0x28c(0x08)
	bool Visible; // 0x294(0x01)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Sign_MemorialUnlock(int32_t EntryPoint);
};

