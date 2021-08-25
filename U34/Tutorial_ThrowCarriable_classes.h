// BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C
// Size: 0x17c (Inherited: 0x170)
struct UTutorial_ThrowCarriable_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	int32_t PickupCount; // 0x178(0x04)

	void ReceiveOnInitialized(); // Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ReceiveOnInitialized
	void OnCarriableChangedEvent(struct AActor* carriedActor); // Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnCarriableChangedEvent
	void OnThrowCarriableProgress(float Progress, float timeToCancel, bool isDone); // Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.OnThrowCarriableProgress
	void ExecuteUbergraph_Tutorial_ThrowCarriable(int32_t EntryPoint); // Function Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C.ExecuteUbergraph_Tutorial_ThrowCarriable
};

