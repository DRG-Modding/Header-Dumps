// BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C
// Size: 0x17c (Inherited: 0x170)
struct UTutorial_ThrowCarriable_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	int32_t PickupCount; // 0x178(0x04)

	void ReceiveOnInitialized();
	void OnCarriableChangedEvent(AActor* carriedActor);
	void OnThrowCarriableProgress(float Progress, float timeToCancel, bool isDone);
	void ExecuteUbergraph_Tutorial_ThrowCarriable(int32_t EntryPoint);
};

