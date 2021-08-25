// BlueprintGeneratedClass BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C
// Size: 0xd1 (Inherited: 0xb0)
struct UBP_SpawnerEyeComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPrimitiveComponent* EyeCollider; // 0xb8(0x08)
	float Health; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct USkeletalMeshComponent* EyeMesh; // 0xc8(0x08)
	bool IsAlive; // 0xd0(0x01)

	void OnRep_IsAlive(); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.OnRep_IsAlive
	void IsEyeThatWasHit(struct UPrimitiveComponent* EyeCollider, bool WasHit); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.IsEyeThatWasHit
	void TakeDamage(float Damage, bool Died); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.TakeDamage
	void SetMeshAndCollider(struct UPrimitiveComponent* Collider, struct USkeletalMeshComponent* Mesh, int32_t PartOfTotalHealth, float SpawnerHealth); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.SetMeshAndCollider
	void ReceiveBeginPlay(); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SpawnerEyeComponent(int32_t EntryPoint); // Function BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C.ExecuteUbergraph_BP_SpawnerEyeComponent
};

