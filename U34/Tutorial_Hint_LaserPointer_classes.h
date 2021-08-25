// BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C
// Size: 0x1f0 (Inherited: 0x170)
struct UTutorial_Hint_LaserPointer_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)
	struct FTutorialHint ReminderHint; // 0x180(0x70)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
	void OnMarkerPlaced_Event(struct FVector Location, struct FText Name, struct FLinearColor Color, struct AActor* Target, enum class ELaserPointerTargetType TypeOfTarget); // Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnMarkerPlaced_Event
	void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int32_t EntryPoint); // Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
};

