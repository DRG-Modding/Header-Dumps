// BlueprintGeneratedClass BP_DamageTriggerComponent.BP_DamageTriggerComponent_C
// Size: 0xf1 (Inherited: 0xb0)
struct UBP_DamageTriggerComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TArray<struct UHealthComponent*> ActorsInRange; // 0xb8(0x10)
	bool CanOnlyHurtPlayers; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct FMulticastInlineDelegate ActorEntered; // 0xd0(0x10)
	struct FMulticastInlineDelegate ActorExited; // 0xe0(0x10)
	bool CheckOnClient; // 0xf0(0x01)

	bool IsEmpty(); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.IsEmpty
	void ReceiveBeginPlay(); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.ReceiveBeginPlay
	void OnActorBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.OnActorBeginOverlap
	void OnActorEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.OnActorEndOverlap
	void ExecuteUbergraph_BP_DamageTriggerComponent(int32_t EntryPoint); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.ExecuteUbergraph_BP_DamageTriggerComponent
	void ActorExited__DelegateSignature(struct UHealthComponent* OtherHealthComponent); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.ActorExited__DelegateSignature
	void ActorEntered__DelegateSignature(struct UHealthComponent* OtherHealthComponent); // Function BP_DamageTriggerComponent.BP_DamageTriggerComponent_C.ActorEntered__DelegateSignature
};

