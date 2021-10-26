// BlueprintGeneratedClass BP_SpawnerEyeComponent.BP_SpawnerEyeComponent_C
// Size: 0xd1 (Inherited: 0xb0)
struct UBP_SpawnerEyeComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPrimitiveComponent* EyeCollider; 
	UPROPERTY(BlueprintReadWrite) float Health; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* EyeMesh; 
	UPROPERTY(BlueprintReadWrite) bool IsAlive; 

	UFUNCTION(BlueprintCallable) void OnRep_IsAlive();
	UFUNCTION(BlueprintCallable) void IsEyeThatWasHit(UPrimitiveComponent* EyeCollider, bool WasHit);
	UFUNCTION(BlueprintCallable) void TakeDamage(float Damage, bool Died);
	UFUNCTION(BlueprintCallable) void SetMeshAndCollider(UPrimitiveComponent* Collider, USkeletalMeshComponent* Mesh, int32_t PartOfTotalHealth, float SpawnerHealth);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SpawnerEyeComponent(int32_t EntryPoint);
};

