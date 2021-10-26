// BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C
// Size: 0x1f0 (Inherited: 0x170)
struct UTutorial_Hint_LaserPointer_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)
	FTutorialHint ReminderHint; // 0x180(0x70)

	void ReceiveOnInitialized();
	void OnMarkerPlaced_Event(FVector Location, FText Name, FLinearColor Color, AActor* Target, enum class ELaserPointerTargetType TypeOfTarget);
	void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int32_t EntryPoint);
};

