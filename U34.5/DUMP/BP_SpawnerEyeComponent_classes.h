// BlueprintGeneratedClass BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C
// Size: 0xd1 (Inherited: 0xb0)
struct UBP_SpawnerEyeComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	UPrimitiveComponent* EyeCollider; // 0xb8(0x08)
	float Health; // 0xc0(0x04)
	USkeletalMeshComponent* EyeMesh; // 0xc8(0x08)
	bool IsAlive; // 0xd0(0x01)

	void OnRep_IsAlive();
	void IsEyeThatWasHit(UPrimitiveComponent* EyeCollider, bool WasHit);
	void TakeDamage(float Damage, bool Died);
	void SetMeshAndCollider(UPrimitiveComponent* Collider, USkeletalMeshComponent* Mesh, int32_t PartOfTotalHealth, float SpawnerHealth);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpawnerEyeComponent(int32_t EntryPoint);
};

