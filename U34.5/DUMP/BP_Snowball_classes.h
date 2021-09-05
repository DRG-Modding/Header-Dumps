// BlueprintGeneratedClass BP_Snowball.BP_Snowball_C
// Size: 0x250 (Inherited: 0x230)
struct ABP_Snowball_C : AThrowableActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UDamageComponent* Damage; // 0x238(0x08)
	USphereComponent* Sphere; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh; // 0x248(0x08)

	void ReceiveBeginPlay();
	void Impact();
	void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit);
	void ReceiveIgnoreCharacter(APlayerCharacter* Character);
	void ExecuteUbergraph_BP_Snowball(int32_t EntryPoint);
};

